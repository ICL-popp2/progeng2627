// #include <iostream>

// int main(){
//     int n, i = 0;
//     // we have a variable counter
//     // counting how many times we print
//     // initially we have printed 0 times

//     std::cin >> n;

//     // the following line begins a while loop
//     // the while loop has a condition in parentheses,
//     // if the condition is true, then we enter the loop 
//     // and execute the instructions inside
//     // otherwise the execution goes past the loop

//     while(i < n){

//         std::cout << "hello" << std::endl;

//         i = i + 1;
//         // after each print we increase 
//         // the counter by 1
//     }
// }

// #include <iostream>

// int main(){
//     int n=4, counter = 0;

//     while(counter < n){
//         std::cout << counter << std::endl;
//         counter = counter + 1;
//     }
// }

// WARNING: infinite loop!
// don't run this program if it's not the right time
// to have an infinite loop running on your computer!

// depending on the tools you are using this may crash 
// your development environment, your browser, other programs
// or the whole operating system

// before you run this program, make sure that all your work is saved
// that you know how to stop a program manually etc

// #include <iostream>

// int main(){
//     int n, counter = 0;

//     std::cin >> n;

//     while(counter < n){
//         std::cout << "hello" << std::endl;
//         counter++;
//         // if we remove or forget to include
//         // the instruction updating counter
//         // if the condition is true the first time
//         // it will always stay true and the loop never ends

//     }
// }

// #include <iostream>

// int main(){

//     double x, acc = 0;
//     int n, counter = 0;

//     std::cin >> x >> n;

//     while(counter < n){
//         acc = acc + x;
//         counter = counter + 1;
//     }

//     std::cout << x << "*" << n <<  " = " << acc << std::endl;

// }

// #include <iostream>

// int main(){
//     int n;

//     std::cin >> n;

//     while(-11 < n && n < 11){
//         std::cout << n << std::endl;
//         std::cin >> n;
//     }
//}

// #include <iostream>
// #include <string>

// int main(){
//     std::string n;

//     std::cin >> n;

//     while(n != "STOP"){
//         std::cout << n << std::endl;
//         std::cin >> n;
//     }
// }

// #include <iostream>

// int main() {
//     int num, sum = 0;
//     double count = 0, avg = 0;

//     while (num != 0){
//         std::cin >> num;
//         sum += num;
//         count++;
//         avg = sum/count;
//         std::cout << "sum so far: " << sum << std::endl;
//         std::cout << "average so far: " << avg << std::endl;
//     }
// }

// #include <iostream>

// int main() {
//     int a, b, q = 0, r, num;
//     std::cin >> a >> b;
//     num = a;
//     while (num >= b){
//         num = num-b;
//         q++;
//     }
//     r = num;
//     std::cout << a << "/" << b << " = " << q << "*" << b << "+" << r << std::endl;
// }
