public class RegularNotification extends Notification {
    public RegularNotification(MessageSender messageSender) {
        super(messageSender);
    }

    @Override
    public String getType() {
        return "Regular Notification";
    }
}
