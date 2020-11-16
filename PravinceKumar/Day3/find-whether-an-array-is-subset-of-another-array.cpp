#include <iostream>
using namespace std;

int main() {

	int t;cin>>t;
	while(t--)
	{
	    int s1,s2;cin>>s1>>s2;
	    int arr1[s1],arr2[s2];
	    for(int i=0;i<s1;i++)
	        cin>>arr1[i];
	    for(int i=0;i<s2;i++)
	        cin>>arr2[i];
	    string ans="Yes";
	    for(int i=0;i<s2;i++) //for arr2
	    {
	        int flag=0;
	        for(int j=0;j<s1;j++)
	        {
	            if(arr1[j]==arr2[i])
	            {
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	        {
	            ans="No";
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
