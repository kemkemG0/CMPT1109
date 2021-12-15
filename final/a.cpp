#include<iostream>
#define REP(i,n) for(ll i=0;i<ll(n);i++)

using namespace std;

int countEvens(const int *list, int size){
    if(!size) return 0;
    // (first letter) + others
    return !(list[0]%2) + countEvens(list+1,size-1);
}


int main(){
    int test[] =  {1, 14, 51, 30, 8, 5, 9, 8, 10};
    cout<< countEvens(test,9)<<endl;
    return 0;
}