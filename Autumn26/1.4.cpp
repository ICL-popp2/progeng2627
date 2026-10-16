/*
#include <iostream>

int main(){
    double n1, n2, product;
    // this line declares three variables of a numerical type
    // n1, n2, product are the names of the variables
    // double is the type, which represents general decimal numbers

    std::cout << "please enter the first number" << std::endl;
    std::cin >> n1;

    std::cout << "please enter the second number" << std::endl;
    std::cin >> n2;

    product = n1 * n2;
    // here the result of n1 + n2 is computed
    // and it is stored in variable product

    std::cout << n1 << " * " << n2 << " = " << product << std::endl;
    // this is a printing instruction printing
    // the value in n1
    // the symbol + (with spaces)
    // the value in n2
    // the symbol = (with spaces)
    // the value in product
    // (and a newline at the end as usual)
}
*/

/*
#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;
    // this line will print 3

    a = 2;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed

    //3 :)

    c = a + b;

    std::cout << c << std::endl;
    // TODO: before testing the program
    // write in a comment below
    // what you expect to be printed

    //4 :)
}
*/

/*
#include <iostream>

int main(){
    double n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;
    // the operator % is not a percentage (bad choice of symbol, I know)
    // it computes the remainder of the integer division
    // between n and 2, which will be 
    // 0 if the number is even and
    // 1 if the number is odd

    std::cout << "in the following line 0 means even and 1 means odd" << std::endl;
    std::cout << rem << std::endl;

    // later we will upgrade this example to instead print a message saying
    // "the number is even" or "the number is odd" 
    // depending on the value of the remainder

    //C:\vs code\Programming for Engineers\1.4.cpp:72:13: error: invalid operands of types 'double' and 'int' to binary 'operator%'
    //72 |     rem = n % 2;
    //   |           ~ ^ ~
    //   |           |   |
    //   |           |   int
    //   |           double
    //Build finished with error(s).
}
*/

/*
#include <iostream>

int main(){
    std::cout << 5 / 2 << std::endl;
    // 2 :)
}
*/

// #include <iostream>
// #include <string>

// int main(){
//     double a, b, area, peremiter
// ;   std::cout << "give me the two sides of a rectangle and I'll calculate its area and peremiter" << std::endl << "side 1: "
// ;   std::cin >> a
// ;   std::cout << "side 2: "
// ;   std::cin >> b
// ;   area = a * b
// ;   peremiter = 2 * a + 2 * b
// ;   std::cout << "area = " << area << std::endl << "peremiter = " << peremiter << std::endl
// ;   
//     double GBP, exchange_rate, EUR
// ;   std::cout << "how many punds do you have?" << std::endl
// ;   std::cin >> GBP
// ;   std::cout << "whats the current GBP -> EUR exchange rate?" << std::endl
// ;   std::cin >> exchange_rate
// ;   EUR = GBP * exchange_rate
// ;   std::cout << "you have the equivalent of " << EUR << " euro"
// ;
//     double Celsius, Fahrenheit
// ;   std::cout << "whats the temperature in celcius? " << std::endl
// ;   std::cin >> Celsius
// ;   Fahrenheit = Celsius * 1.8 + 32
// ;   std::cout << "that is equal to: " << Fahrenheit << " Fahrenheits" << std::endl
//;   
//     double weight, height, BMI, square
// ;   int temp
// ;   std::string gender
// ;   std::cout << "are you a woman? (anwser 'yes' or 'no')" << std::endl
// ;   std::cin >> gender
//     //you shouldn't ask a woman her weight, that is rude
// ;   if (gender == "yes"){
//         weight = 50
// ;
//     } else {
//         std::cout << "enter your weight: "
// ;       std::cin >> weight
// ;
//     }
//     std::cout << "enter your height in centimeters: "
// ;   std::cin >> height
// ;   height = height/100
// ;   height = height * height
// ;   BMI = weight / height
// ;   temp = BMI * 10
// ;   BMI = (temp)/10.0
// ;   std::cout << "your BMI is: " << BMI << std::endl
// ;
// }