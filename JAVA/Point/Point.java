/**
 * Kelas Titik memodelkan titik 2D pada (x, y).
 */
public class Point {
   // The private instance variables
   private int x, y;

   // The constructors (overloaded)
   /**Membuat instance Point dengan nilai default */
   public Point() {  // The default constructor
      this.x = 0;
      this.y = 0;
   }
   /** Membuat instance Titik dengan nilai x dan y yang diberikan */
   public Point(int x, int y) {
      this.x = x;
      this.y = y;
   }

   // Para pengambil dan penentu kebijakan publik
   /** Mengembalikan nilai x*/
   public int getX() {
      return this.x;
   }
   /**Menetapkan nilai x */
   public void setX(int x) {
      this.x = x;
   }
   /**Mengembalikan nilai y */
   public int getY() {
      return this.y;
   }
   /** Menetapkan nilai y */
   public void setY(int y) {
      this.y = y;
   }

   /**Mengembalikan string deskriptif mandiri dalam bentuk "(x,y)" */
   public String toString() {
      return "(" + this.x + "," + this.y + ")";
   }

   /** Mengembalikan sebuah array int 2-elemen yang berisi x dan y */
   public int[] getXY() {
      int[] results = new int[2];
      results[0] = this.x;
      results[1] = this.y;
      return results;
   }

   /** Menetapkan x dan y */
   public void setXY(int x, int y) {
      this.x = x;
      this.y = y;
   }

   /** Kembalikan jarak dari contoh ini ke titik yang diberikan di (x,y). Panggil melalui p1.distance(1,2) */
   public double distance(int x, int y) {
      int xDiff = this.x - x;
      int yDiff = this.y - y;
      return Math.sqrt(xDiff*xDiff + yDiff*yDiff);
   }
   /** Mengembalikan jarak dari instance ini ke instance Point yang diberikan. Memanggil melalui p1.distance(p2) */
   public double distance(Point another) {
      int xDiff = this.x - another.x;
      int yDiff = this.y - another.y;
      return Math.sqrt(xDiff*xDiff + yDiff*yDiff);
   }
   /** Mengembalikan jarak dari instance ini ke (0,0). Memanggil melalui p1.distance() */
   public double distance() {
      return Math.sqrt(this.x*this.x + this.y*this.y);
   }
}
