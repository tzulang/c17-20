#include <stdarg.h>


int cSum(int num, ...) 
// num - number of variables
{
    va_list valist; //Type to hold information about variable arguments 
    va_start(valist, num); // Initialize a variable argument list with 'num' variables
    
    int s = 0;
    for (int i = 0; i < num; i++)
        s += va_arg(valist, int); //Retrieve next argument with the specified casting
 
    va_end(valist); //End using variable argument list 
 
    return s;
}

int main() {

    return cSum(1, 2, 3, 4);

}
 