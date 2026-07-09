public abstract class Notification {
    protected final MessageSender messageSender; // has - a , Composition. // MSGSndr can also grow.

    protected Notification(MessageSender messageSender) {
        this.messageSender = messageSender;
    }

    public abstract String getType();

    public void notifyUser(String message) {
        messageSender.send("[" + getType() + "] " + message);
    }
}
