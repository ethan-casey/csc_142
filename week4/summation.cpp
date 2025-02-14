#include <iostream>

int summation(int num){
	int sum = 0;
	for(int i =1; i <= num; i++){
	sum += i;
}
return sum;
}

int main(){
	int n;

	std::cout<<"Enter a positive integer: ";
	std::cin>>n;

	printf("The sum of 1 to %d is %d,\n", n, summation(n));
}
