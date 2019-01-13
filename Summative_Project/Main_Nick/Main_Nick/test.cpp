#include "test.h"
#include "Geometry.h"
#include <iostream>

using namespace std;

void Testequals(TVector3 firstvector, TVector3 secondvector)
{
	

	

	if (Equals(firstvector, secondvector) == true)
	{
		cout << "true";
	}
	else if (Equals(firstvector, secondvector) == false)
	{
		cout << "false";
	}
	else
	{
		cout << "didn't run";
	}
}