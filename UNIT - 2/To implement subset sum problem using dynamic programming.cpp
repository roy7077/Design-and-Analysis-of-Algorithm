// subset sum problem - dynamic programming
//problem link GFG - https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1


bool isSubsetSum(vector<int>arr, int sum)
    {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(sum+1,0));
        for(int i=0;i<n;i++)
        dp[i][0]=1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                bool a,b,c;
                a=b=c=0;
                
                if(i-1>=0)
                a=dp[i-1][j];
                
                if(i-1>=0 and j-arr[i]>=0)
                b=dp[i-1][j-arr[i]];
                
                if(j==arr[i])
                c=1;
                
                dp[i][j]= (a or b or c);
            }
        }
        
        return dp[n-1][sum];
    }
