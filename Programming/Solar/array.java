import java.util.Scanner;
public class array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n = sc.nextInt();
        // 5 6 45 3 -6
        int arr[] = new int[n];
        // arr[0] = 5;
        // arr[1] = 6;
        // arr[2] = 45;
        // arr[3] = 3;
        // arr[4] = -6;
        System.out.println(arr.length);
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
            sum = sum + arr[i];
        }
        System.out.println("The sum is " + sum);
    }
}
