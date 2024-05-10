#include <bits/stdc++.h>
using namespace std;



int getSingleElement(vector<int> &arr){
    int n = arr.size();
    int xor_val = 0;
    for(int i = 0; i < n; i++){
        xor_val = xor_val ^ arr[i];
    }
    return xor_val;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
