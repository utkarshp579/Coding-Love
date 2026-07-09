public class UrgentNotification extends Notification {
    public UrgentNotification(MessageSender messageSender) {
        super(messageSender);
    }

    @Override
    public String getType() {
        return "Urgent Notification";
    }
}
