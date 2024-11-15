public class TinHieu {
    // Hàm tín hiệu
    public static void hienThiTinHieu(String thongBao) {
        System.out.println(">>> TÍN HIỆU: " + thongBao + " <<<");
    }

    public static void main(String[] args) {
        // Gọi hàm tín hiệu để kiểm tra
        hienThiTinHieu("Chương trình đang chạy");
        hienThiTinHieu("Hoàn thành một tác vụ");
    }
}
