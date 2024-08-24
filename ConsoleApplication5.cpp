#include <iostream>
using namespace std;
int ans = 0;
void jump(int n, int pos) {
	if (pos > n) {
		return;
	}
	else if (pos == n) {
		ans++;
		return;
	}
	else {
		jump(n, pos + 1);
		jump(n, pos + 2);
		jump(n, pos + 3);
	}
}
int main() {
	int n, pos;
	cin >> n;
	pos = 0;
	jump(n, pos);
	cout << ans;
	return 0;
}