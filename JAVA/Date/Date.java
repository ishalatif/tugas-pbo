/**
 * Kelas Date memodelkan tanggal kalender dengan hari, bulan, dan tahun.
 * Kelas ini tidak melakukan validasi input untuk hari, bulan, dan tahun.
 */
public class Date {
   // The private instance variables
   private int year, month, day;

   /** Membuat instance Date dengan tahun, bulan, dan hari tertentu. Tidak ada validasi masukan */
   public Date(int year, int month, int day) {
      this.year = year;
      this.month = month;
      this.day = day;
   }

   // Pengambil/penyetel publik untuk variabel privat
   /** Mengembalikan tahun */
   public int getYear() {
      return this.year;
   }
   /** Mengembalikan bulan */
   public int getMonth() {
      return this.month;
   }
   /** Mengembalikan hari */
   public int getDay() {
      return this.day;
   }
   /** Menetapkan tahun. Tidak ada validasi masukan */
   public void setYear(int year) {
      this.year = year;
   }
   /** Menetapkan bulan. Tidak ada validasi masukan */
   public void setMonth(int month) {
      this.month = month;
   }
   /** Menetapkan hari. Tidak ada validasi masukan */
   public void setDay(int day) {
      this.day = day;
   }

   /* Mengembalikan String deskriptif dalam bentuk "MM/DD/YYYY" dengan nol di depan */
   public String toString() {
        // Gunakan fungsi bawaan String.format() untuk membentuk String yang diformat
        return String.format("%02d/%02d/%4d", month, day, year);
              // Penentu "0" untuk mencetak angka nol di depan
   }

   /** Menetapkan tahun, bulan, dan hari. Tidak ada validasi input */
   public void setDate(int year, int month, int day) {
      this.year = year;
      this.month = month;
      this.day = day;
   }
}