#include "Geometry.h"
#include <cmath>
#include <math.h>


bool Geometry::Equals(const TVector3& _KrA, const TVector3& _KrB )
{
	float fx1 = _KrA.m_fX;
	float fy1 = _KrA.m_fY;
	float fz1 = _KrA.m_fZ;

	float fx2 = _KrB.m_fX;
	float fy2 = _KrB.m_fY;
	float fz2 = _KrB.m_fZ;

	if (fx1 == fx2 && fy1 == fy2 && fz1 == fz2)
	{
		return true;
	}
	else
	{
		return false;
	}
};

Geometry::TVector3& Geometry::Add(const TVector3& _krA, const TVector3& _krB, TVector3& _rResultant)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fx2 = _krB.m_fX;
	float fy2 = _krB.m_fY;
	float fz2 = _krB.m_fZ;

	_rResultant.m_fX = fx2 + fx1;
	_rResultant.m_fY = fy2 + fy1;
	_rResultant.m_fZ = fz2 + fz1;

	return _rResultant;
}

Geometry::TVector3& Geometry::Subtract(const TVector3& _krA, const TVector3& _krB, TVector3& _rResultant)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fx2 = _krB.m_fX;
	float fy2 = _krB.m_fY;
	float fz2 = _krB.m_fZ;

	_rResultant.m_fX = fx2 - fx1;
	_rResultant.m_fY = fy2 - fy1;
	_rResultant.m_fZ = fz2 - fz1;

	return _rResultant;
}

Geometry::TVector3& Geometry::ScaleVector(const TVector3& _krA, const float _kfScalar, TVector3& _rResultant)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fx2 = _rResultant.m_fX;
	float fy2 = _rResultant.m_fY;
	float fz2 = _rResultant.m_fZ;

	float Sc1 = _kfScalar*fx1 + _kfScalar*fx2;
	float Sc2 = _kfScalar*fy1 + _kfScalar*fy2;
	float Sc3 = _kfScalar*fz1 + _kfScalar*fz2;
}

float Geometry::Magnitude(const TVector3& _krA)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fMag = sqrt(pow(fx1, 2)) + pow(fy1, 2) + pow(fz1, 2);

	return fMag;
}

float Geometry::DotProduct(const TVector3& _krA, const TVector3& _krB)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fx2 = _krB.m_fX;
	float fy2 = _krB.m_fY;
	float fz2 = _krB.m_fZ;

	float fDp1 = fx1*fx2;
	float fDp2 = fy1*fy2;
	float fDp3 = fz1*fz2;

	float fDot = fDp1 + fDp2 + fDp3;

	return fDot;
}

Geometry::TVector3& Geometry::CrossProduct(const TVector3& _krA, const TVector3& _krB, TVector3& _rResultant)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fx2 = _krB.m_fX;
	float fy2 = _krB.m_fY;
	float fz2 = _krB.m_fZ;

	_rResultant.m_fX = (fy1 * fz2) - (fz1 * fy2);
	_rResultant.m_fY = (fz1 * fx2) - (fx1 * fz2);
	_rResultant.m_fZ = (fx1 * fy2) - (fy1 * fx2);
}

Geometry::TVector3& Geometry::Normalise(const TVector3& _krA, TVector3& _rResultant)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fMag;
	_rResultant.m_fX = fx1 / fMag;
	_rResultant.m_fY = fy1 / fMag;
	_rResultant.m_fZ = fz1 / fMag;
	///pending change
}

Geometry::TVector3& Geometry::Projection(const TVector3& _krA, const TVector3& _krB, TVector3& _rResultant)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fx2 = _krB.m_fX;
	float fy2 = _krB.m_fY;
	float fz2 = _krB.m_fZ;

	float fDp1 = fx1*fx2;
	float fDp2 = fy1*fy2;
	float fDp3 = fz1*fz2;

	float fDot = fDp1 + fDp2 + fDp3;	

	float fMag = sqrt(pow(fx1, 2) + pow(fy1, 2) + pow(fz1, 2));

	_rResultant.m_fX = ((fDot) / (fMag * 2)) * fx1;
	_rResultant.m_fX = ((fDot) / (fMag * 2)) * fy1;
	_rResultant.m_fX = ((fDot) / (fMag * 2)) * fz1;
}

