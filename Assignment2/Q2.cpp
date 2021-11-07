
#include<iostream>
#include<cstring>

using namespace std;

bool isConsecutive5(const int values[], int size){
    // Check size for avoiding out of range
    if(size<5) return false;
    //init vars
    int prev = values[0], cnt=1;
    //Compare previous and now 
    for (int i = 1; i < size; i++){
        cnt = (prev==values[i]) ? cnt+1 : 1;
        prev = values[i];

        if(cnt==5) return true;
    }
    return false;
}

int main(){
    int test[100]={1,2,3,4,5,3,3,3,3,3};
    cout<<isConsecutive5(test,11)<<endl;
    return 0;
}

