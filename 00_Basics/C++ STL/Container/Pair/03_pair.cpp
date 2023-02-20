#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<int,char>pair1;
    pair<int,char>pair2(12,'S');
    pair<int,char>pair3;

    // Assigning the first and second data members of the pair1 
    pair1.first = 21;
    pair1.second = 'A';

    // Initializing the pair3 using the make_pair() method
    pair3 = make_pair(5,'D');

    // Displaying the required data 
    std::cout << "Pair1 Content : " << pair1.first << " " << pair1.second << std::endl;
    std::cout << "Pair2 Content : " << pair2.first << " " << pair2.second << std::endl;
    std::cout << "Pair3 Content : " << pair3.first << " " << pair3.second << std::endl;



    return 0;
}