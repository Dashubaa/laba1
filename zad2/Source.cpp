#include <iostream>
using namespace std;
int main() {
	int n, sum = 0;
	bool truue = true;
	cin >> n;
	int page[10000];
	for (int i = 0; i < 7; i++) {
		cin >> page[i];
		sum += page[i];
		if (sum >= n && truue) {
			cout << i + 1;
			return 0;
		}
		else if (sum < n && i == 6) {
			for(int c = 0; c < n; c++){
				for (int j = 0; j < 7; j++) {
					sum += page[j];
					if (sum >= n && truue) {
						cout << j + 1;
						truue = false;
						return 0;
					}
				}
			}
		}
	}
	return 0;
}