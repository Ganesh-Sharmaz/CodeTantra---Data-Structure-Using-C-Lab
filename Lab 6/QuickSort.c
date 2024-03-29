void display(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
int partition(int arr[], int lb, int ub) {
  int x = arr[ub];
  int i = lb - 1;
  for (int j = lb; j <= ub - 1; j++) {
    if (arr[j] <= x) {
      i++;
      int temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
    }
  }
  int c = arr[i + 1];
  arr[i + 1] = arr[ub];
  arr[ub] = c;
  return (i + 1);
}
void quickSort(int arr[15], int low, int high) {
  if (low < high) {
    int q = partition(arr, low, high);
    quickSort(arr, low, q - 1);
    quickSort(arr, q + 1, high);
  }
}
