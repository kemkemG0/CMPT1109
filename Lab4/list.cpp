#include<iostream>
#include<iomanip>
#include<sstream>

using namespace std;

int main(){
    // declare and init vars
    double price, tax, item_price, total_amount = 0;
    string values_list_str = "";// store values with space seprate
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
        // store values
        values_list_str += to_string(item) + " " + to_string(price) + " " + to_string(tax) + " " + to_string(item_price) + " ";
        //validation
        if(yn != 'y' && yn != 'n'){
            cout << "Invalid input" << endl;
            return 0;
        }
    }

    // common output
    cout << "\nItem   " << "Price   " << "Tax Rate%   " << "Item Price" << endl;
    cout << "=====================================" << endl;
    
    string value = "";
    stringstream ss{values_list_str};
    int cnt = 0;// takes [0-3]
    while(getline(ss, value, ' ')){
        // output each columns with nice format
        if(cnt==0)cout << right << setw(2) << value;
        if(cnt==1)cout << right << setw(12) << fixed << setprecision(2) << stod(value);
        if(cnt==2)cout << right << setw(9) << stoi(value) << "%";
        if(cnt==3)cout << right << setw(13) << stod(value) << endl;

        cnt = (cnt+1)%4;
    }
    if(total_amount > 1000) total_amount *= 0.97;
    cout << "\n\nTotal Amount: " << total_amount << "$" << endl;
}