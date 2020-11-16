class Solution{
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here
        int ans=0;
        vector<int> v;

        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                v.push_back(matrix[i][j]);

        sort(v.begin(),v.end());
        // for(auto a:v)
        //     cout<<a<<" ";

        if(v.size()%2==0)
            ans=(v[v.size()/2]+v[(v.size()/2)+1])/2;
        else
            ans=v[(v.size()/2)];
        return ans;
    }
};
