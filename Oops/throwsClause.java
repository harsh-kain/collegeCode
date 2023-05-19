class Myexception extends Exception {
    public String tostring(){
        return "Exception occur";
    }
    
}
public class throwsClause {
    static void func() throws Myexception{
        throw new Myexception();
    }
    public static void main(String[] args) {
        try {
            func();
        } 
        catch (Exception e) {
            System.out.println(e);    
        }
    }    
}