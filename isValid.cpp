/*#20
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
有效字符串需满足：
左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。
来源：力扣（LeetCode）
*/
#include <iostream>
#include <string>

using namespace std;

class Solution{
    public:
    bool isValid(string s){
        string str = "";
        if(s.length() % 2){
            return false;
        }
        else{
            int index = 0;
            for (int i = 0; i < s.length(); i++){
                switch(s[i]){
                    case '(':
                    case '{':
                    case '[':
                        str.insert(index,1,s[i]);
                        index++;
                        break;
                    case ')':
                        if(str[--index] == '('){
                            str.erase(index,1);
                        }
                        else{
                            return false;
                        }
                        break;
                    case ']':
                        if(str[--index] == '['){
                            str.erase(index,1);
                        }
                        else{
                            return false;
                        }
                        break;
                    case '}':
                        if(str[--index] == '{'){
                            str.erase(index,1);
                        }
                        else{
                            return false;
                        }
                        break;
                }
            }
            if(str != ""){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution A;
    string str = "{[][}}";
    bool result = A.isValid(str);
    cout << result << endl;
    
    system("Pause");
    return 0;
}
