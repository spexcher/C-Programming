import java.util.Scanner;

class p1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        // String name = scan.next(); // one word
        String full_name = scan.nextLine();

        System.out.println(full_name.charAt(0));

        // System.out.println(full_name.charAt(0));

        // int number = scan.nextInt(); // Integer
        // double number2 = scan.nextDouble(); // double
        // float number3 = scan.nextFloat(); // float

        scan.close();
        // System.out.println("Hello to you " + full_name);
    }
}