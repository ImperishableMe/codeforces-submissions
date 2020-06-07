#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace std;
using namespace __gnu_pbds;

double INF = 1e100;
double EPS = 1e-12;
typedef long long int ll;

typedef pair < int,int > PII;
typedef pair < ll,ll > PLL;

typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

#define F first
#define S second


ostream& operator<<(ostream & os, PLL h){
	return os << "( " << h.F << ", " << h.S << " )" << endl;

}
PLL operator+ (PLL a, ll x)     {return {a.F + x, a.S + x} ;}
PLL operator- (PLL a, ll x)     {return {a.F - x, a.S - x} ;}
PLL operator* (PLL a, ll x)     {return {a.F * x, a.S * x} ;}
PLL operator+(PLL x, PLL y) { return {x.F + y.F,x.S + y.S} ;}
PLL operator-(PLL x,PLL y) { return {x.F - y.F, x.S - y.S} ;}
PLL operator*(PLL x,PLL y) { return {x.F * y.F , x.S * y.S} ;}
PLL operator%(PLL x,PLL y) { return {x.F % y.F, x.S % y.S} ;}


ll const MOD = 1e9 + 7;
ll const MX = 1e5 + 10;

ll bigmod(ll a, ll b, ll m = MOD){
	if(!b) return 1;
	ll x  = bigmod(a,b/2,m);

	x = (x * x)% m;
	if(b&1)
		x = (x * a) % m;
	return x;
}

ll modinv(ll num){
	return bigmod(num,MOD-2);
}

PLL M = {1e9 + 9, 1e9 + 21};

ll n,p;
PLL pair_big_mod(ll a, PLL b)
{
	return PLL(bigmod(p,a,b.F), bigmod(p,a,b.S));
}

int const N = 5e6;

vector<int>cnt(N,0);

int main(){

	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;

	while(t--){
		ll ans = 0;
		cin >> n >> p;
		vector<int>v(n);
		for(int i = 0; i < n; i++) cin >> v[i] ;
		sort(v.rbegin(),v.rend());

		if(p == 1){
			cout << (n & 1) << '\n';
			continue;
		}
		vector<int>trace;

		for(int i = 0; i < n;){
			ans = (ans + bigmod(p,v[i])) ;
			if(ans >= MOD ) ans -= MOD;
			int j = i + 1;

			while(j < n){
				ans = (ans - bigmod(p,v[j]) + MOD);
				if(ans >= MOD ) ans -= MOD;
				
				cnt[v[j]]++;
				trace.push_back(v[j]);
				int k = v[j] ;

				while(cnt[k] == p){
					cnt[k] -= p;
					cnt[k+1]++;
					k++;
					trace.push_back(k);
				}

				if(k == v[i]){
					cnt[k]--;
					i = j + 1;
					break;
				}
				j++;
			}
			if(j >= n) break;
		}

		for(auto x : trace) cnt[x] = 0;

		cout << ans << '\n';
	}
		
	return 0;
}