#include "VectorAndPoints.h"

using namespace std;

myVector::myVector(int vx, int vy, int vz) {
	V_x = vx;
	V_y = vy;
	V_z = vz;
}
myVector::~myVector() {

}

void myVector:: MyVectorInfo() {
	cout << "X Component is: " << V_x << " units " << endl;
	cout << "Y Component is: " << V_y << " units " << endl;
	cout << "Z Component is: " << V_z << " units " << endl;
	cout << "Vector = " << V_x << "i+ " << V_y << "j+ " << V_z << "k" << endl;
}
void myVector:: MyVectorMag() {
	float magnitude = 0, sq_x, sq_y, sq_z, sq_sum;
	sq_x = V_x * V_x;
	sq_y = V_y * V_y;
	sq_z = V_z * V_z;
	sq_sum = sq_x + sq_y + sq_z;
	magnitude = sqrt(sq_sum);

	cout << "Magnitude of the vector is: " << magnitude << endl;
}

VectorSum::VectorSum(int v1x, int v1y, int v1z, int v2x, int v2y, int v2z) {
	V1_x = v1x;
	V1_y = v1y;
	V1_z = v1z;
	V2_x = v2x;
	V2_y = v2y;
	V2_z = v2z;
	VSum_x = V1_x + V2_x;
	VSum_y = V1_y + V2_y;
	VSum_z = V1_z + V2_z;

	cout << "Vector sum of the given vectors is " << VSum_x << "i+ " << VSum_y << "j+ " << VSum_z << "k" << endl;
}
VectorSum::~VectorSum() {

}

void VectorSum::VectorSumMag() {
	float VSumMagnitude = 0;
	VSumMagnitude = sqrt(VSum_x * VSum_x + VSum_y * VSum_y + VSum_z * VSum_z);
	cout << "Magintude of the Vector sum = " << VSumMagnitude << endl;
}

void myPoint::PointInput() {
	cout << "Give the coordinates (x y z format): ";
	cin >> px >> py >> pz;
}

void myPoint::PointOutput() {
	cout << "Point: (" << px << "," << py << "," << pz << ")" << endl;
}

void myPoint::PointSum(int x, int y, int z, int* sumx, int* sumy, int* sumz) {
	*sumx = *sumx + x;
	*sumy = *sumy + y;
	*sumz = *sumz + z;
	//cout << sumx << endl;
}

void::myPoint::PointColor() {
	cout << "Point Color is red!" << endl;
}