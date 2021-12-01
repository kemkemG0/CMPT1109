#include<iostream>
#include<cmath>
using namespace std;
int binToDecimal(const string binaryString);

int main(){
    cout<< binToDecimal("10")<<endl;
    return 0;
}

int binToDecimal(const string binaryString){
    int ret = 0;
    int sz = binaryString.size();
    if(!sz)return 0;
    ret=(binaryString[0]-'0')*pow(2,sz-1) + binToDecimal(binaryString.substr(1));
    return ret;
}