#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rfr(a,b) for(int i = b-1; i>=0; i--)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define nl cout<<endl
using namespace std;
 
void init_code(){
    fast_io;
   
}
ll gcd(ll a , ll b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}
ll facetorial(const int n)
{
    ll f = 1;
    for (int i=1; i<=n; ++i)
        f *= i;
    return f;
}
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll x,y;
    cin>>x>>y;
    ll r = min(x,y);
    cout<<facetorial(r)<<endl;
 
   return 0;
}