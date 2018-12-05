/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package palindromo;

/**
 *
 * @author JA
 */
public class pali {
    public static boolean espalindromo(String cadena) {
        if (cadena.length() <= 1) {
            return true;
        } else {
            if (cadena.charAt(0) == cadena.charAt(cadena.length() - 1)) {
                return espalindromo(cadena.substring(1, cadena.length() - 1));
            } else {
                return false;
            }
        }
    }
    
}
