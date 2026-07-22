// create flyweight (class) - implements Flyweight interface and stores intrinsic state

public class DocumentCharacter implements ILetter {
    // intrinsic data - shared data - common to all object. // immutable --> Private & Getter 
    private final char character;
    private final String fontType;
    private final int size;

    DocumentCharacter(char character, String fontType, int size) {
        this.character = character;
        this.fontType = fontType;
        this.size = size;
    }

    // getter method only.

    // behaviour Methods
    public void display(int row, int column) { // extrinsic state are passed by client
        // displaying the character of particular font and size at given location
        System.out.println("Displaying " + character + " at row " + row + " and column " + column + ". Its Fonttype is " + fontType + " and its character size is " + size);
    }
}