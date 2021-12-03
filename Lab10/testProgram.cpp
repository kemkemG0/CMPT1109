#include<iostream>
#include<cmath>
using namespace std;

int binToDecimal(const string& binaryString);
int hex2Dec(const string& hexaString);

bool is_hex(char c){return ('0'<=c && c<='9') || ('A'<=c && c<='F');}
bool is_bin(char c){return c=='0' || c=='1';}
void test_hex2Dec(string hexa);
void test_bin2Dec(string hexa);


int main(){
    string bin,hexa;
    cout<<"Input a binary number: ";
    cin>>bin;
    cout<<endl;
    cout<<"Input a hexa number: ";
    cin>>hexa;
    cout<<endl;

    test_bin2Dec(bin);

    test_hex2Dec(hexa);

    return 0;
}


void test_hex2Dec(string hexa){
    try{
        cout<<"("<<hexa<<")16 ==";
        cout<<"("<<hex2Dec(hexa)<<")10"<<endl;
    }catch(const char c){
        cout<<"Error: ";
        cout<<c<<" is not a valid Hexa number."<<endl;
    }
}


void test_bin2Dec(string bin){
    try{
        cout<<"("<<bin<<")2 ==";
        cout<<"("<<binToDecimal(bin)<<")10"<<endl;
    }catch(const char c){
        cout<<"Error: ";
        cout<<c<<" is not a valid Hexa number."<<endl;
    }
}


int hex2Dec(const string& hexaString){
    int sz = hexaString.size();
    if(!sz)return 0;
    if((!is_hex(hexaString[0]))){throw hexaString[0];}
    // Convert the first digit of hexa to dec
    int top = (hexaString[0]-'0');
    top = top < 10 ? top : (hexaString[0]-'A')+10;
    // Recursion: First + hex2Dec(others)
    return top*pow(16,sz-1) + hex2Dec(hexaString.substr(1));
}


int binToDecimal(const string& binaryString){
    int sz = binaryString.size();
    if(!sz)return 0;// base case
    if(!is_bin(binaryString[0])){throw binaryString[0];}
    // Recursion:first + binToDecimal(others)
    return (binaryString[0]-'0')*pow(2,sz-1) + binToDecimal(binaryString.substr(1));
}