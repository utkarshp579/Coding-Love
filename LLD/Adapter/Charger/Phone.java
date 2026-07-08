/**
 * Step - 4
 * Phone
 */

public class Phone {
    private final USBCCharger charger;

    public Phone(USBCCharger charger) {
        this.charger = charger;
    }

    public void charge() {
        System.out.println("Phone expects USB-C charging");
        charger.chargeWithUSBC();
    }
}