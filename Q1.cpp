/*Name - KUMAR HARSH
Roll - 2010990874
set No-5
Question*/
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int maximumSubarray(int arr<n>)
{
  int n = arr.size();
  int maxSum = INT_MIN;

  for (int i = 0; i <= n - 1; i++)
  {

    int currSum = 0;

    for (int j = i; j <= n - 1; j++)
    {
      currSum += arr[j];
      if (currSum > maxSum)
      {
        maxSum = currSum;
      }
    }
  }

  return maxSum;
}
int main()
{
  return 0;
}