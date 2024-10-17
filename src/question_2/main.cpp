#include "question2.h"
#include <iostream>
#include <string>

using std::string; using std::cin; using std::cout;


int main()
{
    string text = "";
    int option = 0;
    do
    {
        cout<<"Please enter a string, and I will tell you whether it is a palindrome or not.\n";
        cout<<"Also type \"leave\" to close the program. (leave is not a palindrome) \n";
        cin>>text;
        bool is_pal; 
        is_pal = is_palindrome(text);
        if(text== "leave")
        {
            cout<<"Alright closing program\n";
            option = 100;
        }
        else if(text != "leave")
        {
            if(is_pal)
            {
                cout<<"**************************\n";
                cout<<text<<" is a palindrome\n";
            }
            else
            {
                cout<<"**************************\n";
                cout<<text<<" is not a palindrome\n";
            }
        }
            
    }
    
    while (option != 100);
    
    return 0;
}