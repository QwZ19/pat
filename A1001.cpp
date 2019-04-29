#include <iostream>
using namespace std;
#include <stack>


int main() {
	int a, b;
	cin >> a >> b;
	
	int res = a + b;

	if (res < 0) {
		printf("-");
		res *= -1;
	}

	//ÀûÓÃÕ»ÄæÐòÊä³ö
	stack<char> s;
	int n = 0;
	if (res == 0)s.push('0');
	while (res > 0) {
		s.push(res % 10 + '0');
		res /= 10;
		n++;
		if (n % 3 == 0 && res > 0)s.push(',');
	}

	while (!s.empty()) {
		printf("%c", s.top());
		s.pop();
	}

	system("pause");
	return 0;
}

