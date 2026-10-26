/*
#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "hello" << std::endl << std::endl << "hello" << std::endl;
    std::cout << "whats your name? ";
    std::cin >> name;
    std::cout << "hi " << name;
}
*/

/*
// this program needs to be fixed 

//broken:

// #include <iostring>

// int main(){
//     std::cout >> "hello"

//fixed:

#include <iostream>

int main(){
    std::cout << "hello";
}

// :)
*/

/*
#include <iostream>
#include <string>
// this includes the header for text variables

int main(){
    std::string user_name;

    // TODO: add another declaration
    // for a text variable called user_surname
    std::string user_surname;

    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name;

    // TODO: add another printing instruction 
    // asking for the surname
    std::cout << "and what is your surname?" << std::endl;

    // TODO: read the surname from the user
    // and store it in variable user_surname
    std::cin >> user_surname;

    // TODO: add a printing instruction 
    // that says hello followed by the
    // name and surname of the user
    std::cout << "hello " << user_name << " " << user_surname << std::endl;
}
*/

#include <iostream>

int main(){
    char a, b;
    a = 'a';
    b = 'c';
    int c;
    c = b - a;
    // int num1, num2, num3;
    // num1, num2 = 'c', 'a';
    // num3 = num1 - a;
    std::cout << c;
}
