#include<iostream>
#include<random>
#include<fstream>

using namespace std;

const int R = 0;
const int S = 1;
const int P = 2;
string hands[3]={"rock","scissor","paper"};

int main(){
    int user=0,win_diff=0;// win_diff:= user_win - enem_win
    string out_log="";
    srand(time(NULL));
    
    ofstream output;
    output.open("RSPGameV2.log");

    for (int round = 1;; round++){
        int enem = rand()%3;
        cout << "Round " << round << " :Select rock (0), scissor (1), or paper (2): ";
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
            win_diff++;
        }
        // Lost
        else{
            out_log+=". Computer won!\n";
            win_diff--;
        }
        cout << out_log << endl;
        out_log = "Round " + to_string(round) + " : " + out_log;
        output << out_log;

        if (round>5 && abs(win_diff)>2) break;      
    }
    // last output
    out_log = "Game Over! "+ string(win_diff>0 ? "You are" : "Computer is") +" the winner! Try again!\n";
    cout << out_log << endl;
    output << "\n\n" << out_log;
    output.close();
    return 0;
}