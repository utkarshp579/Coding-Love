// Flyweight (Interface ) - for the flyweight object - defines method that use extrinsic state. 
public interface ILetter {
    // The position(row , column) is extrinsic data - unique to each other
    void display(int row, int column);
    
} 