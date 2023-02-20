#include<iostream>
#include<utility>

using namespace std;

int main()
{
    cout << "Getting Started With The Pair Container In STL\n";
    // Pair container is defined in the utility container

    /**
     * In pair the fisrt element is reffered as first and second element is 
     * reffered as the second 
     * Pair can be assigned, copied and compared 
     * Pair consists of pair of first and second element.
     * To access the elements inside the pair, we use the '.' dot operator 
     * and followed by the name of the first and second 
    */

    pair<int,char>hashPair;
    
    hashPair.first = 1;
    hashPair.second = 'A';

    cout << hashPair.first<< std::endl;
    cout << hashPair.second << std::endl;
    

    pair<string,string>soulmates;
    soulmates.first = "Pranay";
    soulmates.second = "********";

    std::cout << soulmates.first + "  " +soulmates.second << std::endl;    

    return 0;
}