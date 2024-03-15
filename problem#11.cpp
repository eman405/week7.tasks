/*
Homework 11: Prefix Sum
● Write a function that sums only the first N elements in an array.
● Define its signature
● Input [1, 3, 4, 6, 7], 3 ⇒ 8 (1+3+4)
*/
#include <iostream>
using namespace std;
int suffix_sum(int arr[], int len, int sum = 0, int loop = 0)
{
	if (loop < 3) {
		sum += arr[loop];
		len++;
		loop++;
	}
	else {
		return sum;
	}
	return suffix_sum(arr, len, sum, loop);
}
int main()
{
	int len;
	cin >> len;
	int* arr = new int[len];
	for (int i = 0; i < len; ++i) {
		cin >> arr[i];
	}

	int sum = suffix_sum(arr, len);
	cout << sum;
}
