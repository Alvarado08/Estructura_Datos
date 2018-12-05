/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pila;

/**
 *
 * @author JA
 */
class pila1 {
    void pila1 (String palabra){
    String palabrainvertida = new String();
    for (int i = palabra.length()-1; i>=0; i--){
            palabrainvertida += palabra.charAt(i);
        }
    System.out.println("LA PALABRA INVERTIDA ES: " + palabrainvertida);
    }

    
    
}