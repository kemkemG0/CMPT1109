#include<iostream>
#include<cstring>
using namespace std;

const int MAX_SIZE = (1<<8);


// Functinons 
int getSumForValidation(const char str[], int size){
    int i = 0, ret = 0;
    for (int ri = size-1; ri >= 0; --ri, ++i){
        int d = (str[ri] - '0')*2;
        //Even from right
        if(i%2) ret += d/10 + d%10;
        //Odd from right
        else  ret += d/2;
    }
    return ret;
}
bool isCardValid(int sum){return !(bool(sum%10));}
bool isLengthValid(int size){return (13 <= size && size<=16);}

int main(){
    // Init var and get user input
    char str[MAX_SIZE];
    cout<<"Input Credit Card Number: ";
    cin.getline(str,MAX_SIZE);

    // Validate length
    if(!isLengthValid(strlen(str))){
        cout<<"Invalid Length"<<endl;
        return 0;
    }
    int sum = getSumForValidation(str,strlen(str));
    // Output answer
    if(isCardValid(sum)) cout<< "This Card is Valid." << endl;
    else cout<<"!!This Card is INVALID.!!" << endl;
    return 0;
}