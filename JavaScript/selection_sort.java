import java.io.*;

public class selection_sort {
    void sort(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            int min_ind = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[min_ind]) {
                    min_ind = j;
                }
            }
            int temp = arr[min_ind];
            arr[min_ind] = arr[i];
            arr[i] = temp;
        }
    }

    public static void main(String args[]) {
        selection_sort ss = new selection_sort();
        int arr[] = { 3, 1, 5, 2, 9, 10 };
        ss.sort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
