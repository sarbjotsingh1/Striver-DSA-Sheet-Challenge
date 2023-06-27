//https://www.codingninjas.com/studio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge&leftPanelTab=0
#include <bits/stdc++.h>  
int findMajorityElement(int arr[], int n) { 
	map<int,int> mpp;
	for(int i=0;i<n;i++) 
		mpp[arr[i]]++;
	for(auto it:mpp) {  
		if(it.second>n/2)
			return it.first; 
	} 
	return -1; 
}
