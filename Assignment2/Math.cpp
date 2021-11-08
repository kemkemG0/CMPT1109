#include<iostream>
#include<fstream>
#include<cmath>
#include<sstream>

using namespace std;

//func proytypes
int findSize(string filename);
float findAverage(string filename, int size);
float findSD(string filename, int size, float avg);
void prettyPrint(int size, float avg, float SD);

int main(){
    string filename;
    cin >> filename;
    int size = findSize(filename);
    float avg = findAverage(filename,size);
    float SD = findSD(filename,size,avg);
    
    prettyPrint(size,avg,SD);
    
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

void prettyPrint(int size, float avg, float SD){
    stringstream ss;
    cout << "#items    Average    SD" << endl;
    cout << "------------------------------" << endl;
    cout<<size;
    cout<<fixed<<right<<setw(14)<<setprecision(2)<<avg;
    cout<<right<<setw(10)<<setprecision(2)<<SD<<endl;
}
