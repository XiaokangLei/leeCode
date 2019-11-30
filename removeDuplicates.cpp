#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = nums.size();
        if(count == 0){return 0;}
        int tmp = nums[0];
        int index = 1;
        for (int i = 1; i < nums.size(); i++){
            if(tmp == nums[i]){
                count--;
            }
            else{
                tmp = nums[i];
                nums[index] = nums[i];
                index++;
            }
        }
         return count;
    }
};

int main(){
    int array[] = {0,0,1,1,1,2,2,3,3,4};
    vector<int> a(array, array+10);
    Solution A;
    cout << A.removeDuplicates(a) << endl;
    system("Pause");
    return 0;
}
