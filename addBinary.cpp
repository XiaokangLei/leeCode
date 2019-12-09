#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if(a.size() > b.size()){
            int index = 0;
            while(index < a.size() && index < b.size()){
                a[index] += b[index] - '0';
                index++;
            }
            
            for (int i = 0; i < a.size() - 1; i++){
                if(a[i] == '2'){
                    a[i] = '0';
                    a[i + 1] += 1;
                }
                else if(a[i] == '3'){
                    a[i] = '1';
                    a[i + 1] += 1;
                }
            }
            if(a[a.size()-1] == '2'){
                a[a.size() - 1] = '0';
                a.append("1");
            }
            else if(a[a.size()-1] == '3'){
                a[a.size() - 1] = '1';
                a.append("1");
            }
            reverse(a.begin(), a.end());
            return a;
        }
        else{
            int index = 0;
            while(index < a.size() && index < b.size()){
                b[index] += a[index] - '0';
                index++;
            }
            
            for (int i = 0; i < b.size() - 1; i++){
                if(b[i] == '2'){
                    b[i] = '0';
                    b[i + 1] += 1;
                }
                else if(b[i] == '3'){
                    b[i] = '1';
                    b[i + 1] += 1;
                }
            }
            if(b[b.size()-1] == '2'){
                b[b.size() - 1] = '0';
                b.append("1");
            }
            else if(b[b.size()-1] == '3'){
                b[b.size() - 1] = '1';
                b.append("1");
            }
            reverse(b.begin(), b.end());
            return b;
        }
    }
};

int main(){
    string str1 = "1111";
    string str2 = "1111";
    string result = "";
    Solution A;
    result = A.addBinary(str1, str2);
    cout << result << endl;
    system("Pause");
    return 0;
}