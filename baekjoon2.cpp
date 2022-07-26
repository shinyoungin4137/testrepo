#include <iostream>
using namespace std;
int main() {
	long long n,l,tmp;
	cin >> n >> l;
	/*N=(x+1)+(x+2)+...+(x+L)
	*  =xL+{(L+1)L}/2
	* N-{(L+1)L}/2=xL
	* N이 L로 나누어 떨어지면 가능
	*/
	for (int i = l; i <= 100; i++) {
		tmp = n - ((i + 1)*i) / 2;
		if (tmp % i == 0) {
			long long x = tmp / i;
			if (x >= -1) {
				for (int j = 1; j <= l; j++)
					cout << x + j << " ";
				return 0;
			}
		}
	}
	cout << "-1\n";
	return 0;
}
