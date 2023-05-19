
public class stackTrace {

    static void check(){
        try {
            int a = 5 / 0;
        } 
        catch (Exception e) {
            System.out.println("In catch block");
            e.printStackTrace();           
        }
    }

    static void check2(){
        check();
    }
    public static void main(String[] args) {
        check2();        
    }
    
}