import woo
from woo import utils,pack,plot
from woo.dem import *
from woo.core import *
woo.master.usesApi=10101
woo.master.scene=S=Scene(fields=[DemField(gravity=(0,0,-10))])
mat=woo.dem.PelletMat(young=1e6,tanPhi=.5,ktDivKn=.2,density=1000)
if 1:
    sp=pack.SpherePack()
    sp.makeCloud((0,0,0),(10,10,10),.4,rRelFuzz=.5)
    sp.toSimulation(S,mat=mat)
else:
    S.dem.par.add(Sphere.make((0,0,1),.5,mat=mat))

S.dem.par.add(Wall.make(0,axis=2,sense=1,mat=mat))
S.engines=utils.defaultEngines(damping=0.,cp2=Cp2_PelletMat_PelletPhys(),law=Law2_L6Geom_PelletPhys_Pellet(plastSplit=True))+[
    PyRunner(1,'S.plot.addData(i=S.step,t=S.time,Eerr=(S.energy.relErr() if S.step>100 else 0),**S.energy)'),
]
    
S.trackEnergy=True
S.saveTmp()
S.plot.plots={'i':('**S.energy',None,('Eerr','g--'))}
S.plot.plot()
S.run(500)
#from woo import gl
#S.gl.wall.div=10
#S.gl.infCylinder.wire=True
