//HK HK HK HK HK 108 times


#include <bits/stdc++.h>
#define PII pair < int , int >
#define PI 2.0*acos(0.0)
#define ll long long int
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define FOR(i, a, n) for(int i = int (a); i < int (n); i++)
#define vi vector < int >
#define pb push_back
#define ceiling(a, b) (a %b == 0)?(a/b):(a/b)+1
#define F first
#define S second

int const up =   1e6 + 10 ;
int const up1 = 5 * 1e5 + 10  ;
int const eps = 1e-9;
int const MX =   5 * 1e5 + 10;
int const mod = 1000000007 ;
using namespace std;
 long long bigmod(long long p,long long e,long long M){
    long long ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return ret;
}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
 ll modinverse(ll a,ll M){return bigmod(a,M-2,M);}

// ************************************************************** GLOBAL VARIABLES *******************************************



 //******************************************************************************************************************************
ll bigmod(ll base, ll pow)
{
    if(pow == 0) return (1 % mod);
    ll x = bigmod(base, pow/2 );
    x = ( x * x ) % mod;
    if(pow % 2 == 1)
         x = (x * base) % mod;
    return x;
}
bool vis[2010][2010];
double dp[2010][2010];
int n, t;
 double p;
double expt(int num , int time)
{

    if(time == t)
        return max(0, n - num);
    if(num <= 0 )
        return n ;

    if(vis[num][time])
        return  dp[num][time];
    vis[num][time]  = 1;
    return dp[num][time] = p * expt(num - 1, time + 1) + (1.0 - p) * expt(num , time + 1);
}

int main()
{
  // int  t;
   char cw[] = {'v', '<', 94 , 62};
   //cout << cw[2] << endl;
   char ccw[] = { 'v', 62, 94 , '<'};

   ll n;
   char ch1, ch2;
   cin >> ch1 >> ch2;
   cin >> n;
  // if(n)
   //n = n % 4;
   bool f1 = 0 , f2 = 0;
   for(int i = 0; i < 4; i++){
    if(cw[i] == ch1 ){
        if(cw[(i + n) % 4] == ch2)
           {
               //cout << "cw" << endl;
              // return 0;
              f1 = 1;
           }

    }

   }
   for(int i =0 ; i < 4; i++){
    if(ccw[i] == ch1){
        if(ccw[(i + n)  % 4] == ch2)
        {
            f2 = 1;
        }
    }
   }
   if(f1 && f2)
   cout << "undefined" << endl;
   else if(f1)
    cout << "cw" << endl;
   else
    cout << "ccw" << endl;
   return 0;
}

