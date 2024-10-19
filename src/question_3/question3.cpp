#include "question3.h"

using std::string;

bool test_config()
{
    return true;
}

string transcribe_dna_into_rna(string dna)
{
    int dna_size = dna.size();
    dna_size --;
    string rna = "";
    for(int i = 0; i < dna_size; i++)
    {
        if(dna[i] == 'T')
        {
            dna[i] = 'U';
        }

    }
    rna.append(dna);
    
    return dna;
}