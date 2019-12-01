/**
 * 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
 * 如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
 * 你可以假设数组中无重复元素。
 **/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() == 0){
            return 0;
        }
        for (int i = 0; i < nums.size() - 1; i++){
            if(nums[i] >= target){
                return i;
            }
            else if(nums[i+1] >= target){
                return i + 1;
            }
        }
        if(nums[nums.size()-1] < target){
                return nums.size();
        }
        return 0;
    }
};

int main(){
    int array[] = {1,3,5,6};
    vector<int> a(array, array+4);
    Solution A;
    cout << A.searchInsert(a, 5);
    system("Pause");
   
    return 0;
}