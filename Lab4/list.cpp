#include<iostream>
#include<iomanip>
#include<sstream>

using namespace std;

int main(){
    // declare and init vars
    double price, tax, item_price, total_amount = 0;
    stringstream ss;// string stream
    char yn = 'y';

    for(int item=1; yn=='y'; ++item){
        //input
        cout << "Enter the price:";
        cin >> price;
        cout << "Enter the tax rate:";
        cin >> tax;
        cout << "Is there any item?(y/n)";
        cin >> yn;
        // calc
        item_price = price*(1+tax*0.01);
        total_amount += item_price;
        // format and store values in ss
        ss << right << setw(2) << item;
        ss << right << setw(12) <<  fixed << setprecision(2) << price;
        ss << right << setw(9) << tax << "%";
        ss << right << setw(13) << item_price << endl;
        if(yn != 'y' && yn != 'n'){
            cout << "Invalid input" << endl;
            return 0;
        }
    }

    // output
    cout << "\nItem   " << "Price   " << "Tax Rate%   " << "Item Price" << endl;
    cout << "=====================================" << endl;
    cout<< ss.str()<<endl;    
}