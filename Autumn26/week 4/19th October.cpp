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
#include <cstdlib>
#include <ctime>

int abs(int a) {
    if (a<0){
        a = -a;
    }
    return a;
}

int rand_2_7(){
    std::srand(std::time(NULL));
    int num = std::rand() % 6 + 2;
    return num;
}

bool Legal(int first_initial, int second_initial, int first_target, int second_target, std::string piece){
    bool legal = false;
    if ('a' <= first_initial & first_initial <= 'h' & '1' <= second_initial & second_initial <= '8' & 'a' <= first_target & first_target <= 'h' & '1' <= second_target & second_target <= '8'){
        int letter = first_initial - first_target;
        int number = second_initial - second_target;
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
    return legal;
}


int main (){
    std::string initial_position, target_position, piece;
    piece = "knight";
    int first_initial, second_initial, first_target, second_target, letter, number, test, tries = 0;
    char op1, op2;
//    std::cout << "give me the initial and target position of your knight piece: ";
    // std::cout << "give me thepiece you want to move (bishop, knight, rook, king and queen), as well as its initial and target position: ";
    // std::cin >> piece >> initial_position >> target_position;
    // first_initial = initial_position[0];
    // second_initial = initial_position[1];
    // first_target = target_position[0];
    // second_target = target_position[1];
    first_initial = 'a' + rand_2_7() - 1;
    second_initial = '1' + rand_2_7() - 1;
    op1 = first_initial;
    op2 = second_initial;
    std::cout << "Your knight started at the " << op1 << op2 << " square, try to help it escape by going into one of the corner squares in the smallest amount of moves possible" << std::endl;
//    std::cout << first_initial << " " << second_initial << " " << first_target << " " << second_target << std::endl;
    bool escaped = false, legal;
    while (!escaped && tries < 3 /* ik its supposed to be 5 but 3 is more challenging :)*/){
        std::cout << "Where do you want to move your knight: ";
        std::cin >> target_position;
        first_target = target_position[0];
        second_target = target_position[1];
        legal = Legal(first_initial, second_initial, first_target, second_target, "knight");
        if (legal){
            tries++;
            if (first_target == 'a' && second_target == '1' || first_target == 'a' && second_target == '8' || first_target == 'h' && second_target == '1' || first_target == 'h' && second_target == '8'){
                std::cout << "Congrats!!! You helped your knight escape in " << tries << " moves!" << std::endl;
                escaped = true;
            } else {
                first_initial = first_target;
                second_initial = second_target;
                op1 = first_initial;
                op2 = second_initial;
                std::cout << "Your knight is now at the " << op1 << op2 << " square" << std::endl;
            }
        } else {
            std::cout << "this move is illegal, try again" << std::endl;  
        }
    }
    if (!escaped){
        std::cout << "You didin't help your knight escape quick enough, RIP" << std::endl;
    }
    
    
}
