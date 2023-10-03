/**
 * Kelas Waktu memodelkan instance waktu dengan detik, menit, dan jam.
 * Kelas ini tidak melakukan validasi input untuk detik, menit, dan jam.
 */
public class Time {
   // The private instance variables
   private int second, minute, hour;

   // The constructors (overloaded)
   /** Membuat instance Waktu dengan detik, menit, dan jam yang diberikan. Tidak ada validasi masukan */
   public Time(int second, int minute, int hour) {
      this.second = second;
      this.minute = minute;
      this.hour = hour;
   }
   /** Membuat instance Time dengan nilai default */
   public Time() {  // the default constructor
      this.second = 0;
      this.minute = 0;
      this.hour = 0;
   }

   // The public getters/setters for the private variables.
   /** Mengambalikan detik */
   public int getSecond() {
      return this.second;
   }
   /** Mengembalikan menit */
   public int getMinute() {
      return this.minute;
   }
   /** Mengembalikan jam */
   public int getHour() {
      return this.hour;
   }
   /** Mengatur detik. No input validation */
   public void setSecond(int second) {
      this.second = second;
   }
   /** Mengatur menit. No input validation */
   public void setMinute(int minute) {
      this.minute = minute;
   }
   /** Mengatur jam. No input validation */
   public void setHour(int hour) {
      this.hour = hour;
   }

   /** Mengembalikan string deskriptif mandiri dalam bentuk "hh: mm: dd" dengan nol di depan */
   public String toString() {
        // Gunakan fungsi bawaan String.format() untuk membentuk String yang diformat
        return String.format("%02d:%02d:%02d", hour, minute, second);
              // Penentu "0" untuk mencetak angka nol di depan, jika tersedia.
   }

   /** Menetapkan detik, menit, dan jam ke nilai tertentu */
   public void setTime(int second, int minute, int hour) {
      // No input validation
      this.second = second;
      this.minute = minute;
      this.hour = hour;
   }

   /** Memajukan instance Waktu ini satu detik, dan mengembalikan instance ini untuk mendukung perantaian*/
   public Time nextSecond() {
      ++second;
      if (second >= 60) {
         second = 0;
         ++minute;
         if (minute >= 60) {
            minute = 0;
            ++hour;
            if (hour >= 24) {
               hour = 0;
            }
         }
      }
      return this;   // Return "this" instance, to support chaining operations
                     // e.g., t1.nextSecond().nextSecond()
   }
}
