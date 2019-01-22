#include <conio.h>
#include "test.h"
#include "Geometry.h"


int main()
{
	TVector3 firstvector;
	firstvector.m_fX = 5;
	firstvector.m_fY = 5;
	firstvector.m_fZ = 10;

	TVector3 secondvector;
	secondvector.m_fX = 5;
	secondvector.m_fY = 5;
	secondvector.m_fZ = 10;



	enum EIntersections
	{
		Intersection_None,
		INTERSECTION_ONE,
		INTERECTION_TWO

	};
	TestEquals(firstvector, secondvector);

	    _getch();
		return 0;

}