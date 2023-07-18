// 3 way comparison   
// or spaceship operator <=>
// (x <=> y) < 0 is true if x < y
// (x <=> y) > 0 is true if x > y
// (x <=> y) == 0 is true if x and y are equal/equivalent.

#include <iostream>
#include <compare>


int main() {

#if 0
    int x = 2;
    int y = 2;

#else 
    struct S {
        int value;

        auto operator <=>(const S &other) const = default; 
        // {
        //     return this->value - other.value;
        // }
    };

    S x{1};
    S y{0};

#endif
    auto compareRes = (x <=> y);
    std::cout << "x is ";
    if ( compareRes > 0 )
         std::cout << "greater than" ;
    else if ( compareRes < 0) 
        std::cout << "smaller than";
    else 
        std::cout << "equal to";
    std::cout << " y \n";

    std::cout << "x < y  = " <<((x < y)  ? "true" : "false")  << '\n';
    std::cout << "x > y  = " <<((x > y)  ? "true" : "false")  << '\n';
    std::cout << "x == y = " <<((x == y) ? "true" : "false")  << '\n';  
    std::cout << "x != y = " <<((x != y) ? "true" : "false")  << '\n';  
}