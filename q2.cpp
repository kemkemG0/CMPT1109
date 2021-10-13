#include<iostream>

using namespace std;
int main(){
    cout << "Enter the number of lines: ";
    // get user input
    int n;
    cin >> n;
    // validation(is not negative?)
    if(n<0){
        cout << "The number must be positive integer." << endl;
        return 0;
    }
    if(n==0){
        cout << endl;
        return 0;
    }
    
    for (int i = 1; i <= n; i++)
    {
        // output spaces of the left
        for(int s = 0;s<5*(n-i);++s) cout << " ";
        
        // output decreasing nums eg) 4,3,2
        for (int j = i; j > 1; j--) cout << j << "    ";
        
        // output increasing nums eg) 1,2,3,4
        for (int j = 1; j <= i; j++) cout << j << "    ";
        cout<<endl;
    }
}