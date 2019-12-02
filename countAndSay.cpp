/**
 * #38.报数序列是一个整数序列，按照其中的整数的顺序进行报数，得到下一个数。其前五项如下：
 * 1.     1
 * 2.     11
 * 3.     21
 * 4.     1211
 * 5.     111221
 * 1 被读作  "one 1"  ("一个一") , 即 11。
 * 11 被读作 "two 1s" ("两个一"）, 即 21。
 * 21 被读作 "one 2",  "one 1" （"一个二" ,  "一个一") , 即 1211。给
 * 定一个正整数 n（1 ≤ n ≤ 30），输出报数序列的第 n 项。
 * 注意：整数顺序将表示为一个字符串。
 * 
 **/


#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    string countAndSay(int n) {
        string result = "";
        if(n == 1){
            return "1";
        }
        else{
            string ss = "1";
            for(int i = 0; i < n -1 ; i++){
                string str_tmp = "";
                char tmp = ss[0];
                int count = 1;
                for (int j = 1; j < ss.length(); j++){
                    if(ss[j] == tmp){
                        count++;
                    }
                    else{
                        str_tmp.append(to_string(count));
                        str_tmp += tmp;
                        tmp = ss[j];
                        count = 1;
                    }
                }
                str_tmp.append(to_string(count));
                str_tmp += tmp;
                ss = "";
                ss.append(str_tmp);
            }
            result.append(ss);
        }
        return result;
    }
};



int main(){
    int n = 6;
    Solution A;
    string result = A.countAndSay(n);
    system("Pause");
    return 0;
}