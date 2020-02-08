#include "Linkedlist.h"

using namespace std;

int main()
{
	Linkedlist list;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		list.Add(tmp);
	}
	list.Print();
	cout << "\n";
	cout << list.Size();
	return 0;
}