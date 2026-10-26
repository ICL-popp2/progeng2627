#include <iostream>
#include <string>

// int main(){
//     int n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     // we swap the values
//     // in order to do so we need to use
//     // a third temporary variable

//     int tmp;

//     tmp = n1;
//     n1 = n2;
//     n2 = tmp;

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

// }

// // wrong version!
// #include <iostream>

// int main(){
//     int n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     // this will not work:
//     n1 = n2;
//     n2 = n1;

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

// }

// // wrong version!
// #include <iostream>

// // type void means we are not returning anything

// // this won't work!
// void myswap(int n1, int n2){
//     int tmp;
//     tmp = n1;
//     n1 = n2;
//     n2 = tmp;
// }

// int main(){
//     int n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     myswap(n1, n2);

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;
// }

// #include <iostream>

// // this is the only different line:
// void myswap(int& n1, int& n2){

//     int tmp;
//     tmp = n1;
//     n1 = n2;
//     n2 = tmp;

// }

// int main(){
//     int n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     myswap(n1, n2);

//     // when the function is called here
//     // the n1 in myswap becomes just a different name
//     // for the n1 in the main
//     // (same for n2)

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;
// }

// void swapstring(std::string& swapone, std::string& swaptwo){
//     std::string temp = swapone;
//     swapone = swaptwo;
//     swaptwo = temp;
// }

// int main(){
//     std::string one, two;
//     one = "hello";
//     two = "bye";
//     swapstring(one, two);
//     std::cout << one << std::endl << two;
// }

void sortthree(double& one, double& two, double& three){
    double temp, tempone;
    if (one > two && one > three){
        if (two > three){
        } else {
            temp = two;
            two = three;
            three = temp;
        }
    } else if (two > one && two > three){
        tempone = one;
        one = two;
        two = tempone;
        if (two > three){
        } else {
            temp = two;
            two = three;
            three = temp;
        }
    } else{
        tempone = one;
        one = three;
        three = tempone;
    }
}

int main(){
    double one = 5, two = 78, three = 3;
    sortthree(one, two, three);
    std::cout << one << " " << two << " " << three;
}