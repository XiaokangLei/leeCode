/*
    给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
 */
int reverse(int x){
    long result = 0;
    while(x){
        int tmp = x % 10;
        x /= 10;
        result = result * 10 + tmp;
    }
    if(result > INT_MAX || result <INT_MIN){
        result = 0;
    }
    d =  d >= 0.0 ? int(d + 0.5) : int(d - double(int(d-1)) + 0.5) + int(d-1);
    return (int)result;
}
// result： pass,8ms,6.8MB