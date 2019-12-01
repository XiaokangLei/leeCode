#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() == 0){
            return 0;
        }
        for (int i = 0; i < haystack.length(); i++){
            if(haystack[i] == needle[0]){
                int tmp = i;
                for (int j = 0; j < needle.length(); j++){
                    if(haystack[tmp] != needle[j]){
                        break;
                    }
                    else{
                        tmp++;
                        if(j == needle.length() - 1){
                            return i;
                        }
                    }
                }
            }
        }
        return -1;
    }
};

int main(){
    string str1 = "hello";
    string str2 = "ll";
    Solution A;
    cout << A.strStr(str1, str2) << endl;
    system("Pause");
    return 0;
}