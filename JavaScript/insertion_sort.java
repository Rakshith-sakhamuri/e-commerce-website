public class insertion_sort {
    void sort(int arr[]) {
        int n = arr.length;
        for (int i = 1; i < n; i++) {
            int j = i - 1;
            int key = arr[i];
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    public static void main(String args[]) {
        insertion_sort is = new insertion_sort();
        int arr[] = { 9, 8, 76, 5, 3, 2 };
        is.sort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
