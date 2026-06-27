#include <iostream>
using namespace std;
long long factorial(int n) {
	long long fact = 1;
	for (int i = 1;i <= n;i++) {
		fact *= i;
	}
	cout << "The factorial for " << "(" << n << ")" << " = " << fact << endl;
	return fact;
}	
int main() {
	int n;
	cout << "Enter a num to calculate the factorial : \n";
	cin >> n;
	factorial(n);
	return 0;
}
