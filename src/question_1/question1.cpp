#include "question1.h"

using std::string;
using std::to_string;

bool test_config()
{
    return true;
}

string get_factorial(int num)
{
    string fact = "";
    int product = 1;

    while(num > 0)
    {
        product = num * product;
        num --;
    }

    fact = std::to_string(product);
    //std::cout<<"The factorial of your input is "<<fact<<"\n";
    return fact;

}

string get_factorial_sequence(int num)
{
    string value = "";
    //auto keep_track = 0;
    for(int i = 1;i <= num;i++)
    {
        value.append("x");
        value.append(std::to_string(i));
    }

    //Remove leading "x" sign
    value.erase(0,1);

    string fact = get_factorial(num);
    value.append("=");
    value.append(fact);
    return value;
}