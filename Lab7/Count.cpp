// Kenshin Tanaka(300350728)
// Pedro Chen 300350054
// Gina Choi (300346654)

#include<iostream>
#include<cstring>

using namespace std;

// init vars
// Take MAX_SIZE big enough to avoid validation of i+1
const int MAX_SIZE = 300;
const char SPACE = ' ';
const char END = '\0';

char str[MAX_SIZE];

int main(){
    bool is_word = false;
    int ans = 0;

    cin.getline(str, MAX_SIZE);
    
    for (int i = 0; i < MAX_SIZE; i++){
        if(str[i] == END) break;
        // Count this char as a part of  a word.
        if(isalpha(str[i])) is_word = true;

        // Check the previous one were word or not
        // Reset is_word as well
        if(str[i+1] == END || str[i] == SPACE){
            if(is_word) ans++, is_word = false;
        }
    }

    // print
    cout << str << " includes "<< ans <<" words."<<endl; 
    
    return 0;
}