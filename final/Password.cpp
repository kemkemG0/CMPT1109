#include<iostream>
#include"Password.h"


Password::Password(string & value){
    // validated in update()
    update(value);
}

bool Password ::is_length_over_8(const string& psw){
    if(psw.size()>=8)return true;
    throw invalid_argument(errMsg_over_8);
}

bool Password ::is_start_from_letter(const string& psw){
    if(islower(psw[0])||isupper(psw[0])) return true;
    throw invalid_argument(errMsg_start_letter);
}

bool Password ::has_over_2_lower_case(const string& psw){
    int num = 0;
    for(const char& c:psw)num+= (islower(c));
    if(num>=2)return true;
    throw invalid_argument(errMsg_over_2_lower);
}

bool Password ::has_over_1_upper_case(const string& psw){
    int num = 0;
    for(const char& c:psw)num+= (isupper(c));
    if(num>=1)return true;
    throw invalid_argument(errMsg_over_1_upper);
}

bool Password ::has_exact_2_digits(const string& psw){
    int num = 0;
    for(const char& c:psw)num+= (isdigit(c));
    if(num==2)return true;
    throw invalid_argument(errMsg_exact_2_digits);
}

bool Password ::is_no_space(const string& psw){
    int num = 0;
    for(const char& c:psw)num+= (int(c)<=32);
    if(!num)return true;
    throw invalid_argument(errMsg_no_space);
}

bool Password ::has_symbol(const string& psw){
    int num = 0;
    // add +1 on below condition
    for(const char& c:psw)
        num +=
            !(isupper(c)) && // not upper
            !(islower(c)) && // not lower
            !(isdigit(c)) && // not digit
            !(int(c)<=32); // not white space
        // => then, it's a symbol

    if(num>=1)return true;
    throw invalid_argument(errMsg_symbol);
}

void Password::update(string & newValue){
    if(!isValid(newValue,errorMsg))return;
    //set new value if no error
    value = newValue;
}

bool Password::confirm(const string & givenValue){ return givenValue == value;}

bool Password::isValid(const string & value, string & errorMessage){
    try{
        is_length_over_8(value);
        has_over_2_lower_case(value);
        is_start_from_letter(value);
        has_over_1_upper_case(value);
        has_exact_2_digits(value);
        is_no_space(value);
        has_symbol(value);
        // if ok till here, set "" and return true
        errorMessage = "";
        return true;
    }catch(exception& e){
        errorMessage = e.what();
        return false;
    }
}

// to show error message
string Password::getError(){return errorMsg;}

