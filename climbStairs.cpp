#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n<=0)
            return 0;
        if(n == 1 || n == 2)
            return n;
        //初始化
        int x = 1;
        int y = 2;
        int result = 0;
        while(n >= 3) {
            result = x + y;
            x = y;
            y = result;
            n--;
        }
        return result;
    }
};

int main(){
    int a = 44;
    Solution A;
    cout << A.climbStairs(a) << endl;
    system("Pause");
    return 0;
}