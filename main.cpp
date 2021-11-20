/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Doyon
 */

#include "header.h"

using namespace std;

vector<string> single_digits;


void init_vector()
{
    single_digits.push_back("zero");
    single_digits.push_back("one");
    single_digits.push_back("two");
    single_digits.push_back("three");
    single_digits.push_back("four");
    single_digits.push_back("five");
    single_digits.push_back("six");
    single_digits.push_back("seven");
    single_digits.push_back("eight");
    single_digits.push_back("nine");
}


int get_num()
{
    double inp = 0;
    
    if (cin >> inp)
        return inp;

    cin.clear();

    string inp_s;
    cin >> inp_s;

    for (int i = 0; i < single_digits.size(); i++)
    {
        if (single_digits[i] == inp_s)
            return 1;
    }

    return -1;
}



int main()
{
    init_vector();
    cout << "Enter two values (number or single digit spelled out) and the operator you want to use (+, -, *, /)\n";

    double val1 = 0;
    double val2 = 0;
    char op = 0;

    val1 = get_num();
    val2 = get_num();
    cin >> op;

    if (val1 == -1 || val2 == -1)
        cout << "Numbers must be int or a spelled out single digit";

    else
    {
        switch (op)
        {
            case '+':
                cout << "The sum of " << val1 << " and " << val2 << " is " << val1+val2 << ".\n";
                break;
            
            case '-':
                cout << "The difference of " << val1 << " and " << val2 << " is " << val1-val2 << ".\n";
                break;

            case '*':
                cout << "The product of " << val1 << " and " << val2 << " is " << double(val1*val2) << ".\n";
                break;

            case '/':
                if (val2 == 0)
                    cout << "No division by zero!\n";

                else
                    cout << "The quotient of " << val1 << " and " << val2 << " is " << double(val1/val2) << ".\n";
                    break;

            default:
                cout << "This is not a valid operator (use +, -, * or /)\n";
                break;
        }
    }
}