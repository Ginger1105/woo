#pragma once

#ifdef QUAD_PRECISION
	typedef long double quad;
	typedef quad Real;
#else
	typedef double Real;
#endif

namespace Wm3 {
// GeometricTools/WildMagic3/Include$ egrep '^typedef\s*([a-zA-Z0-9]+)<float> \1f;' *.h | perl -pe 's/^.*?:(typedef ([a-zA-Z0-9]+).*$)/\ttemplate<class T> class \2; typedef \2<Real> \2r;/'
//
	template<class T> class CylinderFit3; typedef CylinderFit3<Real> CylinderFit3r;
	template<class T> class EllipseFit2; typedef EllipseFit2<Real> EllipseFit2r;
	template<class T> class EllipsoidFit3; typedef EllipsoidFit3<Real> EllipsoidFit3r;
	template<class T> class Arc2; typedef Arc2<Real> Arc2r;
	template<class T> class AxisAlignedBox2; typedef AxisAlignedBox2<Real> AxisAlignedBox2r;
	template<class T> class AxisAlignedBox3; typedef AxisAlignedBox3<Real> AxisAlignedBox3r;
	template<class T> class BandedMatrix; typedef BandedMatrix<Real> BandedMatrixr;
	template<class T> class BezierCurve2; typedef BezierCurve2<Real> BezierCurve2r;
	template<class T> class BezierCurve3; typedef BezierCurve3<Real> BezierCurve3r;
	template<class T> class Bisect1; typedef Bisect1<Real> Bisect1r;
	template<class T> class Bisect2; typedef Bisect2<Real> Bisect2r;
	template<class T> class Bisect3; typedef Bisect3<Real> Bisect3r;
	template<class T> class Box2; typedef Box2<Real> Box2r;
	template<class T> class Box3; typedef Box3<Real> Box3r;
	template<class T> class BSplineBasis; typedef BSplineBasis<Real> BSplineBasisr;
	template<class T> class BSplineCurve2; typedef BSplineCurve2<Real> BSplineCurve2r;
	template<class T> class BSplineCurve3; typedef BSplineCurve3<Real> BSplineCurve3r;
	template<class T> class BSplineFitBasis; typedef BSplineFitBasis<Real> BSplineFitBasisr;
	template<class T> class BSplineFit; typedef BSplineFit<Real> BSplineFitr;
	template<class T> class BSplineGeodesic; typedef BSplineGeodesic<Real> BSplineGeodesicr;
	template<class T> class BSplineRectangle; typedef BSplineRectangle<Real> BSplineRectangler;
	template<class T> class BSplineVolume; typedef BSplineVolume<Real> BSplineVolumer;
	template<class T> class Capsule3; typedef Capsule3<Real> Capsule3r;
	template<class T> class Circle2; typedef Circle2<Real> Circle2r;
	template<class T> class Circle3; typedef Circle3<Real> Circle3r;
	template<class T> class Cone3; typedef Cone3<Real> Cone3r;
	template<class T> class ConformalMap; typedef ConformalMap<Real> ConformalMapr;
	template<class T> class MinCircle2; typedef MinCircle2<Real> MinCircle2r;
	template<class T> class PointInPolygon2; typedef PointInPolygon2<Real> PointInPolygon2r;
	template<class T> class SeparatePoints2; typedef SeparatePoints2<Real> SeparatePoints2r;
	template<class T> class SeparatePoints3; typedef SeparatePoints3<Real> SeparatePoints3r;
	template<class T> class MinSphere3; typedef MinSphere3<Real> MinSphere3r;
	template<class T> class ConvexHull1; typedef ConvexHull1<Real> ConvexHull1r;
	template<class T> class ConvexHull2; typedef ConvexHull2<Real> ConvexHull2r;
	template<class T> class ConvexHull3; typedef ConvexHull3<Real> ConvexHull3r;
	template<class T> class ConvexHull; typedef ConvexHull<Real> ConvexHullr;
	template<class T> class ConvexPolyhedron3; typedef ConvexPolyhedron3<Real> ConvexPolyhedron3r;
	template<class T> class CubicPolynomialCurve2; typedef CubicPolynomialCurve2<Real> CubicPolynomialCurve2r;
	template<class T> class CubicPolynomialCurve3; typedef CubicPolynomialCurve3<Real> CubicPolynomialCurve3r;
	template<class T> class Curve2; typedef Curve2<Real> Curve2r;
	template<class T> class Curve3; typedef Curve3<Real> Curve3r;
	template<class T> class Cylinder3; typedef Cylinder3<Real> Cylinder3r;
	template<class T> class Delaunay1; typedef Delaunay1<Real> Delaunay1r;
	template<class T> class Delaunay2; typedef Delaunay2<Real> Delaunay2r;
	template<class T> class Delaunay3; typedef Delaunay3<Real> Delaunay3r;
	template<class T> class Delaunay; typedef Delaunay<Real> Delaunayr;
	template<class T> class DelPolygonEdge; typedef DelPolygonEdge<Real> DelPolygonEdger;
	template<class T> class DelPolyhedronFace; typedef DelPolyhedronFace<Real> DelPolyhedronFacer;
	template<class T> class DelTetrahedron; typedef DelTetrahedron<Real> DelTetrahedronr;
	template<class T> class DelTriangle; typedef DelTriangle<Real> DelTriangler;
	template<class T> class DistCircle3Circle3; typedef DistCircle3Circle3<Real> DistCircle3Circle3r;
	template<class T> class DistLine2Line2; typedef DistLine2Line2<Real> DistLine2Line2r;
	template<class T> class DistLine2Ray2; typedef DistLine2Ray2<Real> DistLine2Ray2r;
	template<class T> class DistLine2Segment2; typedef DistLine2Segment2<Real> DistLine2Segment2r;
	template<class T> class DistLine3Box3; typedef DistLine3Box3<Real> DistLine3Box3r;
	template<class T> class DistLine3Circle3; typedef DistLine3Circle3<Real> DistLine3Circle3r;
	template<class T> class DistLine3Line3; typedef DistLine3Line3<Real> DistLine3Line3r;
	template<class T> class DistLine3Ray3; typedef DistLine3Ray3<Real> DistLine3Ray3r;
	template<class T> class DistLine3Rectangle3; typedef DistLine3Rectangle3<Real> DistLine3Rectangle3r;
	template<class T> class DistLine3Segment3; typedef DistLine3Segment3<Real> DistLine3Segment3r;
	template<class T> class DistLine3Triangle3; typedef DistLine3Triangle3<Real> DistLine3Triangle3r;
	template<class T> class DistRay2Ray2; typedef DistRay2Ray2<Real> DistRay2Ray2r;
	template<class T> class DistRay2Segment2; typedef DistRay2Segment2<Real> DistRay2Segment2r;
	template<class T> class DistRay3Box3; typedef DistRay3Box3<Real> DistRay3Box3r;
	template<class T> class DistRay3Ray3; typedef DistRay3Ray3<Real> DistRay3Ray3r;
	template<class T> class DistRay3Rectangle3; typedef DistRay3Rectangle3<Real> DistRay3Rectangle3r;
	template<class T> class DistRay3Segment3; typedef DistRay3Segment3<Real> DistRay3Segment3r;
	template<class T> class DistRay3Triangle3; typedef DistRay3Triangle3<Real> DistRay3Triangle3r;
	template<class T> class DistRectangle3Rectangle3; typedef DistRectangle3Rectangle3<Real> DistRectangle3Rectangle3r;
	template<class T> class DistSegment2Segment2; typedef DistSegment2Segment2<Real> DistSegment2Segment2r;
	template<class T> class DistSegment3Box3; typedef DistSegment3Box3<Real> DistSegment3Box3r;
	template<class T> class DistSegment3Rectangle3; typedef DistSegment3Rectangle3<Real> DistSegment3Rectangle3r;
	template<class T> class DistSegment3Segment3; typedef DistSegment3Segment3<Real> DistSegment3Segment3r;
	template<class T> class DistSegment3Triangle3; typedef DistSegment3Triangle3<Real> DistSegment3Triangle3r;
	template<class T> class DistTriangle3Rectangle3; typedef DistTriangle3Rectangle3<Real> DistTriangle3Rectangle3r;
	template<class T> class DistTriangle3Triangle3; typedef DistTriangle3Triangle3<Real> DistTriangle3Triangle3r;
	template<class T> class DistVector2Box2; typedef DistVector2Box2<Real> DistVector2Box2r;
	template<class T> class DistVector2Ellipse2; typedef DistVector2Ellipse2<Real> DistVector2Ellipse2r;
	template<class T> class DistVector2Line2; typedef DistVector2Line2<Real> DistVector2Line2r;
	template<class T> class DistVector2Quadratic2; typedef DistVector2Quadratic2<Real> DistVector2Quadratic2r;
	template<class T> class DistVector2Ray2; typedef DistVector2Ray2<Real> DistVector2Ray2r;
	template<class T> class DistVector2Segment2; typedef DistVector2Segment2<Real> DistVector2Segment2r;
	template<class T> class DistVector3Box3; typedef DistVector3Box3<Real> DistVector3Box3r;
	template<class T> class DistVector3Circle3; typedef DistVector3Circle3<Real> DistVector3Circle3r;
	template<class T> class DistVector3Ellipsoid3; typedef DistVector3Ellipsoid3<Real> DistVector3Ellipsoid3r;
	template<class T> class DistVector3Frustum3; typedef DistVector3Frustum3<Real> DistVector3Frustum3r;
	template<class T> class DistVector3Line3; typedef DistVector3Line3<Real> DistVector3Line3r;
	template<class T> class DistVector3Plane3; typedef DistVector3Plane3<Real> DistVector3Plane3r;
	template<class T> class DistVector3Quadratic3; typedef DistVector3Quadratic3<Real> DistVector3Quadratic3r;
	template<class T> class DistVector3Ray3; typedef DistVector3Ray3<Real> DistVector3Ray3r;
	template<class T> class DistVector3Rectangle3; typedef DistVector3Rectangle3<Real> DistVector3Rectangle3r;
	template<class T> class DistVector3Segment3; typedef DistVector3Segment3<Real> DistVector3Segment3r;
	template<class T> class DistVector3Tetrahedron3; typedef DistVector3Tetrahedron3<Real> DistVector3Tetrahedron3r;
	template<class T> class DistVector3Triangle3; typedef DistVector3Triangle3<Real> DistVector3Triangle3r;
	template<class T> class Eigen; typedef Eigen<Real> Eigenr;
	template<class T> class Ellipse2; typedef Ellipse2<Real> Ellipse2r;
	template<class T> class Ellipsoid3; typedef Ellipsoid3<Real> Ellipsoid3r;
	template<class T> class EllipsoidGeodesic; typedef EllipsoidGeodesic<Real> EllipsoidGeodesicr;
	template<class T> class ExtremalQuery3BSP; typedef ExtremalQuery3BSP<Real> ExtremalQuery3BSPr;
	template<class T> class ExtremalQuery3; typedef ExtremalQuery3<Real> ExtremalQuery3r;
	template<class T> class ExtremalQuery3PRJ; typedef ExtremalQuery3PRJ<Real> ExtremalQuery3PRJr;
	template<class T> class Frustum3; typedef Frustum3<Real> Frustum3r;
	template<class T> class GMatrix; typedef GMatrix<Real> GMatrixr;
	template<class T> class GridGraph2; typedef GridGraph2<Real> GridGraph2r;
	template<class T> class GVector; typedef GVector<Real> GVectorr;
	template<class T> class ImplicitSurface; typedef ImplicitSurface<Real> ImplicitSurfacer;
	template<class T> class Integrate1; typedef Integrate1<Real> Integrate1r;
	template<class T> class IntersectingBoxes; typedef IntersectingBoxes<Real> IntersectingBoxesr;
	template<class T> class IntersectingIntervals; typedef IntersectingIntervals<Real> IntersectingIntervalsr;
	template<class T> class IntersectingRectangles; typedef IntersectingRectangles<Real> IntersectingRectanglesr;
	template<class T> class Intersector1; typedef Intersector1<Real> Intersector1r;
	template<class T> class IntpAkima1; typedef IntpAkima1<Real> IntpAkima1r;
	template<class T> class IntpAkimaNonuniform1; typedef IntpAkimaNonuniform1<Real> IntpAkimaNonuniform1r;
	template<class T> class IntpAkimaUniform1; typedef IntpAkimaUniform1<Real> IntpAkimaUniform1r;
	template<class T> class IntpAkimaUniform2; typedef IntpAkimaUniform2<Real> IntpAkimaUniform2r;
	template<class T> class IntpAkimaUniform3; typedef IntpAkimaUniform3<Real> IntpAkimaUniform3r;
	template<class T> class IntpBicubic2; typedef IntpBicubic2<Real> IntpBicubic2r;
	template<class T> class IntpBilinear2; typedef IntpBilinear2<Real> IntpBilinear2r;
	template<class T> class IntpBSplineUniform1; typedef IntpBSplineUniform1<Real> IntpBSplineUniform1r;
	template<class T> class IntpBSplineUniform2; typedef IntpBSplineUniform2<Real> IntpBSplineUniform2r;
	template<class T> class IntpBSplineUniform3; typedef IntpBSplineUniform3<Real> IntpBSplineUniform3r;
	template<class T> class IntpBSplineUniform4; typedef IntpBSplineUniform4<Real> IntpBSplineUniform4r;
	template<class T> class IntpBSplineUniform; typedef IntpBSplineUniform<Real> IntpBSplineUniformr;
	template<class T> class IntpBSplineUniformN; typedef IntpBSplineUniformN<Real> IntpBSplineUniformNr;
	template<class T> class IntpLinearNonuniform2; typedef IntpLinearNonuniform2<Real> IntpLinearNonuniform2r;
	template<class T> class IntpLinearNonuniform3; typedef IntpLinearNonuniform3<Real> IntpLinearNonuniform3r;
	template<class T> class IntpQdrNonuniform2; typedef IntpQdrNonuniform2<Real> IntpQdrNonuniform2r;
	template<class T> class IntpSphere2; typedef IntpSphere2<Real> IntpSphere2r;
	template<class T> class IntpThinPlateSpline2; typedef IntpThinPlateSpline2<Real> IntpThinPlateSpline2r;
	template<class T> class IntpThinPlateSpline3; typedef IntpThinPlateSpline3<Real> IntpThinPlateSpline3r;
	template<class T> class IntpTricubic3; typedef IntpTricubic3<Real> IntpTricubic3r;
	template<class T> class IntpTrilinear3; typedef IntpTrilinear3<Real> IntpTrilinear3r;
	template<class T> class IntpVectorField2; typedef IntpVectorField2<Real> IntpVectorField2r;
	template<class T> class IntrArc2Arc2; typedef IntrArc2Arc2<Real> IntrArc2Arc2r;
	template<class T> class IntrArc2Circle2; typedef IntrArc2Circle2<Real> IntrArc2Circle2r;
	template<class T> class IntrBox2Box2; typedef IntrBox2Box2<Real> IntrBox2Box2r;
	template<class T> class IntrBox2Circle2; typedef IntrBox2Circle2<Real> IntrBox2Circle2r;
	template<class T> class IntrBox3Box3; typedef IntrBox3Box3<Real> IntrBox3Box3r;
	template<class T> class IntrBox3Frustum3; typedef IntrBox3Frustum3<Real> IntrBox3Frustum3r;
	template<class T> class IntrBox3Sphere3; typedef IntrBox3Sphere3<Real> IntrBox3Sphere3r;
	template<class T> class IntrCapsule3Capsule3; typedef IntrCapsule3Capsule3<Real> IntrCapsule3Capsule3r;
	template<class T> class IntrCircle2Circle2; typedef IntrCircle2Circle2<Real> IntrCircle2Circle2r;
	template<class T> class IntrCircle3Plane3; typedef IntrCircle3Plane3<Real> IntrCircle3Plane3r;
	template<class T> class IntrEllipse2Ellipse2; typedef IntrEllipse2Ellipse2<Real> IntrEllipse2Ellipse2r;
	template<class T> class IntrLinComp2LinComp2; typedef IntrLinComp2LinComp2<Real> IntrLinComp2LinComp2r;
	template<class T> class IntrLinComp2Triangle2; typedef IntrLinComp2Triangle2<Real> IntrLinComp2Triangle2r;
	template<class T> class IntrLine2Arc2; typedef IntrLine2Arc2<Real> IntrLine2Arc2r;
	template<class T> class IntrLine2Box2; typedef IntrLine2Box2<Real> IntrLine2Box2r;
	template<class T> class IntrLine2Circle2; typedef IntrLine2Circle2<Real> IntrLine2Circle2r;
	template<class T> class IntrLine3Box3; typedef IntrLine3Box3<Real> IntrLine3Box3r;
	template<class T> class IntrLine3Capsule3; typedef IntrLine3Capsule3<Real> IntrLine3Capsule3r;
	template<class T> class IntrLine3Cone3; typedef IntrLine3Cone3<Real> IntrLine3Cone3r;
	template<class T> class IntrLine3Cylinder3; typedef IntrLine3Cylinder3<Real> IntrLine3Cylinder3r;
	template<class T> class IntrLine3Ellipsoid3; typedef IntrLine3Ellipsoid3<Real> IntrLine3Ellipsoid3r;
	template<class T> class IntrLine3Lozenge3; typedef IntrLine3Lozenge3<Real> IntrLine3Lozenge3r;
	template<class T> class IntrLine3Plane3; typedef IntrLine3Plane3<Real> IntrLine3Plane3r;
	template<class T> class IntrLine3Sphere3; typedef IntrLine3Sphere3<Real> IntrLine3Sphere3r;
	template<class T> class IntrLine3Torus3; typedef IntrLine3Torus3<Real> IntrLine3Torus3r;
	template<class T> class IntrLine3Triangle3; typedef IntrLine3Triangle3<Real> IntrLine3Triangle3r;
	template<class T> class IntrLozenge3Lozenge3; typedef IntrLozenge3Lozenge3<Real> IntrLozenge3Lozenge3r;
	template<class T> class IntrPlane3Box3; typedef IntrPlane3Box3<Real> IntrPlane3Box3r;
	template<class T> class IntrPlane3Capsule3; typedef IntrPlane3Capsule3<Real> IntrPlane3Capsule3r;
	template<class T> class IntrPlane3Cylinder3; typedef IntrPlane3Cylinder3<Real> IntrPlane3Cylinder3r;
	template<class T> class IntrPlane3Ellipsoid3; typedef IntrPlane3Ellipsoid3<Real> IntrPlane3Ellipsoid3r;
	template<class T> class IntrPlane3Lozenge3; typedef IntrPlane3Lozenge3<Real> IntrPlane3Lozenge3r;
	template<class T> class IntrPlane3Plane3; typedef IntrPlane3Plane3<Real> IntrPlane3Plane3r;
	template<class T> class IntrPlane3Sphere3; typedef IntrPlane3Sphere3<Real> IntrPlane3Sphere3r;
	template<class T> class IntrPlane3Triangle3; typedef IntrPlane3Triangle3<Real> IntrPlane3Triangle3r;
	template<class T> class IntrRay2Arc2; typedef IntrRay2Arc2<Real> IntrRay2Arc2r;
	template<class T> class IntrRay2Box2; typedef IntrRay2Box2<Real> IntrRay2Box2r;
	template<class T> class IntrRay2Circle2; typedef IntrRay2Circle2<Real> IntrRay2Circle2r;
	template<class T> class IntrRay3Box3; typedef IntrRay3Box3<Real> IntrRay3Box3r;
	template<class T> class IntrRay3Capsule3; typedef IntrRay3Capsule3<Real> IntrRay3Capsule3r;
	template<class T> class IntrRay3Cylinder3; typedef IntrRay3Cylinder3<Real> IntrRay3Cylinder3r;
	template<class T> class IntrRay3Ellipsoid3; typedef IntrRay3Ellipsoid3<Real> IntrRay3Ellipsoid3r;
	template<class T> class IntrRay3Lozenge3; typedef IntrRay3Lozenge3<Real> IntrRay3Lozenge3r;
	template<class T> class IntrRay3Plane3; typedef IntrRay3Plane3<Real> IntrRay3Plane3r;
	template<class T> class IntrRay3Sphere3; typedef IntrRay3Sphere3<Real> IntrRay3Sphere3r;
	template<class T> class IntrRay3Triangle3; typedef IntrRay3Triangle3<Real> IntrRay3Triangle3r;
	template<class T> class IntrSegment2Arc2; typedef IntrSegment2Arc2<Real> IntrSegment2Arc2r;
	template<class T> class IntrSegment2Box2; typedef IntrSegment2Box2<Real> IntrSegment2Box2r;
	template<class T> class IntrSegment2Circle2; typedef IntrSegment2Circle2<Real> IntrSegment2Circle2r;
	template<class T> class IntrSegment3Box3; typedef IntrSegment3Box3<Real> IntrSegment3Box3r;
	template<class T> class IntrSegment3Capsule3; typedef IntrSegment3Capsule3<Real> IntrSegment3Capsule3r;
	template<class T> class IntrSegment3Cylinder3; typedef IntrSegment3Cylinder3<Real> IntrSegment3Cylinder3r;
	template<class T> class IntrSegment3Ellipsoid3; typedef IntrSegment3Ellipsoid3<Real> IntrSegment3Ellipsoid3r;
	template<class T> class IntrSegment3Lozenge3; typedef IntrSegment3Lozenge3<Real> IntrSegment3Lozenge3r;
	template<class T> class IntrSegment3Plane3; typedef IntrSegment3Plane3<Real> IntrSegment3Plane3r;
	template<class T> class IntrSegment3Sphere3; typedef IntrSegment3Sphere3<Real> IntrSegment3Sphere3r;
	template<class T> class IntrSegment3Triangle3; typedef IntrSegment3Triangle3<Real> IntrSegment3Triangle3r;
	template<class T> class IntrSphere3Cone3; typedef IntrSphere3Cone3<Real> IntrSphere3Cone3r;
	template<class T> class IntrSphere3Frustum3; typedef IntrSphere3Frustum3<Real> IntrSphere3Frustum3r;
	template<class T> class IntrSphere3Sphere3; typedef IntrSphere3Sphere3<Real> IntrSphere3Sphere3r;
	template<class T> class IntrTetrahedron3Tetrahedron3; typedef IntrTetrahedron3Tetrahedron3<Real> IntrTetrahedron3Tetrahedron3r;
	template<class T> class IntrTriangle2Triangle2; typedef IntrTriangle2Triangle2<Real> IntrTriangle2Triangle2r;
	template<class T> class IntrTriangle3Cone3; typedef IntrTriangle3Cone3<Real> IntrTriangle3Cone3r;
	template<class T> class IntrTriangle3Triangle3; typedef IntrTriangle3Triangle3<Real> IntrTriangle3Triangle3r;
	template<class T> class LinComp2; typedef LinComp2<Real> LinComp2r;
	template<class T> class LinComp3; typedef LinComp3<Real> LinComp3r;
	template<class T> class LinComp; typedef LinComp<Real> LinCompr;
	template<class T> class Line2; typedef Line2<Real> Line2r;
	template<class T> class Line3; typedef Line3<Real> Line3r;
	template<class T> class LinearSystem; typedef LinearSystem<Real> LinearSystemr;
	template<class T> class Lozenge3; typedef Lozenge3<Real> Lozenge3r;
	template<class T> class Mapper2; typedef Mapper2<Real> Mapper2r;
	template<class T> class Mapper3; typedef Mapper3<Real> Mapper3r;
	template<class T> class Math; typedef Math<Real> Mathr;
	template<class T> class Matrix2; typedef Matrix2<Real> Matrix2r;
	template<class T> class Matrix3; typedef Matrix3<Real> Matrix3r;
	template<class T> class Matrix4; typedef Matrix4<Real> Matrix4r;
	template<class T> class MeshCurvature; typedef MeshCurvature<Real> MeshCurvaturer;
	template<class T> class MeshSmoother; typedef MeshSmoother<Real> MeshSmootherr;
	template<class T> class Minimize1; typedef Minimize1<Real> Minimize1r;
	template<class T> class MinimizeN; typedef MinimizeN<Real> MinimizeNr;
	template<class T> class MultipleCurve2; typedef MultipleCurve2<Real> MultipleCurve2r;
	template<class T> class MultipleCurve3; typedef MultipleCurve3<Real> MultipleCurve3r;
	template<class T> class NaturalSpline2; typedef NaturalSpline2<Real> NaturalSpline2r;
	template<class T> class NaturalSpline3; typedef NaturalSpline3<Real> NaturalSpline3r;
	template<class T> class NoniterativeEigen3x3; typedef NoniterativeEigen3x3<Real> NoniterativeEigen3x3r;
	template<class T> class NURBSCurve2; typedef NURBSCurve2<Real> NURBSCurve2r;
	template<class T> class NURBSCurve3; typedef NURBSCurve3<Real> NURBSCurve3r;
	template<class T> class NURBSRectangle; typedef NURBSRectangle<Real> NURBSRectangler;
	template<class T> class OdeEuler; typedef OdeEuler<Real> OdeEulerr;
	template<class T> class OdeImplicitEuler; typedef OdeImplicitEuler<Real> OdeImplicitEulerr;
	template<class T> class OdeMidpoint; typedef OdeMidpoint<Real> OdeMidpointr;
	template<class T> class OdeRungeKutta4; typedef OdeRungeKutta4<Real> OdeRungeKutta4r;
	template<class T> class OdeSolver; typedef OdeSolver<Real> OdeSolverr;
	template<class T> class ParametricSurface; typedef ParametricSurface<Real> ParametricSurfacer;
	template<class T> class Plane3; typedef Plane3<Real> Plane3r;
	template<class T> class Polyhedron3; typedef Polyhedron3<Real> Polyhedron3r;
	template<class T> class Polynomial1; typedef Polynomial1<Real> Polynomial1r;
	template<class T> class PolynomialCurve2; typedef PolynomialCurve2<Real> PolynomialCurve2r;
	template<class T> class PolynomialCurve3; typedef PolynomialCurve3<Real> PolynomialCurve3r;
	template<class T> class PolynomialRoots; typedef PolynomialRoots<Real> PolynomialRootsr;
	template<class T> class Quadratic2; typedef Quadratic2<Real> Quadratic2r;
	template<class T> class Quadratic3; typedef Quadratic3<Real> Quadratic3r;
	template<class T> class QuadricSurface; typedef QuadricSurface<Real> QuadricSurfacer;
	template<class T> class HmQuadToSqr; typedef HmQuadToSqr<Real> HmQuadToSqrr;
	template<class T> class HmSqrToQuad; typedef HmSqrToQuad<Real> HmSqrToQuadr;
	template<class T> class BiQuadToSqr; typedef BiQuadToSqr<Real> BiQuadToSqrr;
	template<class T> class BiSqrToQuad; typedef BiSqrToQuad<Real> BiSqrToQuadr;
	template<class T> class Quaternion; typedef Quaternion<Real> Quaternionr;
	template<class T> class Query2Filtered; typedef Query2Filtered<Real> Query2Filteredr;
	template<class T> class Query2; typedef Query2<Real> Query2r;
	template<class T> class Query2Int64; typedef Query2Int64<Real> Query2Int64r;
	template<class T> class Query2TInteger; typedef Query2TInteger<Real> Query2TIntegerr;
	template<class T> class Query2TRational; typedef Query2TRational<Real> Query2TRationalr;
	template<class T> class Query3Filtered; typedef Query3Filtered<Real> Query3Filteredr;
	template<class T> class Query3; typedef Query3<Real> Query3r;
	template<class T> class Query3Int64; typedef Query3Int64<Real> Query3Int64r;
	template<class T> class Query3TInteger; typedef Query3TInteger<Real> Query3TIntegerr;
	template<class T> class Query3TRational; typedef Query3TRational<Real> Query3TRationalr;
	template<class T> class Ray2; typedef Ray2<Real> Ray2r;
	template<class T> class Ray3; typedef Ray3<Real> Ray3r;
	template<class T> class Rectangle3; typedef Rectangle3<Real> Rectangle3r;
	template<class T> class RiemannianGeodesic; typedef RiemannianGeodesic<Real> RiemannianGeodesicr;
	template<class T> class RigidBody; typedef RigidBody<Real> RigidBodyr;
	template<class T> class Segment2; typedef Segment2<Real> Segment2r;
	template<class T> class Segment3; typedef Segment3<Real> Segment3r;
	template<class T> class SingleCurve2; typedef SingleCurve2<Real> SingleCurve2r;
	template<class T> class SingleCurve3; typedef SingleCurve3<Real> SingleCurve3r;
	template<class T> class Sphere3; typedef Sphere3<Real> Sphere3r;
	template<class T> class Surface; typedef Surface<Real> Surfacer;
	template<class T> class TCBSpline2; typedef TCBSpline2<Real> TCBSpline2r;
	template<class T> class TCBSpline3; typedef TCBSpline3<Real> TCBSpline3r;
	template<class T> class Tetrahedron3; typedef Tetrahedron3<Real> Tetrahedron3r;
	template<class T> class Torus3; typedef Torus3<Real> Torus3r;
	template<class T> class Triangle2; typedef Triangle2<Real> Triangle2r;
	template<class T> class Triangle3; typedef Triangle3<Real> Triangle3r;
	template<class T> class TriangulateEC; typedef TriangulateEC<Real> TriangulateECr;
	template<class T> class Vector2; typedef Vector2<Real> Vector2r;
	template<class T> class Vector3; typedef Vector3<Real> Vector3r;
	template<class T> class Vector4; typedef Vector4<Real> Vector4r;
}
using namespace Wm3;
