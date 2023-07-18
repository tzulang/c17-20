#include <iostream>
using namespace std;
 
 
template<typename... Args>
auto c17Sum(Args... args)
{
    return (args + ... + 0);
}

int main() {

    return c17Sum(1, 2, 3, 4);

}
 