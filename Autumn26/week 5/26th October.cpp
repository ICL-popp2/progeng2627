#include <iostream>

int gcd(int a, int b){
    int r = a % b;
    while (r!=0){
        r = a % b;
        if (r==0){
            return b;
        } else{
            a = b;
            b = r;
        }
    }
    return b;
}

int phi(int n){
    int count = 0, check;
    for (int i = 1; i<n; i++){
        check = gcd(n, i);
        if (check == 1){
            count++;
        }
    }
    return count;
}

int totient_sum(int n, int& depth){
    int sum = 0;
    depth = 0;
    while (n > 1){
        n = phi(n);
        sum += n;
        depth++;
    }
    return sum;
}

int local_strongest_depth(int min, int max, int& depth_x_lower, int& depth_x, int& depth_x_higher){
    int depth_location = -1, strongest_depth;
    double strongest_depth_average = 0;
    totient_sum(min, depth_x_lower);
    totient_sum(min+2, depth_x_higher);
    min++;
    totient_sum(min, depth_x);
    for (min; min < max; min++){
        if (depth_x_lower < depth_x && depth_x_higher < depth_x){
            if (strongest_depth_average < (2 * depth_x - depth_x_lower - depth_x_higher)/2.0){
                strongest_depth = depth_x;
                strongest_depth_average = (2 * depth_x - depth_x_lower - depth_x_higher)/2.0;
                depth_location = min;
            }
        }
        depth_x_lower = depth_x;
        depth_x = depth_x_higher;
        totient_sum(min+2, depth_x_higher);
    }
    totient_sum(depth_location - 1, depth_x_lower);
    totient_sum(depth_location, depth_x);
    totient_sum(depth_location + 1, depth_x_higher);
    return depth_location;
}

int main(){
    int depth, a, b, c;
    std::cout << local_strongest_depth(14, 20, a, b, c) << std::endl;
    std::cout << a << " " << b << " " << c << std::endl;
}