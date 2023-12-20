#include <iostream>
using namespace std;
int main() {
	int a, b;

	cout << fixed;
	cout.precision(9);

	cin >> a >> b;
	cout << a/(double)b << endl;

	return 0;
}