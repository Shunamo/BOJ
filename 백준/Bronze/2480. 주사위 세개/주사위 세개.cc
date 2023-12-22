#include <iostream>
using namespace std;

int main(void) {

	int a, b, c, prize;
	prize = 0;

	cin >> a >> b >> c;
	if (a == b && b==c) prize = 10000 + a * 1000;
	else if (a == b || a == c) prize = 1000 + a * 100;
	else if (b == c)prize = 1000 + b * 100;
	else {
		int max;
		if (a > b && a > c) max = a;
		else if (b > a && b > c) max = b;
		else max = c;
		prize = max * 100;
	}

	cout << prize;

	return 0;
}