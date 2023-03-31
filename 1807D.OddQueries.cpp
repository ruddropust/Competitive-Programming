#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;


ll MOD = 998244353;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rfr(a,b) for(int i = b-1; i>=0; i--)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define print(array) for(auto it : array)cout << it << " ";
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define sortvec(v) sort(v.begin(), v.end())
#define revvec(v) reverse(v.begin(), v.end())
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define nl cout<<endl

using namespace std;
 
void init_code(){
    fast_io;
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
	ll n,q,ps=0;cin>>n>>q;
	vl v,v1;
	fr(0,n+1){
		if(i==0){v1.pb(0);v.pb(0);}
		else{
			read(x);
			ps+=x;
			v1.pb(ps);
			v.pb(x);
		}
		

	}
	// print(v);nl;
	fr(0,q){
		ll l,r,k,sum=0;cin>>l>>r>>k;

		sum = ps-(v1[r]-v1[l-1])+(k*(r-l+1));
		// cout<<v1[r]<<" "<<v1[l-1]<<" "<<sum<<endl;
		if(sum%2==0)no;
		else yes;
	}

	return;
}
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;			cin>>t;
    while(t--)
    {
    	ruddro_solve();
    }
   return 0;
}