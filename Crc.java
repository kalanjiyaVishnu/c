import java.io.*;
import java.util.Scanner;

public class Crc {
public static void main(String[] args) { Scanner sc = new Scanner(System.in);
System.out.println("\u001B[36m ENTER THE DIVISOR: \u001B[0m "); 
String divi = sc.nextLine();
System.out.println("\n");
System.out.println("\u001B[33m ********************** SENDER SIDE ********************** \u001B[0m"); 
System.out.println("\n");
 
System.out.println("\u001B[36m ENTER THE MESSAGE TO BE SENT: ");
String msg = sc.nextLine(); 
String code = msg;
int len = divi.length(); while(len>1){
msg = msg + "0"; len--;
}
msg = code + div(msg,divi);
remainder += "1";
}while(pointer<msg.length())

    {
        if (remainder.charAt(0) == '0') {
            remainder = remainder.substring(1, remainder.length());
            remainder = remainder + String.valueOf(msg.charAt(pointer));
            pointer++;
        }
        result = remainder;
        remainder = "";
        for (int i = 0; i < divi.length(); i++) {
            if (result.charAt(i) == divi.charAt(i))
                remainder += "0";
            else
                remainder += "1";
        }
    }return remainder.substring(1,remainder.length()System.out.println("\u001B[36m THE TRANSMITTED DATA \u001B[0m ");System.out.println(msg);remainder+="1";}while(pointer<msg.length()){if(remainder.charAt(0)=='0'){remainder=remainder.substring(1,remainder.length());remainder=remainder+String.valueOf(msg.charAt(pointer));pointer++;}result=remainder;remainder="";for(
    int i = 0;i<divi.length();i++)
    {
        if (result.charAt(i) == divi.charAt(i))
            remainder += "0";
        else
            remainder += "1";
    }
}return remainder.substring(1,remainder.length());}
