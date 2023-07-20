#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n){
	set<int> nums;
	int sumNums = 0;
	int ans2;
	for(int i = 0;i<n;i++){
		if(nums.count(arr[i]) == 0)
			sumNums += arr[i];
		else
			ans2 = arr[i];
		nums.insert(arr[i]);
	}
	int sum = (n * (n + 1)) / 2;
	int ans1 = sum - sumNums;
	return {ans1,ans2};


}
