class Solution {
public:
    int pivotInteger(int n)
    {
        for(int i=1; i<=n; i++)
        {
            int tot_sum = 0;
            
            for(int j=i;j<=n;j++)
            {
                tot_sum += j;
            }
            if(tot_sum==(i*(i+1))/2) return i;
        }
        return -1;
    }
};
