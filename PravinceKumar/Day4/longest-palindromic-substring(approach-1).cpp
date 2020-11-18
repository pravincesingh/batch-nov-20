class Solution {
bool isPal(string s)
{
    if(s.size()==1)
        return 1;
    int low=0,high=s.size()-1;
    while(low<high)
    {
         if(s[low++]!=s[high--])
         {
             return 0;
         }
    }
    return 1;
}
public:
    string longestPalindrome(string s) {
        string res="";
        int si=0;
        for(int i=0;i<s.size();i++)
        {
            string str="";
            for(int j=i;j<s.size();j++)
            {
                str+=s[j];
                if(isPal(str))
                {
                    if(str.size() > si)
                    {
                        res=str;
                        si=str.size();
                    }
                }
            }

        }
        return res;
    }
};
