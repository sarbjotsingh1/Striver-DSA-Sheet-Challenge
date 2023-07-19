#include<bits/stdc++.h>
long long getTrappedWater(long long* arr, int n) {
    long long ans = 0;
    long long lmaxi = 0,rmaxi = 0 ,left = 0, right = n-1;

    while(left <= right){
        if(arr[left] < arr[right]){
            if(arr[left] > lmaxi){
                lmaxi = arr[left];
            }
            else{
                ans += lmaxi - arr[left];
            }
            left++;
        }
        else{
            if(arr[right] > rmaxi){
                rmaxi = arr[right];
            }
            else{
                ans += rmaxi - arr[right];
            }
            right--;
        }
    }
    

    return ans;
}
