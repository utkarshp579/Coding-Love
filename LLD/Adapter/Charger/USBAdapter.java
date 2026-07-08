/**
 * Step - 3
 * USBAdapter
 * // is a relationship with target interface
 */
// bridges between MicroUSBCharger &  USBCCharger
public class USBAdapter implements USBCCharger { // is a relationship with target interface
    private final MicroUSBCharger microUSBCharger; // has - a relationship with adaptee. 

    public USBAdapter(MicroUSBCharger microUSBCharger) {
        this.microUSBCharger = microUSBCharger;
    }

    @Override
    public void chargeWithUSBC() {
        System.out.println("Adapter converts USB-C request to Micro-USB charging");
        microUSBCharger.chargeWithMicroUSB();
    }
}