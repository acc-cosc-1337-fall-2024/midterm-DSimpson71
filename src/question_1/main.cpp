#include "question1.h"


using std::cout; using std::cin;
int main()
{
    int option = 99; 
    char confirm ='l';
    std::string current_return_value = "";
    do {
        cout<<"Please enter a number between 1 - 10, or enter 0 to exit\n";
        cin>>option;
        if(option >=1 && option <=10)
        {
            int num = option;
            current_return_value = get_factorial(num);
            cout<<"The factorial of your input is "<<current_return_value<<"\n";


            cout<<"Also the sequence for this is "<<get_factorial_sequence(num)<<"\n";
        }
        else if(option == 0)
        {
            cout<<"Are you sure you want to exit? Press y for yes or n for no\n";
            cin>>confirm;
            if(confirm == 'y')
            {
                cout<<"Closing program \n";
                option = 919571285;
            }
            else if(confirm == 'n')
            {
                cout<<"Alright, continuing program\n";
            }
            else
            {
                cout<<"What you inputed was not a valid response, continuing program\n";
            }
        }
        else
        {
            cout<<""<<option<<" is not a valid input, please enter input between 1 and 10\n";
        }
    }
    while(option != 919571285);
    return 0;
}