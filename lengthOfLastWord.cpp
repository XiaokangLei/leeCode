/**
 * #58 给定一个仅包含大小写字母和空格 ' ' 的字符串，返回其最后一个单词的长度。如果不存在最后一个单词，请返回 0 。
 * 说明：一个单词是指由字母组成，但不包含任何空格的字符串。
 * 示例:
 * 输入: "Hello World"
 * 输出: 5
 * 
 * 执行用时 :4 ms, 在所有 cpp 提交中击败了81.75%的用户
 * 内存消耗 :8.6 MB, 在所有 cpp 提交中击败了92.29%的用户
*/

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty()){
            return 0;
        }
        int count = 0;
        s.erase(s.find_last_not_of(" ") + 1);
        for (int i = s.length() - 1; i > -1; i--){
            if(s[i] !=' '){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};

int main(){
    string str1 = " hello  ";
    Solution A;
    cout << A.lengthOfLastWord(str1) << endl;
    system("Pause");
    return 0;
}