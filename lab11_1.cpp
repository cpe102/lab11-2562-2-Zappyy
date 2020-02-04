#include<iostream>

using namespace std;

long long int fibonacci(long long int x);

int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	
	return 0;
}


//Write definition of function fibonacci() here

long long int fibonacci(long long int x){
  if(x==0) return 0;
  else if (x==1) return 1;
  else if (x>1) return x =(fibonacci(x-1)+fibonacci(x-2));
}

