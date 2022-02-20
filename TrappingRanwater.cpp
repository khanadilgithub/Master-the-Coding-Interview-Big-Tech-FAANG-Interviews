/*Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
In this case, 6 units of rain water are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9*/

#include<iostream>
#include <vector>
using namespace std;
int trap(vector<int>& height)
    {
        int len=height.size();
        int trapwater=0;
        vector<int> leftmax(len);
        vector<int >rightmax(len);
        leftmax[0]=height[0];
        rightmax[len-1]=height[len-1];
        for (int i=1; i<len; i++)
        {
            leftmax[i]=max(leftmax[i-1],height[i]);
        }
        for (int j=len-2; j>=0; j--)
        {
            rightmax[j]=max(rightmax[j+1], height[j]);
        }
        for (int i=0;i<len; i++)
        {
            trapwater+=min(leftmax[i],rightmax[i])-height[i];
        }        
        return trapwater;     
    }
int main()
{
  vector <int> height= {0,1,0,2,1,0,1,3,2,1,2,1};
  int trapwater= trap(height);
  std::cout<<trapwater<<endl;
  return 0;
}
