
#include <iostream>
#include <type_traits>

template <typename T>
void print(T const& t) {

	if constexpr (std::is_pointer_v<T> == true) {
		std::cout << *t << "\n";
	}
	else {
		std::cout << t << "\n";
	}
}


int main() {


	int i = 10;
	int& iref = i;
	int* iptr = &i;


	print(i);
	print(iref);
	print(iptr);


}