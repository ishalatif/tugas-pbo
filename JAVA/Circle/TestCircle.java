/**
 * Pengemudi Tes untuk kelas "Circle"
 */
public class TestCircle {    // Simpan sebagai "TestCircle.java"
   public static void main(String[] args) {   // Titik masuk program
      // Mendeklarasikan dan membangun sebuah instance dari kelas Circle bernama c1
      Circle c1 = new Circle(2.0, "blue");  // Gunakan konstruktor ke-3
      System.out.println("Radiusnya adalah: " + c1.getRadius());  // menggunakan operator titik untuk memanggil metode anggota
      //Radiusnya adalah: 2,0
      System.out.println("Warnanya adalah: " + c1.getColor());
      //Warnanya adalah: biru
      System.out.printf("Luasnya adalah: %.2f%n", c1.getArea());
      //Luasnya adalah: 12.57

      // Mendeklarasikan dan membangun sebuah instance dari kelas Circle bernama c2
      Circle c2 = new Circle(2.0);  // Gunakan konstruktor ke 2
      System.out.println("Radiusnya adalah: " + c2.getRadius());
      //Radiusnya adalah: 2.0
      System.out.println("Radiusnya adalah: " + c2.getColor());
      //Radiusnya adalah: merah
      System.out.printf("Luasnya adalah: %.2f%n", c2.getArea());
      //Luasnya: 12.57

      // Mendeklarasikan dan membangun sebuah instance dari kelas Circle bernama c3
      Circle c3 = new Circle();  // Use 1st constructor
      System.out.println("Radiusnya adalah: " + c3.getRadius());
      //Radiusnya adalah: 1.0
      System.out.println("Warnanya adalah: " + c3.getColor());
      //Warnanya adalah: merah
      System.out.printf("Luasnya: %.2f%n", c3.getArea());
      //Luasnya adalah: 3.14
   }
}
