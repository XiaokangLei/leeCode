/**
 * #66给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。你可以假设除了整数 0 之外，这个整数不会以零开头。
 * 示例 1:
 * 输入: [1,2,3]
 * 输出: [1,2,4]
 * 解释: 输入数组表示数字 123。
 * 示例 2:
 * 输入: [4,3,2,1]
 * 输出: [4,3,2,2]
 * 解释: 输入数组表示数字 4321。
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size() - 1] += 1;
        for (int i = digits.size() - 1; i > 0; i--){
            if(digits[i] == 10){
                digits[i] = 0;
                digits[i - 1] += 1;
            }
        }
        if(digits[0] == 10){
            digits[0] = 0;
            digits.emplace(begin(digits),1);
        }
        return digits;
    }
};

int main(){
    int array[] = {9,9,9,9};
    vector<int> a(array, array+4);
    Solution A;
    A.plusOne(a);
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << ",";
    }
    system("Pause");
   
    return 0;
}