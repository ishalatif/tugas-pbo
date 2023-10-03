/**
 * Kelas Account memodelkan sebuah rekening bank dengan sebuah saldo.
 */
public class Account {
   // The private instance variables
   private int number;
   private double balance;

   // The constructors (overloaded)
   /** Membuat instance Akun dengan nomor yang diberikan dan saldo awal 0 */
   public Account(int number) {
      this.number = number;
      this.balance = 0.0;  // "this." is optional
   }
   /** Membuat instance Akun dengan nomor dan saldo awal yang diberikan */
   public Account(int number, double balance) {
      this.number = number;
      this.balance = balance;
   }

   // Pengambil/penyetel publik untuk variabel-variabel instance privat.
   // Tidak ada pengatur untuk nomor karena tidak didesain untuk diubah.
   // Tidak ada pengatur untuk saldo karena diubah melalui kredit() dan debit()
   /** Mengembalikan nomor */
   public int getNumber() {
      return this.number;  // "this." is optional
   }
   /** Mengembalikan saldo */
   public double getBalance() {
      return this.balance;  // "this." is optional
   }

   /** Mengembalikan deskripsi string dari instance ini */
   public String toString() {
      // Gunakan fungsi bawaan System.format() untuk membentuk String yang diformat
      return String.format("Account[number=%d,balance=$%.2f]", number, balance);
   }

   /** Tambahkan jumlah yang diberikan ke saldo */
   public void credit(double amount) {
      balance += amount;
   }

   /** Kurangi jumlah yang diberikan dari saldo, jika saldo >= jumlah*/
   public void debit(double amount) {
      if (balance >= amount) {
         balance -= amount;
      } else {
         System.out.println("amount exceeded");
      }
   }

   /** Transfer jumlah yang diberikan ke Rekening lain, jika saldo >= jumlah */
   public void transferTo(double amount, Account another) {
      if (balance >= amount) {
         this.balance -= amount;
         another.balance += amount;
      } else {
         System.out.println("amount exceeded");
      }
   }
}