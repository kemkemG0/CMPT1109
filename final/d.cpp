#include<iostream>
#include <fstream>

using namespace std;

const int MIN_AGE = 18;
const int MAX_AGE = 30;
const int RANGE = MAX_AGE - MIN_AGE + 1;

int getFrequencyData(string filename, int frequencies []);
void displayFrequencies(int frequencies [], int size);

int main(){
    int frq_list[MAX_AGE + 1]={};
    int sz = getFrequencyData("age.txt",frq_list);
    displayFrequencies(frq_list,sz);
    return 0;
}


int getFrequencyData(string filename, int frequencies []){
    ifstream file;
    int age;
    file.open(filename);
    while(file >> age) frequencies[age]++; //increment num of age
    file.close();
    return RANGE; // I don't see the meaning of this..
}


void displayFrequencies(int frequencies [], int size){
    int total=0;// for count total
    for(int age=MIN_AGE;age<= MIN_AGE + size; age++){
        cout<<age<<" ";
        // between age 18 and 30 , output '-'
        for(int i=0;i<frequencies[age];++i) cout<< "-",total++;
        cout<<endl;
    }
    cout<<"Total: "<<total<<"students."<<endl;
}