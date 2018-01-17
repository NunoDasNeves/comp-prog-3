import java.util.Scanner;
import java.util.Date;
import java.text.SimpleDateFormat;
import java.text.ParseException;
public class Solution {
    public static void main(String[] args) throws ParseException {
        System.out.println(new SimpleDateFormat("EEEE").format(new SimpleDateFormat("d MMMM yyyy").parse(new Scanner(System.in).nextLine())));
    }
}
