#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int minSwaps(vector<int>& arr,int n) 
{
    int onesCount = 0;
    
    for (int i = 0; i < n; i++) 
    {
        onesCount += arr[i];
    }

    int currentOnes = 0;
    int minSwaps = onesCount; 

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            currentOnes++;
        }
        int currentZeros = i - currentOnes + 1;
        int swapsNeeded = onesCount - currentOnes + currentZeros;
        minSwaps = min(minSwaps, swapsNeeded);
    }
    return minSwaps;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    else
    {
      int ans = minSwaps(arr,n);
      cout << ans <<endl;
    }

    return 0;
}
