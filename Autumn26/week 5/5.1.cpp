#include <iostream>
#include <vector>
// // this header is needed to use vectors

// int main(){
//     std::vector<int> v; 
//     // we declare a vector
//     // the <> contain the type
//     // for each cell of the vector
//     // initially the vector is empty:
//     // v: []

//     // we can then start adding elements to the vector
//     // this can be done using function push_back:

//     v.push_back(10);

//     // so now the vector contains one element:
//     // v: [10]

//     // let's add another element:

//     v.push_back(20);

//     // now the vector contains two elements:
//     // v: [10, 20]

//     // a key intuition about vectors is that the elements can be *indexed*
//     // the first element has index 0, and so on 
//     // up to (size of the vector - 1)
//     // v:
//     // value: |10|20|
//     // index: | 0| 1|

//     // we can index using square brackets, for example
//     // if we want to print the first element we do the following:

//     std::cout << v[0] << std::endl;
//     // this will print 10

//     // if we want to print the second element we do the following:

//     std::cout << v[1] << std::endl;
//     // this will print 20

//     // we can also use indexing to overwrite the value of cells:

//     v[0] = 15;

//     // v:
//     // value: |15|20|
//     // index: | 0| 1|

//     std::cout << v[0] << std::endl;
//     // this will print 15

//     // however we can't use indexing
//     // to access or store values in cells that don't exist
//     // for example in this case writing:

//     // v[2] = 30;

//     // or

//     // std::cout << v[4] << std::endl;

//     // would be a mistake
//     // because there are no cells for indices 2 or 4 
//     // (confusingly enough the program may or may not crash)

//     // the vector grows using push_back as seen above

//     v.push_back(30);

//     // v:
//     // value: |15|20|30|
//     // index: | 0| 1| 2|

//     // we can always check how many cells there are
//     // by using function size():

//     std::cout << v.size() << std::endl;
//     // this will print 3

//     // we can't print the whole vector at once!
//     // the following line:
//     //std::cout << v << std::endl; 
//     // would not work!

//     /*
//     C:\vs code\Programming for Engineers\5.1.cpp:87:18:   
//                87 |     std::cout << v << std::endl;
//                   |                  ^
//           • required for the satisfaction of '__derived_from_ios_base<_Os>' [with _Os = std::basic_ostream<char, std::char_traits<char> >&]
//             C:/msys64/ucrt64/include/c++/16.2.0/bits/ostream.h:803:13:   
//               803 |     concept __derived_from_ios_base = is_class_v<_Tp>
//                   |             ^~~~~~~~~~~~~~~~~~~~~~~
//           • the expression 'is_class_v<_Tp> [with _Tp = std::basic_ostream<char, std::char_traits<char> >&]' evaluated to 'false'
//             C:/msys64/ucrt64/include/c++/16.2.0/bits/ostream.h:803:39:
//               803 |     concept __derived_from_ios_base = is_class_v<_Tp>
//                   |                                       ^~~~~~~~~~~~~~~
//           • 'std::basic_ostream<char>&' is not a class

//     Build finished with error(s).
//     */

// }

// int main() {
//     std::vector<int> nums;
//     int num;
//     for (int i = 0; i < 3; i++){
//         std::cin >> num;
//         nums.push_back(num);
//     }
//     num = nums[0]*(nums[1]+nums[2]);
//     std::cout << num;
// }

// #include <iostream>
// #include <vector>

// int main(){
//     std::vector<int> sequence;
//     int tmp = 1;
//     // initialised to anything other than 0 to enter the loop the first time

//     std::cout << "please enter a sequence terminated by 0" << std::endl;
//     while(tmp != 0){ // while the number in input is not 0...
//         std::cin >> tmp; // we read a number
//         sequence.push_back(tmp); // we store the number in the vector
//     }

//     std::cout << "you entered the following sequence" << std::endl;

//     // in order to print the vector we need 
//     // to print it one element at a time
//     // so we need to index it

//     // i is the variable we use in this loop for the indexing of the vector
//     // it starts at 0 and increases by 1 at each iteration
//     // when the index reaches the size of the vector we leave the loop
//     // valid indices are 0 to (sequenze.size() - 1)

//     for(int i = 0; i < sequence.size(); i++){

//         std::cout << sequence[i] << std::endl;
//     }

//     std::cout << "in reverse order:" << std::endl;

//     // this time the first value for i is 
//     // the index of the last element 
//     // which is at index (sequence.size() - 1)
//     // i decreases by i at each iteration
//     // when it reaches value 0 we need to stay in the loop
//     // because 0 is still a valid index

//     for(int i = sequence.size() - 1; i >= 0; i--){
//         std::cout << sequence[i] << std::endl;
//     }
// }

// #include <iostream>
// #include <vector>

// int main(){
//     std::vector<int> v; 

//     v.push_back(10);
//     v.push_back(20);

//     std::cout << v[0] << std::endl;
//     // this will print 10

//     std::cout << v[1] << std::endl;
//     // this will print 20

//     v[0] = 15;

//     std::cout << v[0] << std::endl;
//     // this will print 15

//     std::cout << v[4] << std::endl; 
//     // undefined behaviour

//     v[2] = 30; 
//     // undefined behaviour

//     std::cout << v[2] << std::endl;
//     // undefined behaviour

// }

// #include <iostream>
// #include <vector>

// int main(){
//     std::vector<int> v; 

//     v.push_back(10);
//     v.push_back(20);

//     std::cout << v.at(0) << std::endl;
//     // this will print 10

//     std::cout << v.at(1) << std::endl;
//     // this will print 20

//     v.at(1) = 15;

//     std::cout << v.at(1) << std::endl;
//     // this will print 15

//     v.at(2) = 2;
//     // this will throw an exception

//     std::cout << v.at(2) << std::endl;
//     // this will not be executed

// }

int main(){
    std::vector<int> nums, pos;
    int n, t, count = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> t;
        nums.push_back(t);
    }
    // std::cin >> t;
    // for(int i = 0; i < n; i++){
    //     if (nums[i] < t){
    //         std::cout << nums[i] << std::endl;
    //     }
    // }
    std::cin >> t;
    for(int i = 0; i < nums.size(); i++){
        if (nums[i] == t){
            count++;
            pos.push_back(i);
        }
    }
    if (count > 0){
        std::cout << t << " occurs " << count << " times at indices: ";
        for (int i = 0; i < pos.size(); i++){
            std::cout << pos[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "no occurances of " << t << std::endl;
    }
}