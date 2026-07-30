package arrays;

public class Main1 {

    public static void segregate(int[] arr) {

        int count = 0;

        for (int x : arr) {
            if (x == 0) {
                count++;
            }
        }

        // fill the value with 0 count

        for (int i = 0; i < count; i++) {
            arr[i] = 0;
        }

        // fill the value with 1 count

        for (int i = count; i < arr.length; i++) {
            arr[i] = 1;
        }

    }

    // using two pointer approach

    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void segregate1(int[] arr) {

        // System.out.println("Start segregating");
        int start = 0;

        int end = arr.length - 1;

        while (start <= end) {
            if (arr[start] == 0) {
                start++;
            } else {
                swap(arr, start, end);
                end--;
            }
        }

        // System.out.println("finishing segregating");
    }

    public static void main(String[] args) {
        System.out.println("sort 0 and 1 in array");

        int[] arr = { 0, 1, 0, 1, 0, 0, 1, 1, 1, 0 };

        for (int x : arr) {
            System.out.print(x + " ");
        }

        System.out.println();

        segregate1(arr);

        System.out.println("After segregating print array");
        for (int x : arr) {
            System.out.print(x + " ");
        }

        System.out.println();
    }

}
