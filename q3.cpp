#include <iostream>
#include <random>
#include <fstream>

using namespace std;
int main(){
    srand(time(0));
    int rn_num = rand()% int(1e5) + 1;
    string s_num = to_string(rn_num);
    int odd,even,odd_sum,even_sum;
    odd=even=odd_sum=even_sum=0;

    string odd_str="", even_str="";

    for(char c:s_num){
        if((c-'0')%2){
            odd++;
            odd_sum+=(c-'0');
            odd_str += " ";
            odd_str.push_back(c);
        }
        else {
            even++;
            even_sum+=(c-'0');
            even_str+= " ";
            even_str.push_back(c);
            }
    }
    ofstream output;
    output.open("report.txt");
    output << "The random number is " << rn_num << endl;
    output << even << " even digits." << endl;
    output << odd << " odd digits." << endl;
    output << "The sum of odd digits,"<<odd_str<<" , and sum of even digits,"<<even_str;
    output << " ,are " << ((even_sum==odd_sum)?"equal":"NOT equal") << endl;

    output.close();

}
