   
#include <bits/stdc++.h>
using namespace std;

#define ff                 first
#define ss                 second
#define ll                 long long int
#define ld                 long double
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define vs                 vector<string>=
#define mii                map<ll, ll>
#define ump                unordered_map<ll, ll>
#define mid(l,r)           (l+(r-l)/2)
#define pq_max             priority_queue<ll>
#define pq_min             priority_queue<int, vi, greater<ll> >
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
#define w(x)               int x; cin>>x; while(x--)
#define loop(i,a,b)     for(int i=(a);i<=(b);i++)

void file_i_o(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   #ifndef ONLINE_JUDGE
       freopen("C:/Users/arnav/Desktop/InputOutput/input.txt", "r", stdin);
        freopen("C:/Users/arnav/Desktop/InputOutput/output.txt", "w", stdout);
    #endif 
}     




int main(int argc, char const *argv[])
 {
 
     file_i_o();
      int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
        int x;
        cin>>x;
	    v.push_back(x);
	}
	int k;
	cin>>k;
	sort(v.begin(),v.end());
	int i=0,ans=1;
	int j=1;
	while(i<n and j<n){
	    if(v[j]-v[i]<=k) j++;
	    else{
	        i=j;
	        j=i+1;
	        ans++;
	    }
	}
	cout<<ans;
     return 0;

 }
 
