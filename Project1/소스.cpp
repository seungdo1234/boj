#include <iostream>

using namespace std;

int main() {
	int a;
	int count = 1, tmp = 1;
	int layer[2] = { 1, }, wp = 0;

	cin >> a;

	for (int i = 0; i < a; i++) {
		if (count == wp) {
			count += 1;
			wp = 0;
			layer[0] += 1;
		}
		wp+=1;
	}
	layer[1] = layer[0]; 
	for (int i = 1; i < wp; i++) {
		layer[1] -= 1;
		tmp += 1;
	}
	if (layer[0] % 2 != 0) {
		cout << layer[1] << "/" << tmp << endl;
	}
	else {
		cout << tmp << "/" << layer[1] << endl;
	}
	return 0;
}