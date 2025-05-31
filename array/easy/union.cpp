#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> arr1, vector<int> arr2)
{
    
    // Sort both arrays before finding union
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int i = 0;
    int j = 0;
    vector<int> unionn;
    int n = arr1.size();
    int m = arr2.size();
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionn.size() == 0 || unionn.back() != arr1[i])
                unionn.push_back(arr1[i]);
            i++;
        }
        else
        {
            if (unionn.size() == 0 || unionn.back() != arr2[j])
                unionn.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        if (unionn.back() != arr1[i])
            unionn.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        if (unionn.back() != arr2[j])
            unionn.push_back(arr2[j]);
        j++;
    }

    return unionn;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr1;
    vector<int> arr2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }

    vector<int> ans = findUnion(arr1, arr2);
    for (int i = 0; i <ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}