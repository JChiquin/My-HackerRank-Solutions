// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String S = scan.next();
        int k = scan.nextInt();
        String menor, mayor, temp;
        menor = mayor = S.substring(0, k);
        int size = S.length() - k;
        for (int i = 1; i <= size; i++) {
            temp = S.substring(i, i + k);
            if (mayor.compareTo(temp) < 0)
                mayor = temp;
            else if (menor.compareTo(temp) > 0)
                menor = temp;
        }
        System.out.printf("%s%n%s", menor, mayor);
    }
}