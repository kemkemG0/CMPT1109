#include<iostream>
#include<random>
#include<fstream>

using namespace std;

const int R = 0;
const int S = 1;
const int P = 2;
string hands[3]={"rock","scissor","paper"};

int main(){
    int user=0,user_won=0,enem_won=0;
    string out_log="";
    srand(time(NULL));
    
    ofstream output;
    output.open("RSPGameV2.log");

    for (int game_num = 1;; game_num++){
        int enem = rand()%3;
        cout << "Round " << game_num << " :Select rock (0), scissor (1), or paper (2): ";
        cin>>user;
        // common output
        out_log = "The computer is "+ hands[enem] +". You are "+ hands[user];
        // Draw
        if(user==enem){
            out_log+=" too. It is a draw.\n";
        }
        // Won
        else if((user==R && enem==S) || (user==S && enem==P) || (user==P && enem==R)){
            out_log+=". You won !\n";
            user_won++;
        }
        // Lost
        else{
            out_log+=". Computer won!\n";
            enem_won++;
        }
        cout << out_log << endl;
        output << out_log;
        
        if (game_num>5 && (user_won>2 || enem_won>2)) break;      
    }
    // last output
    out_log = "Game Over! "+ string((user_won>2) ? "Computer is" : "You are") +" the winner! Try again!\n";
    cout << out_log << endl;
    output << endl << endl << out_log;
    output.close();
    return 0;
}