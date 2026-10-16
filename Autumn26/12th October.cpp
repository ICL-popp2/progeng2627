// #include <iostream>
// #include <cmath>

// int main(){
//     double a, b, c, s, area, perimeter;

//     std::cout << "Enter three side lengths: ";
//     std::cin >> a >> b >> c;

//     if(a+b-c>0 & a+c-b>0 & b+c-a>0){
//         if(a==b|b==c|c==a){
//             if(a==b & b==c){
//                 std::cout << "equilateral :)" << std::endl;
//             }else {
//                 std::cout << "isosceles :)" << std::endl;
//             }
//         } else{
//             std::cout << "scalene :(" << std::endl;
//         }
//         perimeter = a+b+c;
//         std::cout << "perimeter = " << perimeter << std::endl;
//         s = perimeter/2;
//         area = std::sqrt(s*(s-a)*(s-b)*(s-c));
//         std::cout << "area = " << area << std::endl;
//     }
// }

#include <iostream>
#include <string>

int abs(int a) {
    if (a<0){
        a = -a;
    }
    return a;
}

int main (){
    std::string initial_position, target_position, piece;
    int first_initial, second_initial, first_target, second_target, letter, number, test;
//    std::cout << "give me the initial and target position of your knight piece: ";
    std::cout << "give me thepiece you want to move (bishop, knight, rook, king and queen), as well as its initial and target position: ";
    std::cin >> piece >> initial_position >> target_position;
    first_initial = initial_position[0];
    second_initial = initial_position[1];
    first_target = target_position[0];
    second_target = target_position[1];
//    std::cout << first_initial << " " << second_initial << " " << first_target << " " << second_target << std::endl;
    bool legal = false;
    if ('a' <= first_initial & first_initial <= 'h' & '1' <= second_initial & second_initial <= '8' & 'a' <= first_target & first_target <= 'h' & '1' <= second_target & second_target <= '8'){
        letter = first_initial - first_target;
        number = second_initial - second_target;
        if (piece == "knight"){
            if (letter == 2 & number == 1 | letter == 2 & number == -1 | letter == -2 & number == 1 | letter == -2 & number == -1 | letter == 1 & number == 2 | letter == 1 & number == -2 | letter == -1 & number == 2 | letter == -1 & number == -2){
                legal = true;
            }
        } else if (piece == "bishop") {
            if (abs(letter) == abs(number) & number != 0){
                legal = true;
            }
        } else if (piece == "rook"){
            if (number != 0 & letter == 0 | number == 0 & letter != 0){
                legal = true;
            }
        } else if (piece == "queen"){
            if (number != 0 & letter == 0 | number == 0 & letter != 0 | abs(letter) == abs(number) & number != 0){
                legal = true;
            }
        } else if (piece == "king"){
            if (abs(number) == 1 & letter == 0 | number == 0 & abs(letter) == 1 | abs(letter) == abs(number) & abs(letter) == 1){
                legal = true;
            }
        }
    } 
    if (legal){
        std::cout << "this move is legal" << std::endl;
    } else {
        std::cout << "this move is illegal" << std::endl;   
    }
}