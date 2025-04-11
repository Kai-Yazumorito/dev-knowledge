public class Person {
    //Attributes
    private String name, last_name;
    private int age;
    private double height;

    //Methods
    Person() {
        this.name="";
        this.last_name="";
        this.age= 0;
        this.height=0.0;
    }

    //Constructor
    Person(String name, String last_name, int age, double height) {
        this.name=name;
        this.last_name=last_name;
        this.age=age;
        this.height=height;
    }

    //Getter and Setters
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name=name;
    }

    public String getLast_name() {
        return last_name;
    }

    public void setLast_name(String last_name) {
        this.last_name=last_name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age=age;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height=height;
    }

    public String showName() {
        return name+" "+last_name;
    }
}
