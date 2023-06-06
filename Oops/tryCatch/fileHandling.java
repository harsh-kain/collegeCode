import java.io.*;
import java.util.Scanner;

public class fileHandling {
    public static void main(String[] args) throws IOException {
        FileInputStream fin = new FileInputStream("harsh.txt");
        FileOutputStream fout = new FileOutputStream("harsh.txt");
        String ch;
        int i;
        Scanner sc = new Scanner(System.in);
        try {
            ch = sc.nextLine();
            for(int j = 0; j<ch.length(); j++){
                fout.write(ch.charAt(j));
            }
        } catch (IOException e) {
            System.out.println(e);
        }
        finally{
            fout.close();
        }

        try {
            while ((i = fin.read()) != -1) {
                System.out.print((char)i);
            }
        } catch (Exception e) {
            System.out.println(e);
        }
        finally{
            fin.close();
        }
    }
}
