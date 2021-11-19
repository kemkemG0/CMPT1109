
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include<cmath>
#include<string>
using namespace std;
class Rectangle{
    double height;
    double width;
    string color;
    public:
        Rectangle(double height,double width,string color):height(height),width(width),color(color){}
        Rectangle():height(1),width(2),color("White"){}
        double getHeight() {return this->height;}
        double getWidth() {return this->width;}
        string getColor() {return this->color;}
        void setHeight(double height) {this->height = height;}
        void setWidth(double width) {this->width = width;}
        void setColor(double color) {this->color = color;}
        double area(){return this->height * this->width *0.5;}
        void toString(){
            cout<< "[width = "<<this->height<<", heigh = "<<this->width<<", color = "<<this->color<<"]"<<endl;
        }
        double perimeter(){
            double h = this->height;
            double w = this->width * 0.5;
            double side = sqrt(h*h + w*w);
            return side + side + this->width;
        }
};
#endif