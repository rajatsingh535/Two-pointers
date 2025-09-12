 // Number of subarrays whose sum <= K (All numbers in the array>=0) 

#include <iostream>
using namespace std;
typedef long long int ll;
int countSubarray(){
    ll n; cin >> n;
    ll k;cin>>k;
    ll b[n];
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    int count = 0 , sum = 0;
    for(ll i = 0, j = 0; j < n;j++){
        sum += b[j];
        while(sum>k){
            sum = sum - b[i];
            i++;
        }

        count += (j-i+1);
    }

    return count;

}

int main()
{
    cout << countSubarray() <<endl;
    
    return 0;
}
