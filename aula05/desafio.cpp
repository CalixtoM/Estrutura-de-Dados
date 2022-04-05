#include <cstdlib>
#include <iostream>

using namespace std;

int fibonacci(int n);

int main(int argc, char** argv) {
	int x;
	cin>>x;
	
	cout << fibonacci(x) << endl;
	
	cout << endl;
	
	for(int i=1; i<=x; i++)
	
		cout << fibonacci(i) << endl;
	
	return 0;

    system("PAUSE");
    return EXIT_SUCCESS;
}

int fibonacci(int n){
   
    if (n == 1) 
   		return 1;                   
    else if (n == 2)                                
        return 1;                 
    else  
        return fibonacci(n - 1) + fibonacci(n - 2);  
}