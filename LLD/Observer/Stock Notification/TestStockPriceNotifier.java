class StockPriceNotifier {
    private int price;
    public void updatePrice(int price) {
        this.price = price;
        EmailService.send("Price is Changed." , this.price);
        SMSService.send("SM is Changed.");
        // notifySMS();
        // notifyAPP();
    }
}

class EmailService {
    public static void send(String message , int price) {
        System.out.println("Email Sent " + message + " " + price);
    }
}
class SMSService {
    public static void send(String message) {
        System.out.println("SMS Sent " + message);
    }
}

public class TestStockPriceNotifier {
    public static void main(String[] args) {
        StockPriceNotifier notifier = new StockPriceNotifier();
        notifier.updatePrice(100);
    }
}