#include <bits/stdc++.h>
//BRUTE FORCE METHOD
using namespace std;

int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size(); //size of the array.
    int XOR = 0;
    // XOR all the elements:
    for (int i = 0; i < n; i++) {
        XOR = XOR ^ arr[i];
    }
    return XOR;
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 2, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(arr);
    cout << "The single element is: " << ans << "\n";
    return 0;
}
