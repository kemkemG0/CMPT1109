#include<iostream>
#include<fstream>
#include <iomanip> 
#include<cmath>

using namespace std;
const string REC = "rectangle";
const string CIR = "circle";
const string TRI = "triangle";
const double PI = 3.141592; 

int main(){    
    //GET INPUT
    string file_name,shape, val_1, val_2, val_3;
    ifstream input;
    cout<<"Input a file name to open: ";
    cin >> file_name;
    input.open(file_name);
    shape = val_1 = val_2 = val_3 = "";
    input >> shape >> val_1 >> val_2 >> val_3;
    input.close();
    // !!! ERROR !!!
    if(shape != REC && shape != CIR && shape != TRI){
        cout << shape << " is unknown type of shape." << endl;
        return 0;
    }
    if( (shape==REC && val_2=="") || (shape==CIR && val_1=="") || (shape==TRI && val_3=="")){
        cout << "Number of information is not enough." << endl;
        return 0;
    }

    // COMPUTE THE AREA
    ofstream output;
    output.open(file_name);
    
    double area = 0;
    if(shape==REC){
        double w = stod(val_1);
        double h = stod(val_2);
        area = w*h;
    }
    else if(shape==CIR){
        double r = stod(val_1);
        area = PI * r * r;
    }
    else{
        double a = stod(val_1);
        double b = stod(val_2);
        double c = stod(val_3);
        double s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
    }
    // Capitalize the first letter
    shape[0] = 'A' + (shape[0] - 'a');
    // Add space
    shape += " ";
    if(val_1 !="")val_1+=" ";
    if(val_2 !="")val_2+=" ";
    if(val_3 !="")val_3+=" ";
    // Output to file_name 
    output << shape << val_1 << val_2 << val_3 << setprecision(2) << fixed << area <<endl;
    output.close();

    return 0;
}