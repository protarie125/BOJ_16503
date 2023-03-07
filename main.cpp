#include <iostream>

using namespace std;

int run(int x, char op, int y) {
	if ('+' == op) {
		return x + y;
	}
	else if ('-' == op) {
		return x - y;
	}
	else if ('*' == op) {
		return x * y;
	}
	else {
		return x / y;
	}
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	char o, p;
	cin >> a >> o >> b >> p >> c;

	const auto& ret1 = run(run(a, o, b), p, c);
	const auto& ret2 = run(a, o, run(b, p, c));

	auto mx = ret1 < ret2 ? ret2 : ret1;
	auto mn = ret1 + ret2 - mx;

	cout << mn << '\n' << mx;

	return 0;
}