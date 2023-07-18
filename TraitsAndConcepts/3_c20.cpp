
#include <iostream>
 

void print(const auto & t) {

	std::cout << t << "\n";
} 


//we cant use auto const * because a ptr will be converted to a reference and the first version will be used
void print(auto * t) {

	std::cout << *t << "\n";
} 
 



int main() {


	int i = 10;
	int& iref = i;
	int* iptr = &i;
 

	print(i);
	print(iref);
	print(iptr);


}