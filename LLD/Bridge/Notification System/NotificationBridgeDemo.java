public class NotificationBridgeDemo {
    public static void main(String[] args) {
        Notification urgentEmail = new UrgentNotification(new EmailSender());
        Notification urgentSms = new UrgentNotification(new SMSSender());
        Notification regularPush = new RegularNotification(new PushSender());

        urgentEmail.notifyUser("Server is down");
        urgentSms.notifyUser("Payment failed");
        regularPush.notifyUser("Your report is ready");
    }
}
