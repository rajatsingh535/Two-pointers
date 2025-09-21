
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){
    ll n;
    cin >> n;

    ll k; cin >> k;
    ll b[n];


    for(ll i = 0; i < n; i++){
        cin >> b[i];
    }

    ll count = 0 , sum = 0;

    unordered_map<ll , ll> map;

    for(int i = 0 , j = 0; j < n; j++){
         map[b[j]]++;
         ll d = map.size();
         while(d>k){
            map[b[i]]--;
            if(map[b[i]]==0) map.erase(b[i]);
            i++;
            d = map.size();

         }

    count += (j-i+1);

    }


    cout << count << endl;
    return 0;


}
