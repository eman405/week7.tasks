/*
Homework 10: Suffix Sum
● Write a function that sums only the last N elements in an array.
● Define its signature
● Input [1, 3, 4, 6, 7], 3 ⇒ 17 (4+6+7)
*/
#include <iostream>
using namespace std;
int suffix_sum(int arr[], int len, int sum = 0,int loop=0)
{
	if (loop < 3) {
		sum += arr[len - 1];
		len--;
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
