#include<bits/stdc++.h>
void solve(int idx,int sum,vector<int>& num, vector<int>& ans){
	if(idx == num.size()){
		ans.push_back(sum);
		return;}
	
	solve(idx+1,sum+num[idx],num,ans);
	solve(idx+1,sum,num,ans);
}
vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	vector<int> ans;	
	solve(0,0,num,ans);
	sort(ans.begin(),ans.end());
	return ans;
}
