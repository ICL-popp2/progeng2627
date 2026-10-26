#include <iostream>

// int main(){
//     for(int i = 0; i < 7; i++){
//         std::cout << i << std::endl;
//     }
// }
/*
o/p:
0
1
2
3
4
5
6 
*/

// :)

// int main() {
//     int x, n, z = 1;
//     std::cin >> x >> n;
//     for (int i = 0; i < n; i++){
//         z = z*x;
//     }
//     std::cout << x << "^" << n << "=" << z << std::endl;
// }

int main() {
    int fact = 1, n;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        if (n-i != 0){
            fact = fact * (n-i);
        }   
    }
    std::cout << fact;
}
