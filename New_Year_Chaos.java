import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for(int a0 = 0; a0 < T; a0++){
            int n = in.nextInt();
            int a[] = new int[n];
            for(int q_i=0; q_i < n; q_i++){
                a[q_i] = in.nextInt();
            }
            int count=0,p=0;
            
            for(int i=0;i<n;i++){
                if((a[i]-(i+1))>2){
                    p=1;
                    break;
                }
            }
            
            if(p==1)
                System.out.println("Too chaotic");
            else{
            for(int i=1;i<n;i++){
                int j=i-1;
                int k=a[i];
                for(j=i-1;j>=0&&a[j]>k;j--){
                    a[j+1]=a[j];
                    count++;
                }
                a[j+1]=k;
            }
                System.out.println(count);
            }
        }
    }
}

