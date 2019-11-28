#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;

class Solution{
public:
    string longestCommonPrefix(vector<string>& strs){
        string strResult = "";
        //cout << strs.size() << endl;
        if(strs.size() < 1) return strResult;
        int min_length = INT_MAX;
        for (int i = 0; i < strs.size(); i++){
            if(strs[i].size() < min_length){
                min_length = strs[i].size();
            }
        }
        int count = min_length;
        for (int j = 1; j < strs.size(); j++){
            int tmp = 0;
            for (int i = 0; i < min_length; i++){
                if(strs[0][i] == strs[j][i]){
                    tmp++;
                }
                else{
                    break;
                }
            }
            if(count > tmp){
                count = tmp;
            }
        }
        
        for (int i = 0; i < count; i++){
            strResult.push_back(strs[0][i]);
        }
        return strResult;
    }
};

int main(){
    vector<string> strVec;
    strVec.push_back("alower");
    strVec.push_back("flow");
    strVec.push_back("flight");
    Solution A;
    string result = A.longestCommonPrefix(strVec);
    cout << "\"" << result <<"\"" << endl;
    //cout << 
    system("Pause");
    return 0;
}