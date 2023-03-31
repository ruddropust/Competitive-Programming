#include<bits/stdc++.h>
#include <utility>
typedef long long ll;
typedef long double ld;

ll MOD = 998244353;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>
#define vi vector<int>
#define vl vector<ll>
#define fr(a,b) for(ll i = a; i < b; i++)
#define rfr(a,b) for(ll i = b-1; i>=0; i--)
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define print(array) for(auto it : array)cout << it << " ";
#define read(x) int x; cin >> x
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prDouble(x) cout << fixed << setprecision(10) << x
#define nl cout<<endl
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

using namespace std;
 
void init_code(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
//predefine function
ll lcm(ll x, ll y)
{
    ll a=__gcd(x,y);
 
    ll ans = (x*y)/a;
 
    return ans;
}
 
ll hcf(ll x,ll y)
{
    ll a=__gcd(x,y);
    return a;
 
}
 
ll isprime(ll n)
{
    if(n<=1)
        return 0;
 
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
  
    return 1;
}
//main code

void ruddro_solve()
{

	
}
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;			cin>>n;
    if(n<6 || n%2!=0)cout<<0<<endl;
    else if(n%4==0)cout<<n/4-1<<endl;
    else cout<<n/4<<endl;
   return 0;
}