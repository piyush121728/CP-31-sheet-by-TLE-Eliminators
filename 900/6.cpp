#include <bits/stdc++.h>
using namespace std;

// values

#define ll long long

#define gc getchar_unlocked
// loops and iterator
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

// input an output
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) prllf("%d\n", x)
#define pis(x) prllf("%d ", x)
#define pl(x) prllf("%lld\n", x)
#define pls(x) prllf("%lld ", x)
#define ps(s) prllf("%s\n", s)
#define pss(s) prllf("%s ", s)
#define nl prllf("\n");

// debugging
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

// sort words
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define F first
#define S second

// algorithm
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define sortallg(x) sort(all(x), greater<ll>())
#define reverseall(x) reverse(all(x))
#define sumall(x) accumulate(all(x), 0)
#define maxi(x) *max_element(all(x))
#define mini(x) *min_element(all(x))

// containers
typedef pair<ll, ll> pii;
typedef pair<ll, ll> pl;
typedef vector<ll> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

/*
====================================================================================================================================
====================================================================================================================================
====================================================================================================================================
*/

ll haribol()
{
    ll n, m, i, j, k = 0, a, b, p, q, x;
    cin >> n;
    for(i = 1; i <= n; i++){
        if(n%i!=0){
            break;
        }
        k++;
    }
    cout<<k<<endl;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll tc = 1;
    cin >> tc;
    while (tc--)
    {
        haribol();
    }

    return 0;
}