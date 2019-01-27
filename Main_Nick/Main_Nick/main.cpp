#include <iostream>
//#include "test.h"
#include "Geometry.h"
#include <cstdio>
#include <windows.h>

//struct TVector3
//{
//	float m_fX;
//	float m_fY;
//	float m_fZ;
//};

int main()
{
	Geometry newSession;

	Geometry::TVector3 firstvector;

	firstvector.m_fX = 5;
	firstvector.m_fY = 5;
	firstvector.m_fZ = 10;

	Geometry::TVector3 secondvector;
	secondvector.m_fX = 5;
	secondvector.m_fY = 5;
	secondvector.m_fZ = 10;





	if (newSession.Equals(firstvector, secondvector))
	{
		std::cout << "true" << std::endl;
	}

	enum EIntersections
	{
		Intersection_None,
		INTERSECTION_ONE,
		INTERECTION_TWO

	};

	system("pause");
	return 0;

}