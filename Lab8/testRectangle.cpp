#include"Rectangle.h"
#include<iostream>
using namespace std;

int main(){
	
	// create instances
	Rectangle rectangle1;
	Rectangle rectangle2(10, 5, "Blue");
	
	Rectangle rectangle3;
	rectangle3.setHeight(3);
	rectangle3.setWidth(5);
	rectangle3.setColor("Black");

	//default values
	rectangle1.toString();

	//set values via constructor
	rectangle2.toString();

	//set values via setter
	rectangle3.toString();

	return 0;
	}