#include<iostream>
#include<utility>

using namespace std;

int main()
{
    std::pair<int,std::string>emp1(12,"Pranay");
    std::pair<int,std::string>emp2(11,"Raj");

    int id;
    std::string name;

    tie(id,ignore) = emp1;
    tie(ignore,name) = emp2;


    std::cout << id  << " " << name << std::endl;


    return 0;
}