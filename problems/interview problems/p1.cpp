#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int a = 0;
        int b = 0;
        int m = nums1.size();
        int n = nums2.size();
        while ((a!=m)&&(b!=n)){
            if (nums1[a]<=nums2[b]){
                nums.push_back(nums1[a]);
                a++;
            }
            else {
                nums.push_back(nums2[b]);
                b++;
            }
        }

        if (b>=n){
            while(a!=m){
                nums.push_back(nums1[a]);
                a++;
            }
        }

        if (a>=m){
            while(b!=n){
                nums.push_back(nums2[b]);
                b++;
            }
        }

        int s = nums.size();

        if ((s%2)==0){
            a = nums[(s/2)];
            b = nums[(s/2)-1];
            return ((a+b)/2.0);
        }
        else{
            return nums[s/2];
        }
    }

int main(){
    vector<int> r = {1,3};
    vector<int> s = {2};
    double ans = findMedianSortedArrays(r,s);
    cout << ans;
    return 0;
}