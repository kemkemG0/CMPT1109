#include<iostream>
#include"Password.h"

int main(){
    string test_passwords[] = { "Xx_&9x2Yc","cmpt11@Douglas",
                                "passCode2%c1","Xx_&9x21Yc",
                                "Pe&11x","#Pt1xx1","Cpsc& 81",
                                "P@SSWORD00","p@ssword00","@PSSword00"};
    
    string first_pass = "P@SSword00"; // valid password
    Password myPass(first_pass);// no error

    cout<< (myPass.confirm(first_pass)?"Same":"Differ")<<endl;
    // 9 test cases
    for (int i = 0; i < 9; i++){
        // isValid is called inside of update()
        myPass.update(test_passwords[i]);
        // if valid, output ""
        cout<<myPass.getError()<<endl;
    }
    
    return 0;
}

