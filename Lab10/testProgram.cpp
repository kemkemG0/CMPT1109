#include<iostream>
#include<cmath>
using namespace std;

int binToDecimal(const string& binaryString);
int hex2Dec(const string& hexaString);

int main(){
    string hexa = "FFFFF"; // 'F' * 5
    string bin = "1111111111"; // '1' * 10
    cout<< binToDecimal(bin)<<endl;
    
    try{
        cout<<hex2Dec(hexa)<<endl;
    }catch(const char c){
        cout<<"Error: ";
        cout<<c<<" is not a valid Hexa number"<<endl;
    }
    
    return 0;
}


bool is_hex(char c){return ('0'<=c && c<='9') || ('A'<=c && c<='F');}


int hex2Dec(const string& hexaString){
    int sz = hexaString.size();
    if(!sz)return 0;
    if((!is_hex(hexaString[0]))){throw hexaString[0];}
    
    // Convert the first digit of hexa to dec
    int top = (hexaString[0]-'0');
    top = top < 10 ? top : (hexaString[0]-'A')+10;
    
    return top*pow(16,sz-1) + hex2Dec(hexaString.substr(1));
}


int binToDecimal(const string& binaryString){
    int sz = binaryString.size();
    if(!sz)return 0;
    // str[0] + binToDecimal(str[1:]) :=   now + next
    return (binaryString[0]-'0')*pow(2,sz-1) + binToDecimal(binaryString.substr(1));
}