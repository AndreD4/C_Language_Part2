#include <iostream>

//this is a commment 

/* everything between those two elements is a comment and will be ignored. */  

/* this is a 
     multiple 
       Line comment
*/

int main()
{
    int favourite_Number;
    std::cout << "Enter your favourite numebr between 1-100:";
    std::cin >> favourite_Number;
    std::cout << "Amazing! thats my favourite number too!" << std::endl;
    std::cout << "No really!! " << favourite_Number <<" is my favourite number too!" << std::endl;
    return 0;
}