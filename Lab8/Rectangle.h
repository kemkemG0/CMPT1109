
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<cmath>
#include<string>
#include<iostream>
class Rectangle{
    private:
        double height;
        double width;
        std::string color;
    public:
        Rectangle(double height,double width,std::string color);
        Rectangle();
        double getHeight();
        double getWidth();
        std::string getColor();
        void setHeight(double);
        void setWidth(double);
        void setColor(std::string);
        double area();
        void toString();
        double perimeter();
};
#endif