#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	sort(arr.begin(),arr.end());
	int j = 0,k =0;
	set<vector<int>> s;
	for(int i = 0;i<n;i++){
		j = i + 1;
		int k = arr.size() - 1;
		while(j<k){
			int sum = arr[i] + arr[j] + arr[k];
			// cout << "sum is "<< sum << " " << endl;
			if(sum == K){
				s.insert({arr[i] , arr[j], arr[k]});
				j++;
				k--;
			}
			else if(sum<K){
				j++;
			}
			else{
				k--;
			}
		}
	}
	vector<vector<int>> ans;
	for(auto it : s){
		ans.push_back(it);
	}
	return {ans};

}
