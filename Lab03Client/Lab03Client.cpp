#include <iostream>
#include "VectorAndPoints.h"
using namespace std;

int main()
{
	int NumOfPoints = 0;
	int x, y, z, sumx = 0, sumy = 0, sumz = 0;
	cout << "How many points would you like to have? \n Ans:";
	cin >> NumOfPoints;// >> endl;
	cout << "No. of points are: " << NumOfPoints << endl;

	//Point Tasks
	myPoint Points[10];							//Array of Objects
	for (int i = 0; i < NumOfPoints; i++)
	{
		Points[i].PointInput();					//Taking the Input Points from the user
		//Points[i].PointOutput();				//Giving the Output Points for the user
	}

	for (int i = 0; i < NumOfPoints; i++)
	{
		Points->PointSum(Points[i].px, Points[i].py, Points[i].pz, &sumx, &sumy, &sumz);
	}
	cout << "The Centre of Gravity for the given points is at: ("
		<< (float)sumx / (float)NumOfPoints << "," << (float)sumy / (float)NumOfPoints 
		<< "," << (float)sumz / (float)NumOfPoints << ")" << endl;  // Centre of Gravity of the given Points

	cout << endl << endl; //// Vector Tasks

	//vector1 input
	cout << "Give the input for vector 1 ( x,y,z format )" << endl;
	cin >> x >> y >> z;
	myVector Vector1 = myVector(x, y, z);
	//Vector1.MyVectorInfo();
	Vector1.MyVectorMag();

	//vector2 input
	cout << "Give the input for vector 2 ( x,y,z format )" << endl;
	cin >> x >> y >> z;
	myVector Vector2 = myVector(x, y, z);
	//Vector2.MyVectorInfo();
	Vector2.MyVectorMag();

	cout << endl;
	VectorSum VecSum = VectorSum(Vector1.V_x, Vector1.V_y, Vector1.V_z, Vector2.V_x, Vector2.V_y, Vector2.V_z);
	VecSum.VectorSumMag();

	/*cout << endl << endl << endl;
	Points[0].PointColor();*/

}
