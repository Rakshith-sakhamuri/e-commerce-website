
class student {
    int age;
    String name;

    public void printInfo(String name) {
        System.out.println(name);
    }

    public void printInfo(int age) {
        System.out.println(age);
    }

    public void printInfo(String name, int age) {
        System.out.println(name + " " + age);
    }
}

class Shape {
    public void area() {
        System.out.println("display area");
    }
}

class Triangle extends Shape {
    public void area(int l, int h) {
        System.out.println((l * h) / 2);
    }
}

public class oops {
    public static void main(String args[]) {
        Triangle 
    }
}