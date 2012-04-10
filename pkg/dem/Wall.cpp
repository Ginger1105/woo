// © 2009 Václav Šmilauer <eudoxos@arcig.cz>
#include<yade/pkg/dem/Wall.hpp>
#include<yade/pkg/dem/ParticleContainer.hpp>
#include<limits>

YADE_PLUGIN(dem,(Wall)(Bo1_Wall_Aabb)(In2_Wall_ElastMat));
#ifdef YADE_OPENGL
	YADE_PLUGIN(gl,(Gl1_Wall))
#endif

void Bo1_Wall_Aabb::go(const shared_ptr<Shape>& sh){
	Wall& wall=sh->cast<Wall>();
	if(!wall.bound){ wall.bound=make_shared<Aabb>(); }
	assert(wall.numNodesOk());
	Aabb& aabb=wall.bound->cast<Aabb>();
	if(scene->isPeriodic /* && scene->cell->hasShear()*/) throw logic_error(__FILE__ "Walls not supported in periodic cell.");
	const Real& inf=std::numeric_limits<Real>::infinity();
	aabb.min=Vector3r(-inf,-inf,-inf); aabb.max=Vector3r( inf, inf, inf);
	aabb.min[wall.axis]=aabb.max[wall.axis]=sh->nodes[0]->pos[wall.axis];
}

void In2_Wall_ElastMat::go(const shared_ptr<Shape>& sh, const shared_ptr<Material>& m, const shared_ptr<Particle>& particle){
	FOREACH(const Particle::MapParticleContact::value_type& I,particle->contacts){
		const shared_ptr<Contact>& C(I.second); if(!C->isReal()) continue;
		Vector3r F,T,xc;
		std::tie(F,T,xc)=C->getForceTorqueBranch(particle,/*nodeI*/0,scene);
		sh->nodes[0]->getData<DemData>().addForceTorque(F,/*discard any torque on wall*/Vector3r::Zero());
	}
}


#ifdef YADE_OPENGL
	#include<yade/lib/opengl/OpenGLWrapper.hpp>
	#include<yade/pkg/gl/Renderer.hpp>
	#include<yade/lib/base/CompUtils.hpp>
	#include<yade/lib/opengl/GLUtils.hpp>

	int  Gl1_Wall::div=20;
	void Gl1_Wall::go(const shared_ptr<Shape>& shape, const Vector3r& shift, bool wire2, const GLViewInfo& viewInfo){
		const Wall& wall=shape->cast<Wall>();
		int ax0=wall.axis,ax1=(wall.axis+1)%3,ax2=(wall.axis+2)%3;
		glColor3v(CompUtils::mapColor(shape->getBaseColor()));
		glLineWidth(1);
		assert(wall.nodes.size()==1);
		// corner of the drawn plane is at the edge of the visible scene, except for the axis sense, which is in the wall plane
		Vector3r corner=viewInfo.sceneCenter-Vector3r::Ones()*viewInfo.sceneRadius;
		corner[ax0]=wall.nodes[0]->pos[ax0];
		Vector3r unitX=Vector3r::Unit(ax1)*2*viewInfo.sceneRadius/div;
		Vector3r unitY=Vector3r::Unit(ax2)*2*viewInfo.sceneRadius/div;
		GLUtils::Grid(corner,unitX,unitY,Vector2i(div,div),/*edgeMask*/0);
	}
#endif
