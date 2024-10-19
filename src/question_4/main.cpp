#include "question4.h"

using std::cout; using std:: cin; using std::vector;

int main()
{
    auto option = 0;
    do 
    {
        cout<<"Please enter the amount of cookies you want to make in whole numbers \n";
        cin>>option;

        if(option < 0)
        {
            cout<<"Must be a positive number\n";
        }
        else if(option >=1)
        {
            get_cookie_ingredients(option);
        }
        else
        {
            cout<<"Alright, closing program. \n";
            option = 0;
        }
    }
    while(option != 0);
    return 0;
}