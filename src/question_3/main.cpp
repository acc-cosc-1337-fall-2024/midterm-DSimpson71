#include "question3.h"

using std::cout; using std::string;

int main()
{
    cout<<"Start \n";
    string rna = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT");
    cout<<""<<rna<<"\n";

    cout<<"Stop \n";
    return 0;
}