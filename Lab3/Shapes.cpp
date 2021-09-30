#include<iostream>
#include<fstream>

using namespace std;

int main(){
        string file_name;
        cout<<"Input a file's name to open: ";
        cin>>file_name;

        ifstream input;
        input.open(file_name);

        string a,b,c,d,e;
        input >>a>>b>>c>>d>>e;
        
}