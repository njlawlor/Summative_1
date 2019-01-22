#include "Geometry.h"
#include <cmath>
#include <math.h>


struct TVector3
{
	float m_fX;
	float m_fY;
	float m_fZ;
};

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
