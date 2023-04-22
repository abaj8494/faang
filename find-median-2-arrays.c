double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int totalSize = nums1Size + nums2Size;
    int merged[totalSize];
    int i = 0, j = 0, k = 0;

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    while (i < nums1Size) {
        merged[k++] = nums1[i++];
    }

    while (j < nums2Size) {
        merged[k++] = nums2[j++];
    }

    if (totalSize % 2 == 0) {
        return (double)(merged[totalSize/2] + merged[totalSize/2 - 1])/2;
    } else {
        return (double)merged[totalSize/2];
    }
}


