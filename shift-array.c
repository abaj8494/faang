int *shift_arr(int *arr, int n, int size) {
    int i, j;
    for (i = 0; i < n; i++) {
        int last = arr[size - 1];
        for (j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}
