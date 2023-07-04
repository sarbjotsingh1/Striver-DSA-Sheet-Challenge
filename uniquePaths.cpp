//unique Paths
#include <bits/stdc++.h> 

int uniquePaths(int m, int n) {
	// Write your code here.
	if(m == 1 || n== 1)
		return 1;
	
	int left = uniquePaths(m-1,n);
	int up = uniquePaths(m,n-1);

	return left + up;

}
