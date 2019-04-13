// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        int i = 0, j = A.length() - 1;
        char[] a = A.toCharArray();
        while (A.charAt(i) == A.charAt(j) && i++ < j--);
        System.out.print(i > j ? "Yes" : "No");
    }
}