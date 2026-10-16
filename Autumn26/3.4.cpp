#include <iostream>
#include <string>
#include <cmath>

// int main(){int n, curmax, curmin
// ;   std::cout << "please enter number:" << std::endl
// ;   std::cin >> n
// ;   curmax = n
// ;   curmin = n
// ;   std::cout << "maximum so far: " << curmax << std::endl
// ;   std::cout << "minimum so far: " << curmin << std::endl
// ;   while(n != 0){std::cout << "please enter number:" << std::endl
// ;       std::cin >> n
// ;       if(n > curmax){curmax = n
// ;} else if (n < curmin){curmin = n
// ;}std::cout << "maximum so far: " << curmax << std::endl
// ;std::cout << "minimum so far: " << curmin << std::endl;}}

// int main(){int n, max, steps=0, collatz
// ;   std::cin >> n;
// ;   collatz = n
// ;   max = n
// ;   while (collatz != 1){if (collatz % 2 == 1){collatz = collatz * 3 + 1
// ;} else{collatz = collatz/2
// ;}if(collatz > max){max = collatz
// ;}steps++
// ;std::cout << collatz << std::endl
// ;}std::cout << "it took " << steps << " steps and the largest number in the sequence was " << max << std::endl
// ;}

// int main(){int target, guess, min, max
// ;   std::string got_it
// ;   std::cout << "what is the range you want: "
// ;   std::cin >> min >> max
// ;   while(got_it != "yes"){guess = (max+min)/2
// ;   std::cout << "is your number " << guess << "?" << std::endl << "type 'yes' if it is, if not type 'higher' or 'lower': "
// ;   std::cin >> got_it
// ;   if (got_it == "higher"){min = guess+1
// ;}  else{max = guess
// ;}}}

// first version, not the most efficient one

int main(){
    int n;
    bool found_factor = false;
    // initially we haven't found any factors...

    std::cout << "please enter an integer greater than 1" << std::endl;
    // we assume that the user enters an integer greater than 1
    std::cin >> n;
    // cf like candidate factor
    // (begins at 2, smallest candidate factor)

    for(int cf = 2; cf <= sqrt(n); cf++){ //just sqare root of n?

        if( (n % cf) == 0){ // n can be divided by cf...

            found_factor = true;
            //...it means we have found a factor!
        }

    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}