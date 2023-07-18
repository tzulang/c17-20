#include <iostream>
using namespace std;
 
 // using auto in parameters in c++ 17 will resault in error or 
 // warning like:
 //     use of 'auto' in parameter declaration only available with '-std=c++20' or '-fconcepts'


//pack1 op (… op (packN-1 op packN))
auto right_fold(auto... args)
{
    return (args / ... / 1); // optional init for empty calls
}


// ((pack1 op pack2) op …) op packN
// or ((init op pack1) op …) op packN   - for the init version
template<typename ...T>
auto left_fold(T... args)
{
    // return ( 1 / ... /args);  - for the init version
    return ( ... /args);
}

int main() {

    std::cout<< "right_fold() = " << right_fold() << '\n';   
    std::cout<< "right_fold(1.0, 2.0, 3.0, 4.0) = 1/( 2/( 3/4 )) =" << right_fold(1.0, 2.0, 3.0, 4.0) << '\n';   
    std::cout<< '\n';
    std::cout<< "left_fold(1.0, 2.0, 3.0, 4.0) = ((1 / 2) / 3) / 4 =" << left_fold(1.0, 2.0, 3.0, 4.0) << '\n';   
    
}
 