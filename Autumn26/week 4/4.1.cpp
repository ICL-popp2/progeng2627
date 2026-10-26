#include <iostream>
#include <cmath>
// // header for math operations

// int main(){
//     double n;
//     // the name of the variable doesn't matter
//     std::cout << "please enter a number" << std::endl;
//     std::cin >> n;
//     std::cout << "|" << n << "| = " << std::abs(n) << std::endl;
// }

// #include <iostream>

// // we define a new function called myabs
// // in the first line we specify that
// // the function has an input parameter 
// // of type double (double in)
// // (in is not a special name)
// // and returns a value of type double
// // (hence *double* myabs etc)

// double myabs(double in){

//     double abs; // not a special name, just a name

//     if(in < 0){ // if the number is negative...

//         // ...then the result is the number
//         // with a switched sign
//         abs = -in;
//     }
//     else{ // otherwise...

//         // ...the result is the same number
//         abs = in;
//     }

//     // the function returns the result
//     return abs;

// }

// // the main is almost the same

// int main(){
//     double n;
//     std::cout << "please enter a number" << std::endl;
//     std::cin >> n;
//     std::cout << "|" << n << "| = " << myabs(n) << std::endl;
//     //                                ^ except here we call myabs (not std::abs)
// }

// this example won't work
// because function myabs 
// is not declared before the main
// #include <iostream>

// int main(){
//     double n;
//     std::cout << "please enter a number" << std::endl;
//     std::cin >> n;
//     std::cout << "|" << n << "| = " << myabs(n) << std::endl;
//     // function myabs is called here                        
// }
// // therefore the following code should be before the main
// // otherwise it won't work
// double myabs(double in){
//     double abs;

//     if(in < 0){ 
//         abs = -in;
//     }
//     else{
//         abs = in;
//     }

//     return abs;
// }

/*
C:\vs code\Programming for Engineers\4.1.cpp: In function 'int main()':
C:\vs code\Programming for Engineers\4.1.cpp:63:40: error: 'myabs' was not declared in this scope
   63 |     std::cout << "|" << n << "| = " << myabs(n) << std::endl;
      |                                        ^~~~~

Build finished with error(s).
*/

// #include <iostream>
// #include <cmath>

// // int main(){
// //     std::cout << "2^3: " << std::pow(2, 3) << std::endl; //8
// //     std::cout << "0.5^2: " << std::pow(0.5, 2) << std::endl; //0.25
// //     std::cout << "1^0: " << std::pow(1, 0) << std::endl; //1
// //     std::cout << "4^0.5: " << std::pow(4, 0.5) << std::endl; //2
// //     std::cout << "4^(-0.5): " << std::pow(4, -0.5) << std::endl; //1/2
// // }

// double mypow(double base, double exponent){
//     double result = 1;
//     if(exponent >= 0){
//         for(int i = 0; i < exponent; i++){
//         result = result * base;
//     }
//     }  else {
//         for(int i = 0; i > exponent; i--){
//         result = result / base;
//     }
// }
//     return result;
// } 

// double sumpow(double base, int n){
//     double sum = 0;
//     for (int i = 1; i <= n; i++){
//         sum += mypow(base, i);
//     }
//     return sum;
// }

// int main(){
//     std::cout << sumpow(2, 3) << std::endl;
// }

// #include <iostream>

// int myfactorial(int in){
// // in is not a special name
// // just a name

//     int fact;
//     if (in > 1){
//         fact = in * myfactorial(in-1);
//     } else {
//         fact = 1;
//     }
//     return fact;
// }

// int main(){
//     int n; 
//     std::cout << "please enter a number" << std::endl;
//     std::cin >> n;
//     std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
// }

// #include <iostream>

// // we can define a function that returns a bool

// bool leap_year(int year){
//     bool ly;

//     if (year%4==0){
//         if (year%100==0){
//             if (year%400==0){
//                 ly = true;
//             } else{
//                 ly = false;
//             }
//         } else {
//             ly = true;
//         }
//     } else {
//         ly = false;
//     }

//     return ly;
//     // we *do not print* anything in the function
// }

// int main(){

//     int input_year;

//     std::cout << "please enter a year" << std::endl;
//     std::cin >> input_year;

//     // a function returning a bool 
//     // can be used directly in the condition
//     // of an if statement 

//     if(leap_year(input_year)){
//         std::cout << "it's a leap year" << std::endl;
//     }
//     else{
//         std::cout << "it's not a leap year" << std::endl;
//     }
// }

int maxoftwo(int a, int b){
    if (a>b){
        return a;
    } else{
        return b;
    }
}

int maxofthree(int a, int b, int c){
    if (a>b){
        if (a>c){
            return a;
        } else {
            return c;
        }
    } else {
            if (b>c){
                return b;
            } else {
                return c;
            }
        }
}

//sum of powers is already done, see line 115

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << maxofthree(a, b, c) << std::endl;
    std::cin >> a >> b;
    std::cout << maxoftwo(a, b) << std::endl;
}