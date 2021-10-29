#include<iostream>
#include<cmath>
using namespace std;

double avgIntegers (const double list[], int size){
    // init vars
    double sum_int=0;
    int num_int=0;

    // Look each element and get sum and num of integers.
    for(int i=0; i<size; ++i)
        if(floor(list[i])==list[i])
            sum_int+=list[i], num_int++;
    
    // return average of integers in the list.
    return sum_int/num_int;
}

int main(){
    int num_vals;
    cout << "Enter the number of values:";
    cin >> num_vals;
    double input_list[num_vals];
    cout << "Enter the values:";
    for(double& e:input_list) cin >> e;
    cout << "The average of numbers with no fraction is " << avgIntegers(input_list,num_vals) << endl;
    
    return 0;
}