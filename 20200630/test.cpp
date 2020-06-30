#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	size_t num;
	cin >> num;
	v.reserve(num);
	for (size_t i = 0; i < num; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	size_t i = 0;
	int count = 0;
	while (i < num) {
		if (v[i] > v[i + 1]) {
			while (v[i] >= v[i + 1]) {
				i++;
			}
			count++;
			++i;
		}
		else if (v[i] < v[i + 1]) {
			while (v[i] <= v[i + 1]) {
				i++;
			}
			count++;
			++i;
		}
		else
			++i;
	}
	cout << count << endl;
	return 0;
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> v;
	string str;
	while (cin >> str) {
		v.push_back(str);
	}
	for (int i = v.size() - 1; i >= 0; --i) {
		if (i == 0) {
			cout << v[i] << endl;
		}
		else
			cout << v[i] << " ";
	}
	return 0;
}