class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        char b[33] = {'0'};
        uint32_t result;
        char k = 0;
        for(int j = 0; j < 32; j++,n>>=1){
            b[k++] = (n&1) + 48;
        }
        result = strtol(b,NULL,2);
        return result;

    }
};