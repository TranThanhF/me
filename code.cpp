import java.util.Scanner;

public class PhepChia {
    // Hàm tính UCLN bằng thuật toán Euclid
    public static int UCLN(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Nhập hai số
        System.out.print("Nhập số thứ nhất (a): ");
        double a = scanner.nextDouble();

        System.out.print("Nhập số thứ hai (b): ");
        double b = scanner.nextDouble();

        // Kiểm tra điều kiện b != 0
        if (b == 0) {
            System.out.println("Lỗi: Không thể chia cho 0!");
        } else {
            double thuong = a / b;
            System.out.println("Thương của " + a + " và " + b + " là: " + thuong);
        }

        // Hàm tính UCLN
        System.out.print("Nhập số nguyên thứ nhất (UCLN): ");
        int num1 = scanner.nextInt();
        System.out.print("Nhập số nguyên thứ hai (UCLN): ");
        int num2 = scanner.nextInt();

        // Tính và in ra UCLN
        System.out.println("Ước chung lớn nhất của " + num1 + " và " + num2 + " là: " + UCLN(num1, num2));

        // Kiểm tra số chẵn hay lẻ
        System.out.print("Nhập một số nguyên: ");
        int number = scanner.nextInt();

        if (number % 2 != 0) {
            System.out.println(number + " là số lẻ.");
        } else {
            System.out.println(number + " là số chẵn.");
        }

        // Thêm phần tính tổng
        System.out.print("Nhập một số nguyên thứ nhất để tính tổng: ");
        int num3 = scanner.nextInt();
        System.out.print("Nhập một số nguyên thứ hai để tính tổng: ");
        int num4 = scanner.nextInt();

        int sum = num3 + num4;
        System.out.println("Tổng của " + num3 + " và " + num4 + " là: " + sum);

        scanner.close();
    }
}
