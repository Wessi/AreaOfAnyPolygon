
#include <iostream>
#include <cstdlib>
#include <unistd.h>
double findArea(double points[][2], long rows); //Prototype
using namespace std;

//The program starts from here
int main(){	
	//Initialize an array called arrayOfVertices which contains all the vertices of a Polygon
	double arrayOfVertices[][2] = { {3,4}, {5,11}, {12,8}, {9,5},{5,6}}; // each vertex has 2-Coordinates:(x, y)

	cout<<"The Area of the given Polygon = "<<findArea(arrayOfVertices, sizeof(arrayOfVertices)/sizeof(*arrayOfVertices))<<endl;      
	return 0;
}

//Algorithm to find the area of the Polygon given the array of points (or vertices of a Polygon with each vertex
//having two Coordinates. i.e. x and y Coordinates)
double findArea(double points[][2], long rows){
	cout<<"Calculating area... \n";
	usleep(3000000);//sleep for 3 seconds... 
	double sum = 0, area = 0;
	for(long r=0; r<rows; r++){
		if(r == rows-1){
			sum += points[r][0]*points[0][1] - points[0][0]*points[r][1];
		}else {
			sum += points[r][0]*points[r+1][1] - points[r+1][0]*points[r][1];
		}
	}
	area = abs((long)sum)/2;
	return area;
}