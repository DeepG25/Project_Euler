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

int main()
{
FAST;
ll n;
cin >> n;

ll up=0;
for(int i=0;i<n;i++)
{
	up = up*10 + 9;
}
ll down = 1 + up/10;

ll max=0;
for(int i=up;i>=down;i--)
{
	for(int j=i;j>=down;j--)
	{
		ll prod = i*j;
		
		if(prod < max)
			break;
	
		ll rev=0;
		ll num = prod;
		while(num>0)
		{
			rev = rev*10 + num%10;
			num/=10;
		}
		
		if(rev == prod && prod > max)
		{
			max = prod;
		}
	}
}
cout << max << endl;
return 0;
}
