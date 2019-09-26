/**牛客网：https://www.nowcoder.com/practice/247f7bd088764aefa7474cff27489095?tpId=98&tqId=32839&tPage=1&rp=1&ru=/ta/2019test&qru=/ta/2019test/question-ranking
 * 题目描述:
 * 小明在越南旅游，参加了当地的娱乐活动。小明运气很好，拿到了大奖， 到了最后的拿奖金环节。
 * 小明发现桌子上放着一列红包，每个红包上写着奖金数额。现在主持人给要求小明在这一列红包之间“切”2刀，
 * 将这一列红包“切”成3组，并且第一组的奖金之和等于最后一组奖金和（允许任意一组的红包集合是空）。
 * 最终第一组红包的奖金之和就是小明能拿到的总奖金。小明想知道最多能拿到的奖金是多少，你能帮他算算吗。
 * 举例解释：桌子上放了红包  1, 2, 3, 4, 7, 10。小明在“4,7”之间、“7,10” 之间各切一刀，将红包分成3组 
 * [1, 2, 3, 4]   [7]   [10]，其中第一组奖金之和=第三组奖金之和=10，所以小明可以拿到10越南盾。
 * 输入描述:
 * 第一行包含一个正整数n，(1<=n<= 200 000)，表示有多少个红包。第二行包含n个正整数d[i]，表示每个红包包含的奖金数额。其中1<= d[i] <= 1000 000 000
 * 小明可以拿到的总奖金.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int *data = (int *)malloc(sizeof(int) * (n));
    for(int i = 0; i < n; i++){
        scanf("%d", &data[i]);
    }
    int i = 0, j = n - 1;
    // max存储最大获得的奖金
    long long max = 0;
    // 记录从前向后求和的值
    long long front_data = data[0];
    // 记录从后向前求和的值
    long long end_data = data[n - 1];
    //
    while(i < n && j > 0 && i < j){
        // 前面的sum小于后面的sum，则前面向后一步，更新sum
        if(front_data < end_data){
            i++;
            front_data += data[i];
        }
        // 前面的sum大于后面的sum，则后面向前一步，更新sum
        else if(front_data > end_data){
            j--;
            end_data += data[j];
        }
        //前面的sum等于后面的sum，则保存当前值，并前后各走一步，更新sum
        else{
            max = front_data;
            i++;
            j--;
            // 前后各走一步后是否结束，不结束，则更新sum
            if (i < j) {
				front_data += data[i];
				end_data += data[j];
			}
            // 否则当前为最大
			else {
				max = front_data;
			}
        }
    }
    // 输出结果
    printf("%lld", max);
    return 0;
}