/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

# include<iostream>

long fractor(int no);
long ncr (int n,int r,int c);

int main(){
	
	int n;
	int r ;
	int facn;
	int facr;
	int facc;
	int total;
	
	std::cout <<"Enter a value for n :";
	std ::cin>> n;
	
	std::cout <<"Enter a value for r :";
	std :: cin >> r;
	
	facn = fractor(n);
	facr = fractor(r);
	facc = fractor(n-r);
	
	
	total = ncr(facn,facr,facc);
	
	std ::cout << "nCr is " <<total ;
}

long fractor(int no){
	int count=1;
	
	for(int i=1;i<=no;i++){
		
		count = count*i;
		
	}
	
	return count;
}

long ncr (int n,int r,int c){
	
	return n/(r*(c));
	
}

