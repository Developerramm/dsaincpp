package arrays;

public class main3 {

    public static void swap(int[] arr, int i, int j) {

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void moveNegativeToBegining(int[] arr) {
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            if (arr[start] < 0) {
                start++;
            } else {
                swap(arr, start, end);
                end--;
            }
        }
    }

    public static void main(String[] args) {

        int[] arr = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };

        for (int x : arr) {
            System.out.print(x + " ");
        }

        System.out.println();

        moveNegativeToBegining(arr);

        for (int x : arr) {
            System.out.print(x + " ");
        }

        System.out.println();

    }

}
