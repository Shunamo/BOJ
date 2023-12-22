#include <iostream>
using namespace std;

int main(void) {

	int h, m, c, extra_hour;
	cin >> h >> m >> c;

	
	extra_hour= (m + c) / 60;

	m = m + c - extra_hour * 60;

	h += extra_hour;
	while (h >23)
			h -= 24;
		
	
	
	cout << h <<' '<< m;

	return 0;
}