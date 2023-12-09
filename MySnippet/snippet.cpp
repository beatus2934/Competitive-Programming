#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double
#define ar array


#define all(x) begin(x),end(x)
#define sz(x) (int) x.size()
#define mk make_pair
#define f first
#define s second
#define vt vector
#define pb push_back
#define pk pop_back
#define lend "\n"
#define um unordered_map
#define priority_queue

#define REP(i,a,b) for (int i = a;i<b;i++)
#define EACH(x,a) for(auto& x: a)


template<class T> void read(T& x){
	cin>>x;
}

template<class H,class... T>void read(H& h,T&... t){
	read(h);
	read(t...);
}

template<class T>void read(vt<T>& x){
	REP(i,0,sz(x)){
		read(x[i]);
	}	
}


string to_string(bool b){	
	return b?"YES":"NO";
}

string to_string(string s){
	return s;
}


template<class A> void write(A x) {
   	cout <<x;
}
template<class H, class... T> void write(const H& h, const T&... t) { 
  	write(h);
   	write(t...);
}
void print() {
   	write("\n");
}

template<class H, class... T> void print(const H& h, const T&... t) { 
   	write(h);
   	if(sizeof...(t))
   		write(' ');
   	print(t...);
}


template<class T>void dbg(T& x){
	cerr<<x<<lend;
}

template<class T>void dbg(vt<T>& x){
	REP(i,0,sz(x)){
		dbg(x[i]);	
	}
}
template<class T>void dbg(string s){
	REP(i,0,sz(s)){
		write(s[i]);
	}
}

const int MxN = 2*1e5;
const int MOD = 1e9+7;
const int CON = 998244353;
const long double PI = 3.1415926535897932384626;

const int d4i[4]={-1, 0, 1, 0}, d4j[4]={0, 1, 0, -1};
const int d8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8]={0, 1, 1, 1, 0, -1, -1, -1};

void solve(){
	//write your code here


}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
	cin>>t;

	while(t--){
		solve();
	}
	return 0;
}
