// Author: ZA7med ❤️‍🔥 
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        // BufferedReader I = new BufferedReader(new InputStreamReader(System.in));
        // Scanner I = new Scanner(new File("input.txt"));
        Scanner I = new Scanner(System.in);
        BufferedWriter O = new BufferedWriter(new OutputStreamWriter(System.out));
        Set<String> ans = new TreeSet<>();
        while (I.hasNext()){
            String[] line = I.nextLine().split("\\s*[^a-zA-Z]+\\s*");
            for (String s : line) {
                s = s.toLowerCase();
                String cp = new String();
                for (int i = 0; i < s.length(); i++)
                    if(Character.isAlphabetic(s.charAt(i))) cp += s.charAt(i);
                if(cp.length() > 0)
                    ans.add(cp);
            }
        }
        for (String s : ans) {
            O.write(s + "\n");
        }
        O.flush();
    }
}
