//0-1 knapSack problem gfg link - https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>> dp(n,vector<int>(W+1,0));
       
       for(int i=wt[0];i<=W;i++)
       dp[0][i]=val[0];
       
       for(int i=1;i<n;i++)
       {
           for(int j=1;j<=W;j++)
           {
               int a,b;
               a=b=-1e9;
               
               a=dp[i-1][j];
               
               if(j>=wt[i])
               b=val[i]+dp[i-1][j-wt[i]];
               
               dp[i][j]=max(a,b);
           }
       }
       
       return dp[n-1][W];
    }