float Geometry::ComputeAngleBetween(const TVector2& _krA, const TVector2& _krB)
{
	float PI = 3.14159265;
	
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;

	float fx2 = _krB.m_fX;
	float fy2 = _krB.m_fY;

	float fDp1 = fx1 * fx2;
	float fDp2 = fy1 * fy2;

	float dot = fDp1 + fDp2;

	float Pa = sqrt(pow(fx1, 2)) + pow(fy1, 2);
	float Pa2 = sqrt(pow(fx2, 2)) + pow(fy2, 2);

	float P = Pa * Pa2;

	float cos = dot / P;

	float Ang = acos(cos)*180.0 / PI;
}

float Geometry::ComputeAngleBetween(const TVector3& _krA, const TVector3& _krB)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fx2 = _krB.m_fX;
	float fy2 = _krB.m_fY;
	float fz2 = _krB.m_fZ;

	DotProduct(firstvector,secondvector);
}

float Geometry::ComputeDistancePointToLine(const T3DLine& _krLine, const TVector3& _krPoint)
{

}

float Geometry::ComputeDistancePointToPlane(const TPlane& _krPlane, const TVector3& _krPoint)
{

}

float Geometry::ComputeDistancePointToSphere(const TSphere& _krSphere, const TVector3& _krPoint)
{

}

float Geometry::ComputeDistanceCircleToCircle(const TCircle& _krCircle1, const TCircle& _krCircle2)
{
	float fx1 = _krCircle1.m_v2center.m_fX;
	float fx2 = _krCircle2.m_v2center.m_fX;

	float fy1 = _krCircle1.m_v2center.m_fY;
	float fy2 = _krCircle2.m_v2center.m_fY;
	
	float fDistX = fx1 - fx2;
	float fDistY = fy1 - fy2;
		
	float fDistCir2Cir = sqrt(pow(fDistX, 2) + pow(fDistY, 2));
}

float Geomtery::ComputeDistanceCircleToTriangle(const TCircle& _krCircle, const TTriangle2& _krTriangle)
{

}

Geomerty::EIntersections Geometry::ComputeLineSphereIntersection(const T3DLine& _krLine, const TSphere& _krSphere, TVector3& _rv3IntersectionPoint1, TVector3& _rv3IntersectionPoint2)
{

}

bool Geometry::IsLinePlaneIntersection(const T3DLine& _krLine, const TPlane& _krPlane, TVector3& _rv3IntersectionPoint)
{

}

bool Geometry::IsIntersection(const T3DLine& _krLine1, const T3DLine& _krLine2)
{
	float fx1 = _krLine1.m_v3q.m_fX;
	float fy1 = _krLine1.m_v3q.m_fY;
	float fz1 = _krLine1.m_v3q.m_fZ;
	float fd1 = _krLine1.m_v3v.m_fD;

	float fx2 = _krLine2.m_v3q.m_fX;
	float fy2 = _krLine2.m_v3q.m_fY;
	float fz2 = _krLine2.m_v3q.m_fZ;
	float fd2 = _krLine2.m_v3v.m_fD;
}

Geometry::TVector3& Geometry::ComputeIntersectionBetweenLines(const T3DLine& _krLine1, const T3DLine& _krLine2, TVector3& _rIntersectionPoint)
{
	
}

bool Geometry::IsInFieldOfView(const TVector2& _krCameraPosition, const TVector2& _krCameraDirection, const float _kfFieldOfViewInRadians, const TVector2& _krObjectPosition)
{

}

Geometry::TVector3& Geometry::FindTriangleNormal(const TTriangle3& _krTriangle, TVector3& _rNormal)
{

}

bool Geometry::IsSurfaceLit(const TVector3& _krPointOnSurface, const TVector3& _krLightSourcePosition, const TTriangle3& _krSurface)
{

}

Geometry::TTriangle2& Geometry::RotateTriangleAroundPoint(const TTriangle2& _krTriangle, const float _kfRotAngleInRadians, const TVector2& _krRotAroundPoint, TTriangle2& _rRotatedTriangle)
{

}


