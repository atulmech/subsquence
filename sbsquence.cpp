#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
void subsquen(int i, int n, int arr[], vector<int> &v)
{
    if (i == n)
    {
        print(v);

        if (v.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    v.push_back(arr[i]);
    subsquen(i + 1, n, arr, v); // take
    v.pop_back();
    subsquen(i + 1, n, arr, v); // not take
}

void subsquenback(int i, int n, int arr[], vector<int> &v)
{
    if (i == n)
    {
        print(v);
        if (v.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    subsquen(i + 1, n, arr, v); // not take
    v.push_back(arr[i]);
    subsquen(i + 1, n, arr, v); // take
    v.pop_back();
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // cout << "front side" << endl;
    // subsquen(0, n, arr, v);
    // cout << endl;
    cout << "now back side" << endl;
    subsquenback(0, n, arr, v);
    return 0;
}
