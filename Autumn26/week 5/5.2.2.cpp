#include <iostream>
#include <vector>

// // maybe not the most efficient way:
// std::vector<int> from_1_to_n(int n){

//     std::vector<int> vout;

//     for(int i = 0; i < n; i++){
//         vout.push_back(i+1);
//     }

//     return vout;

// }

// int main(){
//     std::vector<int> v;

//     v = from_1_to_n(5);

//     for(int i = 0; i < v.size(); i++){
//         std::cout << v[i] << std::endl;
//     }

// }

// #include <iostream>
// #include <vector>


// void from_1_to_n(int n, std::vector<int>& vout){

//     for(int i = 0; i < n; i++){
//         vout.push_back(i+1);
//     }

// }

// int main(){
//     std::vector<int> v;

//     from_1_to_n(5, v);

//     for(int i = 0; i < v.size(); i++){
//         std::cout << v[i] << std::endl;
//     }

// }

// #include <iostream>
// #include <vector>


// void from_1_to_n(int n, std::vector<int>& vout){

//     for(int i = 0; i < n; i++){
//         vout.push_back(i+1);
//     }

// }

// int main(){
//     // this program will not work as expected...
//     std::vector<int> v;

//     for(int n = 3; n < 7; n++){
//         from_1_to_n(n, v);

//         std::cout << "printing vector:" << std::endl;
//         for(int i = 0; i < v.size(); i++){
//             std::cout << v[i] << std::endl;
//         }
//     }
// }

// #include <iostream>
// #include <vector>


// void from_1_to_n(int n, std::vector<int>& vout){

//     for(int i = 0; i < n; i++){
//         vout.push_back(i+1);
//     }

// }

// int main(){
//     std::vector<int> v;
//     for(int n = 3; n < 7; n++){

//         v.clear();
//         from_1_to_n(n, v);

//         std::cout << "printing vector:" << std::endl;
//         for(int i = 0; i < v.size(); i++){
//             std::cout << v[i] << std::endl;
//         }
//     }
// }


// std::vector<int> random_vector(int n){
//     std::vector<int> nums;
//     for (int i = 0; i < n; i++){
//         int num = std::rand() % 1000;
//         nums.push_back(num);
//         std::cout << nums[i] << " ";
//     }
//     std::cout << std::endl;
//     return nums;
// }

// void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
//     for (int i = 0; i < vin1.size(); i++){
//         vout.push_back(vin1[i]);
//     }
//     for (int i = 0; i < vin2.size(); i++){
//         vout.push_back(vin2[i]);
//     }
// }

// int main(){
//     srand(time(NULL));
//     std::vector<int> v1, v2, vout;
//     v1 = random_vector(5);
//     v2 = random_vector(5);
//     append_vectors(v1, v2, vout);
//     for(int i = 0; i < vout.size(); i++){
//         std::cout << vout[i] << " " << std::endl;
//     }
// }

std::vector<double> random_vector(int n){
    std::vector<double> nums;
    for (int i = 0; i < n; i++){
        double num = std::rand() % 100000;
        num = num / 100.0;
        nums.push_back(num);
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    return nums;
}

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main() {
    srand(time(NULL));
    std::vector<double> v1, v2;
    int num;
    v1 = random_vector(20);
    std::cin >> num;
    filter_v(v1, num, v2);
    for (int i = 0; i < v2.size(); i++){
        std::cout << v2[i] << " ";
    }
}