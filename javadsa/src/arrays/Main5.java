package arrays;

import java.util.Arrays;

public class Main5 {

    public static void method1(int[] arr) {
        Arrays.sort(arr);

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != i + 1) {
                System.out.print(i + 1 + " ");
            }
        }

        System.out.println();
    }

    public static void method2(int[] arr) {

        int n = arr.length;

        int[] temp = new int[n + 1];

        for (int i = 0; i < arr.length; i++) {
            temp[arr[i]]++;
        }

        for (int i = 1; i <= n; i++) {
            if (temp[i] == 0) {
                System.out.print(i + " ");
            }
        }

        System.out.println();
    }

    public static void method3(int[] arr) {

        for (int i = 0; i < arr.length; i++) {
            int index = Math.abs(arr[i]) - 1;

            if (arr[index] > 0) {
                arr[index] *= -1;
            }
        }

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > 0) {
                System.out.print(i + 1 + " ");
            }
        }

        System.out.println();

    }

    public static void main(String[] args) {
        System.out.println("Array data structure ");
        System.out.println("Missing element from an array");

        int[] arr = { 1, 2, 3, 4, 4, 7, 7 };

        method1(arr);
        method2(arr);
        method3(arr);
        
    }

}
