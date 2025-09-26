#include <iostream>
#include <vector>
#include <unordered_map>
 
using namespace std;
int main()
{
    vector<int> v = {8, 6, 5, 1, 4, 2};
    int k = 3;
 
    unordered_map<int, int> map;
    int cnt = 0;
 
    for (int x : v)
    {
        for (int d = -k; d <= k; d++)
        {
            int diff = x + d;
            if (map.find(diff) != map.end())
            {
                cnt += map[diff];
            }
        }
        map[x]++; // mark current element as seen
    }
    cout << "count pair that difference <=" << k << ": " << cnt << endl;
 
    return 0;
}


