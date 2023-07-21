//https://www.codingninjas.com/studio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge&leftPanelTab=0
#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr){
    unordered_map<int,int> freq;
    int n = arr.size();
    vector<int> ans;
    for(int i = 0;i<n;i++){
        freq[arr[i]]++;
    }
    for(auto it : freq){
        if(it.second > n/3)
            ans.push_back(it.first);
    }
    return ans;
}
