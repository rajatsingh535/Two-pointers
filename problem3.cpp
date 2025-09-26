#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> arr = {8, 6, 5, 1, 4, 2, 0, 1};
    int k = 10;
    int n = arr.size();
    int sum = 0;
    int l = 0, r = 0;
    int max_len = 0;
    while (l < n && r < n)
    {
        sum += arr[r];

        if (sum <= k)
        {
            max_len = max(max_len, (r - l + 1));
        }

        while (sum > k)
        {
            sum -= arr[l];
            l++;
        }
        r++;
    }

    cout <<  max_len << endl;
    return 0;
}
