import java.text.*;
import java.util.*;
public class Solution {
    public static void main(String[] args) throws ParseException {
        ArrayList<Calendar> a = new ArrayList<Calendar>();
        Scanner s = new Scanner(System.in);
        while(s.hasNext()) {
            Calendar c = Calendar.getInstance();
            c.setTime(new SimpleDateFormat("dd MM YYYY").parse(s.next()+" "+s.next()+" "+s.next()));
            a.add(c);
        }
        a.sort((o1,o2) -> (o1.get(Calendar.DAY_OF_MONTH) - o2.get(Calendar.DAY_OF_MONTH)));
        a.sort((o1,o2) -> (o1.get(Calendar.MONTH) - o2.get(Calendar.MONTH)));
    }
}
