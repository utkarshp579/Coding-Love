
/**
 * Demo
 * Last step. 
*/
public class ChargerAdapterDemo {
    public static void main(String[] args) {
        MicroUSBCharger oldCharger = new MicroUSBCharger();
        USBCCharger adapter = new USBAdapter(oldCharger);
        Phone phone = new Phone(adapter);

        phone.charge();
    }
}