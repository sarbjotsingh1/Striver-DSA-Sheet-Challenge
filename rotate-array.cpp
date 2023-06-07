//https://www.codingninjas.com/codestudio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i = m-1;
	int j = n-1;
	int curr = m+n-1;
	

	while(curr > i){
		if(arr1[i] > arr2[j])
			arr1[curr--] = arr1[i--];
		else
			arr1[curr--] = arr2[j--];
	}
	return arr1;
}
