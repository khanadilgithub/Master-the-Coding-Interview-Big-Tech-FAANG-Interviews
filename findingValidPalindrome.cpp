#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
    {
        string s1, s2;
        for(char i:s)
        {
            if(isalnum(i))
             {
                s1+=tolower(i);  
             }
        }
        s2=s1;
        reverse(s1.begin(),s1.end());
        if (s1!=s2)
        {
            return false;
        }
        
        return true; 
    }
int main()
{
 string s="A man, a plan, a canal: Panama";
 if(isPalindrome(s))
   cout<<"Yes: A palindrome";
  else cout<<"No: Not a palindrome";
}
