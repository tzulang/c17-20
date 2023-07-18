#include <iostream>
 
auto c11Sum() // default overload
{
    return 0;
}
 
template<typename T1, typename... T>
auto c11Sum(T1 s, T... ts)
{
    return s + c11Sum(ts...);
}

int main() {

    return c11Sum(1, 2, 3, 4);

    
}