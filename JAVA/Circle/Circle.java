/**
 * Kelas Circle memodelkan sebuah lingkaran dengan radius dan warna.
 */
public class Circle {    // Simpan sebagai "Circle.java"
   // Variabel instance private
   private double radius;
   private String color;

   // Konstruktor (kelebihan beban)
   /** Membuat instance Lingkaran dengan radius dan warna default */
   public Circle() {                   //Membuat instance Lingkaran dengan radius dan warna default
      radius = 1.0;
      color = "red";
   }
   /** Membuat instance Lingkaran dengan radius dan warna default yang diberikan*/
   public Circle(double r) {           // Konstruktor kedua
      radius = r;
      color = "red";
   }
   /** Membuat instance Lingkaran dengan radius dan warna yang diberikan */
   public Circle(double r, String c) { //  Konstruktor ketiga
      radius = r;
      color = c;
   }

   // Metode umum
   /** Mengembalikan radius */
   public double getRadius() {  // pengambil radius
      return radius;
   }
   /** Mengembalikan warna */
   public String getColor() {   // pengambil warna
      return color;
   }
   /** Mengembalikan area lingkaran ini */
   public double getArea() {
      return radius * radius * Math.PI;
   }
}