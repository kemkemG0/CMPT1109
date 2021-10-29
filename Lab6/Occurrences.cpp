#include<iostream>
using namespace std;

// init const and variable
const int MAX_ARRAY_SIZE=100;
int counting_array[MAX_ARRAY_SIZE];

int main(){
    cout<<"Enter the integers between 1 and 100: ";
    //Get user inputs and count each numbers
    for(int i=0; i < MAX_ARRAY_SIZE; ++i){
        int user_input;
        cin >> user_input;
        if(!user_input) break;
        counting_array[user_input]++;
    }
    
    //If the counted number is more than 0, out put it with "s" if it's more than 1.
    for(int i=1; i<= MAX_ARRAY_SIZE; ++i){
        if(!counting_array[i])continue;
        cout<<i<<" occurs " << counting_array[i] << " time"<< (counting_array[i]>1?"s":"")<<endl;;
    }
    
    return 0;
}