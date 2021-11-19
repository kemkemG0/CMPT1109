#include<iostream>
#include"Rectangle.hpp"
// using namespace std;

int main(){
    // Rectangle r(100,500,"asefasdf");
    Rectangle r;
    cout<<r.getWidth()<<endl;
    cout<<r.area()<<endl;
    cout<<r.getColor()<<endl;
    cout<<r.perimeter()<<endl;
    
    r.toString();

    return 0;
}