package arrays;

import java.util.ArrayList;

public class Main2 {

    // move negative to the left side of array
    public static void moveNegative(int[] arr) {

        int[] temp = new int[arr.length];
        int count = 0;

        // move all positive element to the temp array
        for (int x : arr) {
            if (x > 0) {
                temp[count++] = x;
            }
        }

        // move all negative element to the temp array
        for (int x : arr) {
            if (x < 0) {
                temp[count++] = x;
            }
        }

        // move element to the temp array to original array

        for (int i = 0; i < arr.length; i++) {
            arr[i] = temp[i];
        }

    }

    // move negative to left side of array
    public static void moveNegative1(int[] arr) {
        int negativecount = 0;

        for (int i = arr.length - 1; i >= 0; i--) {
            if (arr[i] < 0) {
                negativecount++;

                int temp = arr[i];
                int j;
                for (j = i; j < arr.length - negativecount; j++) {
                    arr[j] = arr[j + 1];
                }
                arr[j] = temp;
            }
        }
    }

    // move negative part3;

    public static void move1(int[]arr){
        ArrayList<Integer> temp = new ArrayList<Integer>();

        for(int x : arr){
            if(x > 0){
                temp.add(x);
            }
        }

        for(int x : arr){
            if(x < 0){
                temp.add(x);
            }
        }

        for(int i = 0; i<temp.size(); i++){
            arr[i] = temp.get(i);
        }
    }

    public static void main(String[] args) {
        System.out.println("move all negative number to the left side of array");

        int[] arr = { 1, -1, 3, 2, -7, -5, 11, 6 };

        // print array
        for (int x : arr) {
            System.out.print(x + " ");
        }

        // moveNegative(arr);
        // moveNegative1(arr);
        move1(arr);

        System.out.println();
        for (int x : arr) {
            System.out.print(x + " ");
        }

        System.out.println();

        System.out.println(arr);
    }

}
