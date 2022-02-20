#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;
vector<int> TwoSum(vector<int>& nums, int target)
{
  unordered_map<int,int> cmpmap;
  vector<int> indexpair;
  
  for (int i=0; i<nums.size();i++)
  {
    auto it = cmpmap.find(target-nums[i]);
    if( it != cmpmap.end())
    {
      indexpair.push_back(it->second);
      indexpair.push_back(i);
      return indexpair;
    }
    cmpmap[nums[i]]=i;     
  }
  return indexpair;
}
int main()
{
  vector <int> vec= {2,7,11,15};
  int target = 9;
  vector<int> output=TwoSum(vec, target);
  std::cout<<output[0]<<" "<<output[1]<<endl;
  return 0;
}
