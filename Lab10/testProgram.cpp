// Kenshin Tanaka(300350728)
// Pedro Chen 300350054
// Gina Choi (300346654)

#include<iostream>
#include<cmath>
using namespace std;

// prototype
int binToDecimal(const string& binaryString);
int hex2Dec(const string& hexaString);
void test_hex2Dec(string hexa);
void test_bin2Dec(string hexa);
void input(string& bin,string& hexa);
// Definition of helper functions
bool is_hex(char c){return ('0'<=c && c<='9') || ('A'<=c && c<='F');}
bool is_bin(char c){return c=='0' || c=='1';}

int main(){
    string bin,hexa;
    
    input(bin,hexa);
    test_bin2Dec(bin);
    test_hex2Dec(hexa);

    return 0;
}

//Definition
void input(string& bin,string& hexa){
    cout<<"Input a binary number: ";
    cin>>bin;
    cout<<endl;
    cout<<"Input a hexa number: ";
    cin>>hexa;
    cout<<endl;
}



void test_hex2Dec(string hexa){
    try{
        int dec = hex2Dec(hexa);
        cout<<"("<<hexa<<")16 ==";
        cout<<"("<<dec<<")10"<<endl;
    }catch(const char c){
        cout<<"Error: ";
        cout<<c<<" is not a valid Hexa number."<<endl;
    }
}


void test_bin2Dec(string bin){
    try{
        int dec = binToDecimal(bin);
        cout<<"("<<bin<<")2 ==";
        cout<<"("<<bin<<")10"<<endl;
    }catch(const char c){
        cout<<"Error: ";
        cout<<c<<" is not a valid Binary number."<<endl;
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