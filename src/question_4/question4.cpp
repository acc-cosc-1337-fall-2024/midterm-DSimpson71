#include "question4.h"

using std::vector; using std::cout;

bool test_config()
{
    return true;
}


vector <double> get_cookie_ingredients(int amount)
{
    vector <double> ingredients {1.5, 1.0, 2.75}; //This is for 48 cookies
    double base = 48;
    double multiplier = (amount/base);

    // double multiplier = (base/amount);
    //int runtime = 3; // runs 3 times
    
    for (auto &i : ingredients) //This one was really close but i couldnt figure it out
    {
       // cout<<""<<i<<"\n"; //debug
        i = i * multiplier;
       // cout<<""<<i<<"\n"; //debug
    }
    
    double sugar = ingredients[0];
    double butter = ingredients[1];
    double flour = ingredients[2];

    cout<<"Cups of sugar :"<<sugar<<"\n";
    cout<<"Cups of butter :"<<butter<<"\n";
    cout<<"Cups of flour:"<<flour<<"\n";

    return ingredients;
}