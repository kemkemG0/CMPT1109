#ifndef PASSWORD_H
#define PASSWORD_H
#include<string>
using namespace std;
class Password{
    private:
        const string errMsg_over_8 = "Length is less than eight symbols";
        const string errMsg_start_letter = "Starts with a non-letter symbol";
        const string errMsg_over_2_lower = "Password has to contain at least  2 lower case";
        const string errMsg_over_1_upper = "Password has to contain at least 1 upper case";
        const string errMsg_exact_2_digits = "Password has to contain exact 2 digits";
        const string errMsg_no_space = "Contains a space";
        const string errMsg_symbol = "contains not exactly 2 digits";

        string errorMsg = "";
	    string value; // The value of password	
        
        bool is_length_over_8(const string& psw);
        bool is_start_from_letter(const string& psw);
        bool has_over_2_lower_case(const string& psw);
        bool has_over_1_upper_case(const string& psw);
        bool has_exact_2_digits(const string& psw);
        bool is_no_space(const string& psw);
        bool has_symbol(const string& psw);
        
    public:
        // Class constructor creates a Password, with the given value. 
        // It throws an exception if the value is a not valid password.
        // The exception is an object of invalid_argument with a message
        // about the problem. [3 marks]
        Password(string & value);

        string getError();

        // Updates the password to newValue. Again if the newValue is not valid
        // it throws an exception like the constructor [3 marks] 
        void update(string & newValue);

        // Returns true if the given value is the same as the value of object, 
        // otherwise, it returns false [2 marks]
        bool confirm(const string & givenValue); 

        // Returns true if the value is a valid password according to description 
        // of the question, and in this case the errorMessage is an empty string 
        // like "". Otherwise, it returns false and set and returns errorMessage 
        // with an appropriate message. [10 marks]
        bool isValid(const string & value, string & errorMessage); 
        
        // You can add more functions if you want to have more modularized code,
        // specially to check all the criteria for a valid password

};
#endif