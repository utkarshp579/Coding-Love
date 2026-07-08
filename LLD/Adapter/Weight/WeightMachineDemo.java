/**
 * Demo
 * Last step.
 */

public class WeightMachineDemo {
    public static void main(String[] args) {
        OldWeightMachine oldWeightMachine = new OldWeightMachine();
        WeightMachine adapter = new WeightMachineAdapter(oldWeightMachine);
        Person person = new Person(adapter);

        person.showWeight();
    }
}