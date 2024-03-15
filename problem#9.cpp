/*  Homework 9: Right-Max
● Given array, change each element at position i to be the maximum of 
numbers from index i to end of array
● E.g. input 1 3 5 7 4 2 ⇒ [7, 7, 7, 7, 4, 2]
● Void left_max(int arr[], int len, int start_position = 0);  */
#include <iostream>
using namespace std;
void left_max(int arr[], int len, int start_position = 0) {
	int max = arr[0];
	for (int i = 0; i < len; ++i) {
		if (arr[i] >= max) {
			max = arr[i];
			start_position = i;
		}
	}
	for (int i = 0; i <len; ++i) {
		if (i <= start_position) {
			arr[i] = max;
			cout << arr[i] << " ";
		}
		else {
			cout << arr[i] << " ";
		}
	}
}
int main()
{
	int len;
	cin >> len;
	int* arr = new int[len];
	for (int i = 0; i < len; ++i) {
		cin >> arr[i];
	}
	left_max(arr, len);
}
