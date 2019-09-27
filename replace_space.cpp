#include <stdio.h>

class Solution {
public:
	void replaceSpace(char *str,int length) {
        if(str == NULL || length < 0){
            return;
        }
        int i = 0;
        int pre_len = 0;
        int bla_len = 0;
        while(str[i] != '\0'){
            pre_len++;
            if(str[i] == ' '){
                bla_len++;
            }
            i++;
        }
        int res_len = pre_len + bla_len * 2;
        if(res_len > length){
            return;
        }
        //str[res_len] = '\0';
        int index = res_len - 1;
        for(int j = pre_len - 1; j >= 0; j--){
            if(str[j] == ' '){
                str[index] = '0';
                str[--index] = '2';
                str[--index] = '%';
                index--;
            }
            else{
                str[index] = str[j];
                index--;
            }
        }
	}
};

int main(){
    Solution A;
    char str[100] = " helloworld";
    A.replaceSpace(str, 100);
    for (int i = 0; i < 100; i++){
        printf("%c", str[i]);
    }
        return 0;
}