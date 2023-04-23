// time complexity O(m)
int abs(int num) {
    return num >= 0 ? num : -num;
}

int maxDistance(int** arrays, int arraysSize, int* arraysColSize){
    int max = 0;
    for (int i = 0; i < arraysSize; i++) {
        for (int j = 0; j < arraysColSize[i]; j++) {
            for (int k = i + 1; j < arraysSize; j++) {
                for (int l = 0; l < arraysColSize[k]; l++) {
                    int diff = abs(arrays[i][j] - arrays[k][l]);
                    if (diff > max) max = diff;
                }
            }

        }
    }
    return max;
}

int main(void)
{
    int arr1[] = {1,2,3};
    int arr2[] = {4,5};
    int arr3[] = {1,2,3};
    int *arr[3] = {arr1, arr2, arr3};
    int arrsizes[] = {3, 2, 3};
    maxDistance(arr, 3, arrsizes);
}
