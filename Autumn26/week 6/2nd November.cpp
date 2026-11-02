#include <iostream>
#include <string>
#include <vector>
#include <cmath>

void append_vector_left(std::vector<int>& digits, int num){
    std::vector<int> temp;
    temp.push_back(num);
    for (int i = 0; i < digits.size(); i++){
        temp.push_back(digits[i]);
    }
    digits = temp;
}

bool digits_in_base(int num, int base, std::vector<int>& digits){
    if (1 < base && base < 17){
        int remainder = num;
        std::vector<int> temp;
        while(num > 0){
            remainder = num % base;
            append_vector_left(digits, remainder);
            num = num/base;
        }
        return true;
    } else {
        return false;
    }
}

int digits_to_decimal(std::vector<int> digits, int base){
    int decimal = 0;
    for(int i = 0; i < digits.size(); i++){
        decimal += digits[i] * std::pow(base, digits.size() - (i + 1));
    }
    return decimal;
}

void print_digits_as_number(std::vector<int> digits){
    char op;
    for (int i = 0; i < digits.size(); i++){
        if (digits[i] < 10){
            std::cout << digits[i];
        } else{
            op = 'A';
            op += (digits[i] - 10);
            std::cout << op;
        }
    }
    std::cout << std::endl;
}

bool convert_base(std::vector<int> digits_in, int base_in, int base_out, std::vector<int>& digits_out){
    if (1 < base_in && base_in < 17 && 1 < base_out && base_out < 17){
        int decimal_temp = digits_to_decimal(digits_in, base_in);
        digits_in_base(decimal_temp, base_out, digits_out);
        return true;
    } else{
        return false;
    }
}

int main(){
    std::vector<int> digits_1, digits_2;
    int num, base_1, base_2;
    std::cin >> num >> base_1 >> base_2;
    digits_in_base(num, base_1, digits_1);
    
    std::cout << "base " << base_1 << ": ";
    print_digits_as_number(digits_1);
    // if (digits_in_base(num, base, digits)){
    //     print_digits_as_number(digits);

    //     int decimal = digits_to_decimal(digits, base);
    //     std::cout << decimal << std::endl;
    // }
    if (convert_base(digits_1, base_1, base_2, digits_2)){
        std::cout << "base " << base_2 << ": ";
        print_digits_as_number(digits_2);
    } else {
        std::cout << "invalid base" << std::endl;
    }

}