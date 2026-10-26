// #include <iostream>

// int f(){
//     std::cout << "this is function f" << std::endl;
//     return 1;
//     std::cout << "printing after the first return statement" << std::endl;
//     return 2;
//     std::cout << "printing after the second return statement" << std::endl;
// }

// int main(){
//     int n = 0;
//     n = f();
//     std::cout << "n is: " << n << std::endl; 
// }

#include <iostream>

// bool even_or_odd(int n){

//     bool out; 

//     if( (n % 2) == 0){
//         out = true;
//     }
//     else{
//         out = false;
//     }

//     return out;
// }


// bool even_or_odd_two_ret(int n){

//     if( (n % 2) == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// bool even_or_odd_two_ret_wrong(int n){

//     if( (n % 2) == 0){
//         return true;
//     }
//     // undefined behaviour if input is odd number
// }

// bool even_or_odd_wrong(int n){

//     bool out;

//     if( (n % 2) == 0){
//         out = true;
//     }
//     else{
//         out = false;
//     }

//     // undefined behaviour
// }

// int main(){

//     std::cout << even_or_odd(2) << std::endl;
//     std::cout << even_or_odd(3) << std::endl;

//     std::cout << even_or_odd_two_ret(2) << std::endl;
//     std::cout << even_or_odd_two_ret(3) << std::endl;

//     std::cout << even_or_odd_two_ret_wrong(2) << std::endl;
//     std::cout << even_or_odd_two_ret_wrong(3) << std::endl;

//     std::cout << even_or_odd_wrong(2) << std::endl;
//     std::cout << even_or_odd_wrong(3) << std::endl;
// }

/*
o/p:
PS C:\vs code\Programming for Engineers> & "C:\vs code\Programming for Engineers\4.3.exe"
1
0
1
0
1
PS C:\vs code\Programming for Engineers>
*/

int smallest_factor(int n){
    for (int i = 2; i<=n; i++){
        if (n%i == 0){
            return i;
        }
    }
    return 0;
}

void primes_in_range(int min, int max){
    for (min; min<=max; min++){
        if (smallest_factor(min) == min){
            std::cout << min << std::endl;
        }
    }
}

int main(){
    int intiger, min, max;
    std::cin >> intiger;
    std::cout << smallest_factor(intiger) << std::endl;
    std::cin >> min >> max;
    primes_in_range(min, max);
}