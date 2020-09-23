#include<iostream>;
using namespace std;
int main() {
	float a = 0; float b, c, d; int arr[4]; int i = 0; int max; int k=0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	arr[0] = a; arr[1] = b; arr[2] = c; arr[3] = d;
	max = arr[0];
	if (a == c && b == d) { cout << 0; }
	else {

		if (a * a + b * b + c * c > ((d * d) / 2)) {
			cout << 1;


			/*for (int i = 0; i < 4; i++) {
				if (max < arr[i]) {
					max = arr[i];
					k = i;
				}
			}arr[k] = 0;
			cout << k+1;
			k = 0;
			max = 0;
			for (int i = 0; i < 4; i++) {
				if (max < arr[i]) {
					max = arr[i];
					k = i;
				}

			}
			cout << k+1;*/
		}
	}
	return 0;
}