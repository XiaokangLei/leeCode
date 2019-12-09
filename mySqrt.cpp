#include <iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        // 二分法
        int mid = x/2;
        int left = 0;
        int right = x;

        if(x == 1){
            return 1;
        }

        while(left < right && left != mid){
            while(mid > 46340){
                right = mid;
                mid = (left + right)/2;
            }
            if(x == mid * mid){
                return mid;
            }
            else if(x < mid * mid){
                right = mid;
                mid = (left + right)/2;
            }
            else{
                left = mid;
                mid = (left + right)/2;
            }
        }
        return mid;
        
    }
};

int main(){
    int a[10] = {2147395599,110,120,130,140,150,160,170,180,190};
    Solution A;
    for (int i = 0; i < 10; i++){
         cout << A.mySqrt(a[i]) << endl;
    }
    system("Pause");
    return 0;
}