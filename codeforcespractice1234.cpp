#include <bits/stdc++.h>



#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             LONG_LONG_MAX
#define ps(x,y)         fixed<<setprecision(y)<<x
#define endl            '\n'
#define mk(arr,n,type)  type *arr=new type[n]
#define w(x)            int x; cin >> x; while(x--)
#define f(i,x,y)        for(int i = x; i < y; i++)
#define g(i,x,y)        for(int i = x;i<=y;i++)



using namespace std;



void c_p_p()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

}
/* ******* Your Functions Below ******** */

int sum(int i,int j,vector<vector<int>> &grid)

{
   int ans=0;
    int n=grid.size();
    int m=grid[0].size();
    if(i<0 || j<0 || i>=n ||j>=m )
        return 0;
    else
        return grid[i][j];
}









/* ******* Your Functions Above ******** */

int32_t main()
{
    c_p_p();
    #ifndef ONLINE_JUDGE
    // For getting input from input.txt file 
    // For getting input from input.txt file 
    freopen("inpute.exe", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("outputx.exe", "w", stdout); 
#endif
    int t;
    cin>>t;
   
    while(t--)
{
   
  // this is the program which s used to find the  value of that citation after that all the values prior to that has more value than that
 int n,m;
 cin>>n>>m;
 vector<vector<int>>grid(n,vector<int>(m,-1));
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<m;j++)
    {
        cin>>grid[i][j];
    }

 }
 vector<vector<int>>ans;
 vector<int>ans1;
 int val;

 for(int i=0;i<n;i++)
{
    val=0;
    for(int j=0;j<m;j++)
    {
      val=sum(i+1,j,grid)+sum(i-1,j,grid)+sum(i,j+1,grid)+sum(i,j-1,grid);
      ans1.push_back(val);  
    }
    ans.push_back(ans1);
}

for(int i=0;i<ans.size();i++)
{
    for(int j=0;j<ans[0].size();j++)

    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

}
return 0;
}