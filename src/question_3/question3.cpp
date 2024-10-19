#include "question3.h"

using std::string;

bool test_config()
{
    return true;
}

string transcribe_dna_into_rna(string dna)
{
    int dna_size = dna.size(); //Passing the value to a variable to get rid of error message and make C++ happy
    for(int i = 0; i < dna_size; i++)
    {
        if(dna[i] == 'T')
        {
            dna[i] = 'U';
        } 
    }
    return dna;
}