#include<iostream>
#include<random>

using namespace std;

const int R = 0;
const int S = 1;
const int P = 2;
string hands[3]={"rock","scissor","paper"};

int main() {
    // init vars
    int user=0;
    int enem = rand()%3;
    // user input
    cout<<"Select rock (0), scissor (1), or paper (2): ";
    cin >> user;
    // common output
    cout<<"The computer is "<< hands[enem] <<". You are "<< hands[user];
    // Draw
    if(user==enem){
        cout<<" too. It is a draw." << endl;
        return 0;
    }
    // Won
    if((user==R && enem==S) || (user==S && enem==P) || (user==P && enem==R)){
        cout<<". You won !"<<endl;
        return 0;
    }
    // Lost
    cout<<". Computer won!"<<endl;
    return 0;
}
