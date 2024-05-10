#include <iostream>
using namespace std;

int longestSubarrayWithSumK(int arr[], int n, int k) {
    int maxLength = 0;
    int left = 0, right = 0, sum = 0;

    while (right < n) {
        sum += arr[right];

        if (sum < k) {
            right++;
        } else if (sum == k) {
            maxLength = max(maxLength, right - left + 1);
            right++;
        } else { // sum > k
            while (sum > k) {
                sum -= arr[left];
                left++;
            }
            if (sum == k)
                maxLength = max(maxLength, right - left + 1);
            right++;
        }
    }

    return maxLength;
}

int main() {
    int N = 3;
    int k = 5;
    int array1[] = {2, 3, 5};
    cout << "Result: " << longestSubarrayWithSumK(array1, N, k) << endl;

    N = 3;
    k = 1;
    int array2[] = {-1, 1, 1};
    cout << "Result: " << longestSubarrayWithSumK(array2, N, k) << endl;

    return 0;
}
