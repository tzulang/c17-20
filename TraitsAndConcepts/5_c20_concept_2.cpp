
#include <iostream>
#include <type_traits>
#include <concepts>

 
 template<typename T>
 concept pointer = requires(T t) {
 	*t;
 };


void print(const auto& t) {

	std::cout << t << "\n";
}


void print(const pointer auto& t) {

	std::cout << *t << "\n";
}


int main() {


	int i = 10;
	int& iref = i;
	int* iptr = &i;



	print(i);
	print(iref);
	print(iptr);

	void* v;
	print(v); 
}