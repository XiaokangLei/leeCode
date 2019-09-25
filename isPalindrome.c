/*
 *判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
 */
//#include <stdio.h>

bool isPalindrome(int x){
    bool bl = true;
    int a[10] = {0};
    int i = 0;
    if(x < 0){
        bl = false;
    }
    else{
        while(x){
            a[i] = x % 10;
            x = x / 10;
            i++;
        }
        for(int j = 0; j < i / 2; j ++){
            if(a[j] != a[i-1-j]){
                bl = false;
            }
        }
    }
    return bl;
}
// result： pass,16ms,7.2MB