/*
UVA 10679

*/

import java.util.Scanner;
public class Main {
  public static void main (String[]args){
    Scanner scc= new Scanner(System.in);
    int t = scc.nextInt();
    for(int i=0;i<t;i++){
      String st=scc.next();
      boolean b= false;
      int p=scc.nextInt();
      for(int ii=0;ii<p;ii++){
        String s=scc.next();
        int c=0,k=0;
        for(int j=0;j<st.length();j++){
          if(st.charAt(j)==s.charAt(k)){
           k++;
           c++;
          if(c==s.length())
            break;
          }
          else {
            c=0;
            k=0;
          }
          if(k>=s.length())
            break;
        }
        
        if(c==s.length())
          System.out.println("y");
        else
           System.out.println("n");
      }}}
    }
