//add include statements
#include "dna.h"

using std::string;

//add function(s) code here
double get_gc_content(const std::string &dna)
{
    auto gc_count = 0.0;
    auto gc_content = 0.0;

    for(int i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            gc_count++;
        }
    
    }

    gc_content = gc_count / dna.length();

    return gc_content;

}

std::string get_dna_compliment(std::string dna)
{
    string dna_compliment = "";

    for(int i = dna.length(); i >= 0; i--)
    {
        switch(dna[i])
        {
            case 'A':
                dna_compliment.push_back('T');
                break;

            case 'T':
                dna_compliment.push_back('A');
                break;

            case 'C':
                dna_compliment.push_back('G');
                break;

            case 'G':
                dna_compliment.push_back('C');
                break;
        }
    
    }

    return dna_compliment;
}

std::string reverse_string(std::string dna)
{
    string reverse_dna = "";

    for (int i = dna.length(); i > 0; i--)
    {
        reverse_dna.push_back(dna[i-1]);
    }
    
    return reverse_dna;
    
}
