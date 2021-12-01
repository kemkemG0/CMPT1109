#include<iostream>
#include<cmath>
using namespace std;
int binToDecimal(const string& binaryString);

int main(){
    string S = "1111111111";
    cout<< binToDecimal(S)<<endl;
    return 0;
}

int binToDecimal(const string& binaryString){
    int sz = binaryString.size();
    if(!sz)return 0;
    // str[0] + binToDecimal(str[1:]) :=   now + next
    return (binaryString[0]-'0')*pow(2,sz-1) + binToDecimal(binaryString.substr(1));
}