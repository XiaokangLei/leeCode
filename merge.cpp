#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1, k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
    }
};

int main(){
    int array[] = {4,5,6,0,0,0};
    int array2[] = {1,2,3};
    vector<int> a(array, array + 6);
    vector<int> b(array2, array2 + 3);
    Solution A;
    A.merge(a, 3, b, 3);
    system("Pause");
    return 0;
}