
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int p1 = m - 1;
    int p2 = n - 1;

    for (int p = m + n - 1; p >= 0; p--) {
        if (p2 < 0) {break;}
        else nums1[p] = (p1 >= 0 && nums1[p1] > nums2[p2]) ? nums1[p1--] : nums2[p2--];

    }
}
