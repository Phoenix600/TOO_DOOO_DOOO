#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<string,int>emp1 = make_pair("Pranay Ramteke",1212);
    pair<string,int>emp2 = make_pair("Rajesh Cooper",3311);

    // Content of the pairs before swapping 
    std::cout << "Before Swapping : \n";
    std::cout << "Employee1 : " << emp1.first << " " << emp1.second << std::endl;
    std::cout << "Employee2 : " << emp2.first << " " << emp2.second << std::endl;

    // Swapping the content of one pair object with the content of another 
    // pair object 
    emp1.swap(emp2);
    // Here the content of emp1 pair is swapped with the emp2 pair 


    std::cout << "After Swapping : \n";
    std::cout << "Employee1 : " << emp1.first << " " << emp1.second << std::endl;
    std::cout << "Employee2 : " << emp2.first << " " << emp2.second << std::endl;


    return 0;
}