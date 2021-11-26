#include"Rectangle.h"
#include<iostream>
using namespace std;

int main(){
	
	// create instance
	Rectangle rectangle1;
	cout<< Rectangle::getNumInstances()<<endl;

	// Cut scope and see if destructor works fine.
	Rectangle* test = nullptr;
	{
		Rectangle rectangle2(10, 5, "Blue");
		test = new Rectangle;
		cout<< Rectangle::getNumInstances()<<endl;
	}
	cout<< Rectangle::getNumInstances()<<endl;
	delete test;

	Rectangle* rectangle3 = new Rectangle (22,33,"Yellow");
	cout<< Rectangle::getNumInstances()<<endl;
	delete rectangle3;
	cout<< Rectangle::getNumInstances()<<endl;

	
	Rectangle* rectangle4 = new Rectangle;
	cout<< Rectangle::getNumInstances()<<endl;
	delete rectangle4;
	cout<< Rectangle::getNumInstances()<<endl;

	return 0;
}