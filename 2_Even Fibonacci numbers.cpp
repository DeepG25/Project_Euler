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

vector<ll> v(N);

int main()
{
FAST;
ll n = 4000000;		//sum of even fibonacci numbers till n 
v[0] = 1;
v[1] = 2;
ll i=1,sum=2;
while(v[i] < n)
{
	i++;
	v[i] = v[i-1] + v[i-2];
	if(v[i]%2 == 0)
	{
		sum += v[i];
	}
}
cout << sum << endl;
return 0;
}

