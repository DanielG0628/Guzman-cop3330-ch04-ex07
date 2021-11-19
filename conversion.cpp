/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Guzman
 */

#include <string>
using namespace std;

int stringToNum(string number){ 

    if(number.compare("one") == 0)
        return 1;
    else if(number.compare("two") == 0)
        return 2;
    else if(number.compare("three") == 0)
        return 3;
    else if(number.compare("four") == 0)
        return 4;
    else if(number.compare("five") == 0)
        return 5;
    else if(number.compare("six") == 0)
        return 6;
    else if(number.compare("seven") == 0)
        return 7;
    else if(number.compare("eight") == 0)
        return 8;
    else if(number.compare("nine") == 0)
        return 9;
    else if(number.compare("zero") == 0)
        return 0;
    else
        return stoi(number);

}