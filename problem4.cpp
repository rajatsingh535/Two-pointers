#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s = "ksdkl";
    int k = 2;

    int l = 0, r = 0, max_len = 0;
    multiset<char> set;

    while (r < s.length())
    {
        set.insert(s[r]);
        while (*set.rbegin() - *set.begin() > k)
        {
            set.erase(set.find(s[l]));
            l++;
        }

        max_len = max(max_len, r - l + 1);
        r++;
    }

    cout <<  max_len << endl;
    return 0;
}
