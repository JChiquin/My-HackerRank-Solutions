// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

import java.io.*;
import java.util.*;
public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        if (scan.hasNext()) {
            StringBuilder S = new StringBuilder(scan.nextLine().trim());
            if (!Character.isLetter(S.charAt(S.length() - 1))) S.deleteCharAt(S.length() - 1);

            int size = S.length(), tokens = 1;
            for (int i = 1; i < size; i++)
                if (!Character.isLetter(S.charAt(i)) && Character.isLetter(S.charAt(i - 1))) {
                    S.setCharAt(i, '\n');
                    tokens++;
                }
            else if (!Character.isLetter(S.charAt(i))) {
                S.deleteCharAt(i--);
                size = S.length();
            }
            if (!Character.isLetter(S.charAt(0))) S.deleteCharAt(0);
            System.out.print(S.length() == 0 ? 0 : tokens + "\n" + S);
        } else
            System.out.print(0);
    }
}