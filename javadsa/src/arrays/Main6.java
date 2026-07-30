package arrays;

public class Main6 {

    public static void method1(int[] arr) {

        boolean flag = false;

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] == arr[j]) {
                    System.out.println(arr[i]);
                    // System.out.println(i + 1);
                    flag = true;
                    break;
                }
            }

            if (flag) {
                break;
            }
        }

    }

    public static void main(String[] args) {
        System.out.println("First repeating element");

        int[] arr = { 1, 5, 3, 4, 3, 5, 6 };

        method1(arr);

    }

}
