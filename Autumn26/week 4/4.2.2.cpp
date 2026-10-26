#include <iostream>
#include <cmath>
// // for the square root

// bool quadsolve(double a, double b, double c, double& x1, double& x2){

//     bool realsol;
//     double delta = b*b - 4 * a * c;

//     if(delta < 0){
//         realsol = false;
//     }
//     else{

//         realsol = true;
//         x1 = (-b + std::sqrt(delta)) / (2 * a);
//         x2 = (-b - std::sqrt(delta)) / (2 * a);

//         // function sqrt computes the square root
//         // more legible and sometimes more efficient
//         // than using e.g. std::pow(delta, 0.5)

//     }

//     return realsol;
// }

// int main(){

//     double a, b, c;
//     // it is just a coincidence that these variables are named
//     // like the function parameters, they could have a different name

//     std::cout << "this program finds the real solutions" << std::endl;
//     std::cout << "of an equation of the form ax^2 + bx + c = 0" << std::endl;
//     std::cout << "please enter the coefficients a, b, c:" << std::endl;

//     std::cin >> a >> b >> c;

//     double s1, s2;
//     // we pass these variables uninitialised to the function
//     // because the values will be provided in output 
//     // by the function

//     if(quadsolve(a, b, c, s1, s2)){
//         std::cout << "the solutions are:" << std::endl;
//         std::cout << s1 << std::endl;
//         std::cout << s2 << std::endl;
//     }
//     else{
//         std::cout << "there are no real solutions" << std::endl;
//     }

// }

bool leap_year(int year){
    bool ly;

    if (year%4==0){
        if (year%100==0){
            if (year%400==0){
                ly = true;
            } else{
                ly = false;
            }
        } else {
            ly = true;
        }
    } else {
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;
    if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12){
        if (d2 == 32){
            d2 = 1;
            m2 = m2 + 1;
            if (m2 == 13){
                m2 = 1;
                y2++;
            }
        }
    } else if (m1 == 2){
        if(leap_year(y1)){
            if (d2 == 30){
                d2 = 1;
                m2 = m2 + 1;
                if (m2 == 13){
                    m2 = 1;
                    y2++;
                }
            }
        } else{
            if (d2 == 29){
                d2 = 1;
                m2 = m2 + 1;
                if (m2 == 13){
                    m2 = 1;
                    y2++;
                }
            }
        }
    } else {
        if (d2 == 31){
            d2 = 1;
            m2 = m2 + 1;
            if (m2 == 13){
                m2 = 1;
                y2++;
            }
        }
    }
}

void perimeter_area(int a, int b, int& perimeter, int& area){
    perimeter = 2*(a+b);
    area = a*b;
}

void int_division(int a, int b, int& result, int& remainder){
    result = a/b;
    remainder = a%b;
}

int main(){
    int one, two, three, a, b, area, perimeter, result, remainder;
    std::cin >> one >> two >> three;
    std::cin >> a >> b;
    int_division(a, b, result, remainder);
    std::cout << a << "/" << b << " = " << result << " + " << remainder << std::endl;
    perimeter_area(a, b, perimeter, area);
    std::cout << "for a rectangle sides: " << a << " and " << b << " its perimeter is: " << perimeter << " while its area is: " << area << std::endl;
    next_date(one, two, three, one, two, three);
    std::cout << one << "/" << two << "/" << three;
}
