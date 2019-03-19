//Deep Godhani
//DAIICT

#include<bits/stdc++.h>

using namespace std;

#define N 10000000
#define PI acos(-1)
#define INF LONG_LONG_MAX
#define NINF LONG_LONG_MIN
#define ll long long int
#define ld long long double
#define precision(x,d) cout << fixed << setprecision(d) << x
#define FAST ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL))

ll gcd(ll a,ll b)
{
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	return gcd(a,b-a);
}

int main()
{
FAST;
ll lower,upper;
cin >> lower >> upper;
ll ans = lower;
for(ll i=lower+1;i<=upper;i++)
{
	ans = (ans*i)/__gcd(ans,i);		//above function is of GCD,but using inbuilt GCD function here.
}
cout << ans << endl;
return 0;
}

