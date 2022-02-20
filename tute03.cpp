/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>

int main(void){
	
	int no;
	int face;
	
	std :: cout<<"Enter the number : ";
	std:: cin >> no;
	
	face =1;
	for(int r=no;r>=1;r--){
		
		face= face*r;
		
	}
	
 std :: cout << "Factorial of " << no;
 std :: cout << " is " << face;
 
 return 0;
}
