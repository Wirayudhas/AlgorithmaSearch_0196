#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray Should have maksimum 1 and maximum 20 elements.\n\n";
	}
	cout << "\n-------------------------";
	cout << "Enter element array\n";
	cout << "---------------------------";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
void LinearSearch()
