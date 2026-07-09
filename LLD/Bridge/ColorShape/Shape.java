public abstract class Shape {
    protected final Color color;

    protected Shape(Color color) {
        this.color = color;
    }

    public abstract String getShapeName();

    public String draw() {
        return "Drawing " + color.applyColor() + " " + getShapeName();
    }
}
