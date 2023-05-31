// Press ⇧ twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static int func(int x) {
        return x + 1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        String b = sc.next();
        System.out.println(func(4));
    }
}