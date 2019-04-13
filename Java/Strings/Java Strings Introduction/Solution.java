// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        String B = sc.next();
        System.out.println(A.length() + B.length());
        System.out.println(A.compareTo(B) > 0 ? "Yes" : "No");
        char[] a = A.toCharArray();
        char[] b = B.toCharArray();
        a[0] -= 32;
        b[0] -= 32;
        System.out.println(new String(a) + " " + new String(b));

    }
}