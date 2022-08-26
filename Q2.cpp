/*Name - KUMAR HARSH
Roll - 2010990874
set No-1
Question N0-*/

#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> findSubArrays(int arr[], int n)
{

  unordered_map<int, vector<int>> map;

  vector<pair<int, int>> out;

  int sum = 0;

  for (int i = 0; i < n; i++)
  {

    sum += arr[i];
    if (sum == 0)
      out.push_back(make_pair(0, i));
    if (map.find(sum) != map.end())
    {

      vector<int> vc = map[sum];
      for (auto it = vc.begin(); it != vc.end(); it++)
        out.push_back(make_pair(*it + 1, i));
    }

    map[sum].push_back(i);
  }

  return out;
}

void print(vector<pair<int, int>> out)
{
  for (auto it = out.begin(); it != out.end(); it++)
    cout << "Subarray found from Index " << it->first << " to " << it->second << endl;
}

int main()
{
  int arr[];
  cin >> n;
  int n = sizeof(arr) / sizeof(arr[0]);

  vector<pair<int, int>> out = findSubArrays(arr, n);

  if (out.size() == 0)
    cout << "No subarray exists";
  else
    print(out);

  return 0;
}
