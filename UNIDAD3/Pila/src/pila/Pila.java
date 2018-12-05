/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pila;
import java.util.Scanner;

/**
 *
 * @author JA
 */
public class Pila {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in); 
       pila1 P = new pila1();
       String palabra = new String();
       
       System.out.println("DAME PALABRA");
       palabra = sc.nextLine();
       P.pila1(palabra);
       
       
       
      
      
    }
    
}
