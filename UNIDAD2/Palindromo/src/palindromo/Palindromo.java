/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package palindromo;
import java.util.Scanner;
/**
 *
 * @author JA
 */
public class Palindromo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner teclado= new Scanner(System.in);
        String palabra;
        pali objclass = new pali();
        System.out.println("DAME UNA PALBRA");
        palabra = teclado.nextLine();
        
        if(objclass.espalindromo(palabra)){
            System.out.println("La palabra " + palabra + " es un palindromo");
        }
        else{
            System.out.println("La palabra "+ palabra + " no es un palindromo");
        }
    
}
}
