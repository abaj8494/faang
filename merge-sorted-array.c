// DON"T USE THIS. BROKEN -> 26/04/23
// function to insert value m at position n in array a by shifting the array
void insert(int *a, int m, int n, int l) {
    int temp = a[l-1];
    for(int i=l-1; i>n; i--) {
        a[i] = a[i-1];
    }
    a[0] = temp;
    a[n] = m;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    char *ret = malloc(sizeof(int) * (m+n));
    int k = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // if less than first element
            if (i == 0 && nums2[j] <= nums1[i]) insert(nums1, nums2[j], i, m + n);
            // if between 2 elements
            else if (nums1[i] <= nums2[j] && nums2[i+1] >= nums2[j]) insert(nums1, nums2[j], i, m + n);
            else if (i == m - 1 && nums1[i] <= nums2[j]) insert(nums1, nums2[j], i, m + n);
        }
    }
}
