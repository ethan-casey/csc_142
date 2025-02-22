#include <string>

	std::string sayHello(){ 
         return "Hello"; 
}
	
	int main(){
std::string someText = "Hello World";
int value = 25;

printf( "%-15.10s  |  %5d  |  %8s", someText.c_str(), value, sayHello().c_str() ); 
}
