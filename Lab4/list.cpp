#include<iostream>
#include<iomanip>
#include<sstream>

using namespace std;

int main(){
    // declare and init vars
    double price, tax, item_price, total_amount = 0;
    stringstream ss;
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
        ss << right;
        ss << setw(2) << item;
        ss << setw(12) <<  fixed << setprecision(2) << price;
        ss << setw(9) << tax << "%";
        ss << setw(13) << item_price << endl;
    }
    if(total_amount > 1000) total_amount *= 0.97;

    // output
    cout << "\nItem   " << "Price   " << "Tax Rate%   " << "Item Price" << endl;
    cout << "=====================================" << endl;
    cout<< ss.str()<<endl;
    cout << "Total Amount: " << fixed << setprecision(2) << total_amount << "$" << endl;