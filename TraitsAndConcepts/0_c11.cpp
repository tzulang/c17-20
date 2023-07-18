
#include <iostream>


template <typename T> 
void print(T const& t) {

	std::cout << t << "\n";
} 

// template <typename T>
// void print(T* t) {

// 	std::cout << *t << "\n";
// }



int main() {


	int i = 10;
	int& iref = i;
	int* iptr = &i;
 

	print(i);
	print(iref);
	print(iptr);


}