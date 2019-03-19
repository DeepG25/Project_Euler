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
ll ans = n*(n+1)*(3*n*n - n - 2)/12;
cout << ans << endl;
return 0;
}

