#include <bits/stdc++.h> 

void solve(int i ,vector<int>& v,vector<vector<int>>& ans,vector<int>& ds){
    if(i == v.size()){
        ans.push_back(ds);
        return;
    }

    //dont pick
    solve(i+1,v,ans,ds);

    //pick
    ds.push_back(v[i]);
    solve(i+1,v,ans,ds);
    ds.pop_back();
}


vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<int> ds;
    vector<vector<int>> ans;
    solve(0,v,ans,ds);
    return ans;
}
