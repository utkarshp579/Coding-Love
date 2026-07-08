/**
 * Step - 4
 * Client class that expects weight in kilograms.
 * Person
 */

public class Person {
    private final WeightMachine weightMachine;

    public Person(WeightMachine weightMachine) {
        this.weightMachine = weightMachine;
    }

    public void showWeight() {
        double weightInKg = weightMachine.getWeightInKg();
        System.out.printf("Person gets weight as %.2f kg%n", weightInKg);
    }
}