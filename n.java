interface Payment {
    void pay(int amount);
}

class GooglePay implements Payment {

    public void pay(int amount) {
        System.out.println("Paid using Google Pay: " + amount);
    }
}

class PhonePe implements Payment {

    public void pay(int amount) {
        System.out.println("Paid using PhonePe: " + amount);
    }
}