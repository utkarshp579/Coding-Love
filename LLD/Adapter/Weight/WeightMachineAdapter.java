/**
 * Step - 3
 * Adapter that converts pounds into kilograms.
 * WeightMachineAdapter
 */

public class WeightMachineAdapter implements WeightMachine {
    private final OldWeightMachine oldWeightMachine;

    public WeightMachineAdapter(OldWeightMachine oldWeightMachine) {
        this.oldWeightMachine = oldWeightMachine;
    }

    @Override
    public double getWeightInKg() { // get weight in KG can use older function because he has an instance of it. he is implementing the function of target interfaces writing conversion logic into it. 
        double weightInPounds = oldWeightMachine.getWeightInPound();
        double weightInKg = weightInPounds * 0.4535;
        System.out.printf("Adapter converts %.0f lb to %.2f kg%n", weightInPounds, weightInKg);
        return weightInKg;
    }
}