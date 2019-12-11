#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = nums[0];
        if(nums.size() > 1){
            for(int i = 1; i < nums.size(); i++){
                result = result ^ nums[i];
            }
        }
        return result;
    }
};

int main(){
    int array[] = {4,5,6,6,5,4,7};
    vector<int> a(array, array + 7);
    Solution A;
    cout << A.singleNumber(a) << endl;
    system("Pause");
    return 0;
}