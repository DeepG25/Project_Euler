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

vector<ll> getfactors(ll n)
{
	vector<ll> v;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i == 0)
		{
			v.push_back(i);
			v.push_back(n/i);
		}
	}
	return v;
}

ll largestprime(vector<ll> v)
{
	ll l=0;
	for(ll i=0;i<v.size();i++)
	{
		if(getfactors(v[i]).size() == 2 && l < v[i])
		{
			l = v[i];
		}
	}
	return l;
}


int main()
{
FAST;

ll n;
cin >> n;
vector<ll> v = getfactors(n);
ll largestprime_f = largestprime(v);

cout << largestprime_f << endl;
return 0;
}

