#include "question2.h"

using std::string; using std::cout;

bool test_config()
{
    return true;
}

bool is_palindrome(const string &str)
{
   string reverse_str = reverse_string(str);

   if(reverse_str == str)
   {
        return true;
   }
   else
   {
        return false;
   }

}

string reverse_string(string text)
{
   //cout<<"Text is "<<text<<"\n";
    string new_text = "";
    int i = text.size();
    i --;
    while(i != -1)
    {
        new_text += text[i];
        i--;
    }
   //cout<<"New text is "<<new_text<<"\n";

    return new_text;
}