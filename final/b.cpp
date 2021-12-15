#include<iostream>
using ll= long long;
#define REP(i,n) for(ll i=0;i<ll(n);i++)

using namespace std;

int append (int *& ls1, int n1, const int * ls2, int n2, int num){
    // wanna create ls1 + ls2[:num]
    if(n2<num || num<0) throw "Invalid number of item(s) to append!";
    // allocate enough size
    int* new_ls1 = new int[n1+num];
    // copy ls1 new_ls1
    for (int i = 0; i < n1; i++)new_ls1[i]=ls1[i];
    // append ls2[:num]
    for (int i = 0; i < num; i++)new_ls1[n1+i]=ls2[i];
    // delete old ls1, if ls1 was create by using new
    // delete[] ls1;
    ls1 = new_ls1;
    return n1+num;
}

int main(){
    int original_ls1[] = {2, 7, 3, 10}; int n1=4;
    int* original = original_ls1;
    int* & ls1 = original;
    int ls2[] = {5, 2, 4, 12, 45}; int n2 = 5;
    int num=3;
    cout<<append(*&ls1,n1,ls2,n2,num)<<endl;
    REP(i,7)cout<<ls1[i]<<endl;
    
    return 0;
}