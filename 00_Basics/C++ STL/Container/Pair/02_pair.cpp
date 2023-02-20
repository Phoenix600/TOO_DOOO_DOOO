#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<int,string>employee(1212,"Pranay Ramteke");
    
    std::cout << "Employee ID : " << employee.first << "\nEmployee Name : " << employee.second <<std::endl;


    // Ways to declare and copy the pair 
    pair<int,string> CEO(employee);
    std::cout << CEO.first << " " << CEO.second << " \n";

    // Another way to create the pair using the make_pair() method
    pair <int,string> HERO = make_pair(999,"JUICE WRLD");
    std::cout << HERO.first << " " << HERO.second << std::endl; 


    // More valid way to create the pair 
    pair<string,string>WAYNE = {"Bruce Wayne","Batman"};
    std::cout << WAYNE.first << " " << WAYNE.second << std::endl; 


    return 0;
}