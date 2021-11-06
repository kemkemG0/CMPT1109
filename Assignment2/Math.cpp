#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

//func proytypes
int findSize(string filename);
float findAverage(string filename, int size);
float findSD(string filename, int size, float avg);

int main(){
    string filename;
    cin>>filename;
    cout<< findAverage(filename,findSize(filename))<<endl;
    return 0;
}



int findSize(string filename){
    //init vars
    string line;
    int ans=0;
    ifstream file;

    //counts lines
    file.open(filename);
    while(file >> line)ans++;
    file.close();

    return ans;
}

float findAverage(string filename, int size){
    // init vars
    ifstream file;
    float line = 0, sum = 0;

    // calc sum of lines
    file.open(filename);
    while(file >> line)sum+=line;
    file.close();

    // return mean
    return sum/size;
}

float findSD(string filename, int size, float avg){
    float sum = 0,line = 0;
    ifstream file;

    //calc sum of numerator
    file.open(filename);
    while(file >> line) sum+=(pow((line-avg),2));
    file.close();

    //return SD
    return sqrt(sum/size);
}