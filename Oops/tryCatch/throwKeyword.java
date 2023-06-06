
class VoteSystem  extends RuntimeException{
    VoteSystem(String s){
        super(s);
    }
    
}
public class throwKeyword {
    public static void main(String[] args) {
        int age = 8;
        try {
            if (age < 18) {
                throw new VoteSystem("you cant vote");
            }
            else{
                System.out.println("Vote successfully");
            }
            
        } 
        catch (VoteSystem e) {
            e.getStackTrace();
        }
        System.out.println("program done");
    }
    
}