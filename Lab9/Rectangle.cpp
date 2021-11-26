#include"Rectangle.h"

int Rectangle::num_instances = 0;

//Constructor
Rectangle::Rectangle(double h,double w,std::string c){
    setHeight(h);
    setWidth(w);
    setColor(c);
    num_instances++;
}
// Defalt constructor
Rectangle::Rectangle():height(1),width(2),color("White") {num_instances++;}

//destructor!!
Rectangle::~Rectangle() {num_instances--;}

int Rectangle::getNumInstances(){return num_instances;}



//Methods defenitions
double Rectangle::getHeight() {return height;}
double Rectangle::getWidth() {return width;}
std::string Rectangle::getColor() {return color;}
void Rectangle::setHeight(double h) {height = std::max(h,0.0);}
void Rectangle::setWidth(double w) {width = std::max(w,0.0);}
void Rectangle::setColor(std::string c) {color = c;}
double Rectangle::area(){return height * width;}
void Rectangle::toString(){
    std::cout<< "[width = "<<height<<", heigh = "<<width<<", color = "<<color<<"]"<<std::endl;
}
// if height or width is 0, return 0
double Rectangle::perimeter(){return std::min(2*(height+width),height*width);}