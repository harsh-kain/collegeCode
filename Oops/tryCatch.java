public class tryCatch {

    public static void main(String[] args) {
        int a = 40;
        int b = 0;
        
        try {
            System.out.println(a/b);
            System.out.println("End to test block");
        }
        catch (ArithmeticException e) {
            System.out.println("divided by zero");
        }
        finally{
            System.out.println("this block is finally block");
        }
        System.out.println("End of main");

    }    
}