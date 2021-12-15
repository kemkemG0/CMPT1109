#include<iostream>
#include <fstream>

using namespace std;

const int MIN_AGE = 18;
const int MAX_AGE = 30;

int getFrequencyData(string filename, int frequencies []);
void displayFrequencies(int frequencies [], int size);

int main(){
    int fff[100]={};
    displayFrequencies(fff,getFrequencyData("f.txt",fff));
    return 0;
}

int getFrequencyData(string filename, int frequencies []){
    ifstream file;
    int age;
    file.open(filename);
    while(file >> age) frequencies[age]++; //increment num of age
    file.close();
    return MAX_AGE - MIN_AGE + 1; // I don't see the meaning of this..
}
void displayFrequencies(int frequencies [], int size){
    for(int age=MIN_AGE;age<=MIN_AGE + size;age++){
        cout<<age<<" ";
        for(int i=0;i<frequencies[age];++i) cout<< "-";
        cout<<endl;
    }
}