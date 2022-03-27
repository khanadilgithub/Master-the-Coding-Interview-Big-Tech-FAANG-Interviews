#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
    {
        map<char, int> m;
        int i=0, j=0, ans=0;
        while(i<s.size())
        {
            if (m[s[i]]==0)
            {
              m[s[i]]++; 
              int len= (i-j)+1;
              ans = max(ans,len);
              i++;  
            }
            else
            {
                m[s[j]]--;
                j++;
            }
        }
        return ans;
    }
int main()
{
  string s ="abcabcbb";
 //string s1="pwwkew";
  int len=lengthOfLongestSubstring(s);
  cout<<len;
}
