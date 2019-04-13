// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

import java.util.*;
import java.io.*;

class Solution {
    public static void main(String[] argh) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        int a, b, n, serie;
        for (int i = 0; i < t; i++) {
            a = in.nextInt();
            b = in.nextInt();
            n = in.nextInt();
            serie = a;
            for (int j = 0; j < n; j++) {
                serie += Math.pow(2, j) * b;
                System.out.print(serie + " ");
            }
            System.out.println();
        } 
        in.close();
    }
}