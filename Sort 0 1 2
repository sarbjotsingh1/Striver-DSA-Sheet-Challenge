https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695

#include <bits/stdc++.h> 
void swap(int *arr,int i,int j){
   int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void sort012(int *arr, int n)
{
   //   Write your code here
   int i = 0, j = 0, k = n-1;
    while (i <= k) {
      if (arr[i] == 0) {
        swap(arr, i, j);
        i++;
        j++;
      } else if (arr[i] == 1) {
        i++;
      } else {
        swap(arr, i, k);
        k--;
      }
    }
}
