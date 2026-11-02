#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

// // maybe not the most efficient way:
// double sum_vector(std::vector<double> vin){

//     double sum = 0;

//     for(int i = 0; i < vin.size(); i++){
//         sum = sum + vin[i];
//     }

//     return sum;

// }

// int main(){
//     std::vector<double> v;
//     int len, num;
//     std::cin >> len;
//     for (int i = 0; i < len; i++){
//         std::cin >> num;
//         v.push_back(num);
//     }

//     std::cout << "the sum is: " << sum_vector(v) << std::endl;

// }

// #include <iostream>
// #include <vector>

// // note: const before std::vector<double>
// // and the & afterwards

// double sum_vector(const std::vector<double>& vin){

//     double sum = 0;
//     // vin.push_back(1);

//     for(int i = 0; i < vin.size(); i++){
//         sum = sum + vin[i];
//     }

//     return sum;

// }

// int main(){
//     std::vector<double> v;

//     v.push_back(3);
//     v.push_back(0.5);
//     v.push_back(-1);

//     std::cout << "the sum is: " << sum_vector(v) << std::endl;

// }

// #include <iostream>
// #include <vector>
// #include <cmath>

// double sum_vector(const std::vector<double>& vin){

//     double sum = 0;

//     for(int i = 0; i < vin.size(); i++){
//         sum = sum + vin[i];
//     }

//     return sum;

// }

// int main(){
//     std::vector<double> v{3, 0.5, -1};
//     // we can initialise vectors like this (no = needed)

//     double expected_sum = 2.5;
//     // we may think of writing:
//     // std::cout << (sum_vector(v) == 2.5) << std::endl;
//     // but we shouldn't compare non-integers using ==
//     // as the representation can be approximated

//     std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;
//     // the test will be passed if we see 0 or a very small number

//     v = {2, -1.1, 7, -1.5};
//     // we can also assign values like this

//     expected_sum = 6.4;

//     std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;

// }

double random(){
    double num = std::rand() % 10000;
    num = num/100.0;
    return num;
}

int min_vector_element(const std::vector<double>& vin){
    int min_index = 0;
    if (vin.size() == 0){
        return -1;
    } else{
        for(int i = 1; i < vin.size(); i++){
            if (vin[i] < vin[min_index]){
                min_index = i;
            }
        }
    }
    return min_index;
}

int search_vector(double n, const std::vector<double>& vin){
    for(int i = 0; i < vin.size(); i++){
        if (vin[i] == n){
            return i;
        }
    }
    return -1;
}
int main(){
    std::vector<double> nums;

    for(int i = 0; i < 100; i++){
        nums.push_back(random());
        std::cout << i << " " << nums[i] << std::endl;
    }
    int min = min_vector_element(nums);
    std::cout << min << " " << nums[min] << std::endl;
    double num;
    std::cin >> num;
    std::cout << search_vector(num, nums) << std::endl;
}
