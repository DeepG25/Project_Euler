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
n--;
ll a,b,c;

a = n%3;
a = n-a;
a = a/3;

b = n%5;
b = n-b;
b = b/5;

c = n%15;
c = n-c;
c = c/15;

ll sum = (3*a*(a+1))/2 + (5*b*(b+1))/2 - (15*c*(c+1))/2;
cout << sum << endl;
return 0;
}

