// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {
        int lenA = a.length(), lenB = b.length();
        if (lenA == lenB) {
            char[] cA = a.toLowerCase().toCharArray();
            char[] cB = b.toLowerCase().toCharArray();
            Arrays.sort(cA);
            Arrays.sort(cB);
            int i = 0;
            while (cA[i] == cB[i++] && i < lenA);
            return i == lenA;
        }
        return false;
    }
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println((ret) ? "Anagrams" : "Not Anagrams");
    }
}