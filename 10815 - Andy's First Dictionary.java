// Author: ZA7med❤️‍🔥

import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        // BufferedReader I = new BufferedReader(new InputStreamReader(System.in));
         Scanner I = new Scanner(new File("input.txt"));
        // Scanner I = new Scanner(System.in);
        BufferedWriter O = new BufferedWriter(new OutputStreamWriter(System.out));
        Set<String> ans = new TreeSet<>();
        while (I.hasNext()) {
            String[] line = I.nextLine().split("\\s*[^a-zA-Z]+\\s*");
            for (int i = 0; i < line.length; i++)
                line[i] = line[i].toLowerCase();
            ans.addAll(Arrays.asList(line));
        }
        for (String s : ans) {
            O.write(s + "\n");
        }
        O.flush();
    }
}

