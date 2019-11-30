#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = -1;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                continue;
            }
            else{
                index++;
                nums[index] = nums[i];
            }
        }
        return index + 1;
    }
};


int main(){
    int array[] = {0,1,2,2,3,0,4,2,3,3,4};
    vector<int> a(array, array+8);
    Solution A;
    cout << A.removeElement(a,2) << endl;
    system("Pause");
    return 0;
}