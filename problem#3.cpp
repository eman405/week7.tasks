/*Homework 3: Array maximum
● int arr_max(int arr[], int len);
● Write a function that computes array maximum
● Input 1, 8, 2, 10, 3 ⇒ 10*/
#include <iostream>
using namespace std;
int arr_max(int arr[], int len, int maxi) {
    if (arr[len - 1] > maxi) {
        maxi = arr[len - 1];
    }
    len--;
    if (len == 0) {
        return maxi;
    }
    return arr_max(arr, len, maxi);
}
int main() {
    int len, num;
    cin >> len;
    int* arr = new int[len];
    for (int i = 0; i < len; ++i) {
        cin >> num;
        arr[i] = num;
    }
    int maxi = arr[0];
    int max = arr_max(arr, len, maxi);
    cout << max;
}