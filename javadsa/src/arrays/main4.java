package arrays;

import java.util.ArrayList;

public class main4 {

    public static void findDuplicate(int[] arr){
        int[] temp = new int[arr.length];

        ArrayList<Integer> ans = new ArrayList<>();

        for(int i = 0; i<arr.length; i++){
            temp[arr[i]]++;
        }

        System.out.println("printing duplicate number : ");
        for(int i = 0; i<arr.length; i++){
            if(temp[i] >1){
                ans.add(i);
            }
        }

       for(int x : ans){
            System.out.print(x + " ");
       }

        System.out.println();
    }

    public static void duplicate1(int[] arr){
        int n = arr.length;

        int[] temp = new int[n + 1];

        ArrayList<Integer> ans = new ArrayList<Integer>();

        for(int x : arr){
            temp[x]++;
        }

        for(int i = 1; i<=n; i++){
            if(temp[i]>1){
                ans.add(i);
            }
        }

        for(int num : ans){
            System.out.print(num + " ");
        }
    }

    public static void main(String[] args) {
        System.out.println("find duplicate number in array ");

        int[] arr = {10,2,8,9,8,5,5,3,7,3};

        // findDuplicate(arr);
        duplicate1(arr);
    }

}
