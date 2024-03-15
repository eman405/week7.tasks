/*
Homework 12: Is Palindrome
● Implement a function that decides if array is palindrome or not
● Define its signature
*/
#include <iostream>
using namespace std;
bool is_palindrome(int arr[], int len,int i=0) 
{
	bool is = false;
	if (arr[i] == arr[len - i - 1]) {
		is = true;
		i++;
		if (i == len / 2) {
			return is;
		}
	}
	else {
		return is;
	}
	return is_palindrome(arr, len, i);
}
int main()
{
	int len;
	cin >> len;
	int* arr = new int[len];
	for (int i = 0; i < len; ++i) {
		cin >> arr[i];
	}
	bool ispalindrome = is_palindrome(arr, len);
	if (ispalindrome) {
		cout << "IS Palindrome";
	}
	else {
		cout << "NOT Palindrome"; 
	}
}
