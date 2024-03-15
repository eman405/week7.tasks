/* Homework 4: Array sum
● Int sum(int arr[], int len);
● Write a function that computes array sum
● Input 1, 8, 2, 10, 3 ⇒ 24
*/
#include <iostream>
using namespace std;
int arr_max(int arr[], int len,int sum) {
    sum += arr[len - 1];
    len--;
    if (len == 0) {
        return sum;
    }
    return arr_max(arr, len,sum);
}
int main() {
    int len, num;
    cin >> len;
    int* arr = new int[len];
    for (int i = 0; i < len; ++i) {
        cin >> num;
        arr[i] = num;
    }
    int sum = 0;
    int summ = arr_max(arr, len, sum);
    cout << summ;
}