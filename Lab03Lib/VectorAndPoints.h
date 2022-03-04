//VectorAndPoints.h
#pragma once
#ifndef VectorAndPoints_H
#define VectorAndPoints_H

#include<iostream>

class myVector {
public:
	int V_x = 0, V_y = 0, V_z = 0;
	myVector(int vx, int vy, int vz);
	~myVector();

	void MyVectorInfo();
	void MyVectorMag();
};

class VectorSum {
public:
	int V1_x, V1_y, V1_z, V2_x, V2_y, V2_z, VSum_x, VSum_y, VSum_z;

	VectorSum(int v1x, int v1y, int v1z, int v2x, int v2y, int v2z);
	~VectorSum();
	void VectorSumMag();
};

class myPoint {
public:
	int px, py, pz;
	void PointInput();
	void PointOutput();
	void PointSum(int x, int y, int z, int* sumx, int* sumy, int* sumz);
	void PointColor();
};


#endif // !VectorAndPoints_H
