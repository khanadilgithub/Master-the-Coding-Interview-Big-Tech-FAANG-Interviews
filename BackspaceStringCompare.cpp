/*Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
*/

#include<iostream>
#include <stack>
using namespace std;
bool backspaceCompare(string s, string t)
    {
        stack<char> st1;
        stack<char> st2;
        for (int i=0; i<s.size(); i++)
        {
            if (s[i]=='#')
            {
                if(st1.empty()){}
                else st1.pop();
            }
            else
            {
                st1.push(s[i]);
            }
        }
        for (int i=0; i<t.size(); i++)
        {
            if (t[i]=='#')
            {
                if(st2.empty()){}
                else st2.pop();
            }
            else
            {
                st2.push(t[i]);
            }
        }
        if(st1==st2)
        {
          return true;
        }
        else
        {
          return false;
        }
    }
int main()
{
  string s,t;
  s = "ab#c";
  t = "ad#c";
  if(backspaceCompare(s,t))
  {
    cout<<"true";
  }
  else 
  {
    cout<<"false";
  }
  return 0;
}
