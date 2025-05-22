public class Valid_Anagram_main {
    public static void main(String[] args) {
        Solution solution = new Valid_Anagram_main().new Solution();
        System.out.println("Caso 1 - 'anagram' y 'nagaram':");
        System.out.println("¿Es anagrama? " + solution.isAnagram("anagram", "nagaram")); // true
        
        System.out.println("\nCaso 2 - 'rat' y 'car':");
        System.out.println("¿Es anagrama? " + solution.isAnagram("rat", "car")); // false
    }
    
    class Solution {
        public boolean isAnagram(String s, String t) {
            System.out.println("  Comparando: \"" + s + "\" con \"" + t + "\"");
            
            // Si las longitudes son diferentes, no pueden ser anagramas
            if (s.length() != t.length()) {
                System.out.println("  Las longitudes son diferentes: " + s.length() + " != " + t.length());
                return false;
            }
            
            // Creamos un array para contar las frecuencias de cada letra
            int[] charCount = new int[26]; // Para letras minúsculas inglesas (a-z)
            
            // Aumentamos el contador para los caracteres de s
            System.out.println("  Contando letras en \"" + s + "\":");
            for (int i = 0; i < s.length(); i++) {
                int index = s.charAt(i) - 'a';
                charCount[index]++;
                System.out.println("    Letra '" + s.charAt(i) + "' - posición " + index + " - contador: " + charCount[index]);
            }
            
            // Disminuimos el contador para los caracteres de t
            System.out.println("  Verificando letras en \"" + t + "\":");
            for (int i = 0; i < t.length(); i++) {
                int index = t.charAt(i) - 'a';
                charCount[index]--;
                System.out.println("    Letra '" + t.charAt(i) + "' - posición " + index + " - nuevo contador: " + charCount[index]);
                
                // Si algún contador se vuelve negativo, significa que t tiene más
                // ocurrencias de un carácter que s, por lo que no son anagramas
                if (charCount[index] < 0) {
                    System.out.println("    ¡Contador negativo para '" + t.charAt(i) + "'! No es un anagrama.");
                    return false;
                }
            }
            
            // Verificamos que todos los contadores sean cero
            System.out.println("  Verificación final de contadores:");
            for (int i = 0; i < charCount.length; i++) {
                if (charCount[i] > 0) {
                    System.out.println("    La letra '" + (char)(i + 'a') + "' tiene contador residual: " + charCount[i]);
                    return false;
                }
            }
            
            // Si llegamos aquí, todas las frecuencias coinciden
            System.out.println("  Todas las frecuencias coinciden. ¡Es un anagrama!");
            return true;
        }
    }
}