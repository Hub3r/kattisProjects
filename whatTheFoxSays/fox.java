import java.util.*;

public class fox {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        scan.nextLine();
        ArrayList<animal> animals = new ArrayList<animal>(); 
        String line;
        String animalSounds = "";
        for(int i = 0; i < testCases; i++) {
            line = scan.nextLine();
            animalSounds = scan.nextLine();
            do {
                //System.out.println(animalSounds);
                Scanner currentLine = new Scanner(animalSounds);
                String name = currentLine.next();
                currentLine.next();
                String sound = currentLine.next();
                animal a = new animal(name, sound);
                animals.add(a);
                animalSounds = scan.nextLine();
            } while(!animalSounds.equalsIgnoreCase("what does the fox say?"));
            Scanner lineEdit = new Scanner(line);
            String foxSays = "";

            String asStr[] = line.split(" ");
            ArrayList<String> lineArrayList = new ArrayList<String>();
            for(int j = 0; j < asStr.length; j++) {
                lineArrayList.add(asStr[j]);
            }
            
            System.out.println(editLine(lineArrayList, animals, line));
        }
    }

    private static String editLine(List<String> l, ArrayList<animal> a, String line) {
        for(int i = 0; i < l.size(); i++) {
            String currentToken = l.get(i);
            for(int j = 0; j < a.size(); j++) {
                String currentSound = a.get(j).getSound();
                //System.out.println(currentToken + ", " + currentSound);
                if(currentToken.equals(currentSound)) {
                    l.remove(i);
                    i--;
                    break;
                }
            }
        }
        line = "";
        for(int i = 0; i < l.size(); i++) {
            line = line + l.get(i) + " ";
        }
        return line;
    }
}   
