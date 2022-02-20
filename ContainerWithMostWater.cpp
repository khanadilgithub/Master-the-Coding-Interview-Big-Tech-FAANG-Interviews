#include<iostream>
#include <vector>
using namespace std;
// Brute force solution
/*
int maxArea(vector<int>& height)
{
        int maxarea = INT_MIN;
        
        for(int i = 0; i < height.size()-1; i++)
        {
            for(int j = i+1; j < height.size(); j++){
                int minHeight = min(height[i], height[j]);
                int area = minHieght * (j - i);
                maxAra = max(maxarea, area);
            }
        }
        
        return maxarea;
  }
*/

//optimised solution 
int maxArea(vector<int>& height)
    {
        int mxarea=0, area=0;
        int first=0;
        int last=height.size()-1;
        while(last>first)
        {
        area=min(height[first],height[last])*(last-first);
        if (height[first]<height[last]) first++;
        else last--;
        mxarea=max(mxarea, area);
        }
        return mxarea;        
    }
int main()
{
  vector <int> height= {1,8,6,2,5,4,8,3,7};
  int maxarea= maxArea(height);
  std::cout<<maxarea<<endl;
  return 0;
}
