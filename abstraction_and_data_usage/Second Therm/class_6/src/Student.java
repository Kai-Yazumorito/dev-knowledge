public class Student {
    private Person dataPersonal;
    private String studentID;
    private String major;
    private double gpa;

    public Student() {
        this.dataPersonal=new Person();
        this.studentID="";
        this.major="";
        this.gpa=0.0;
    }

    public Student(Person dataPersonal, String studentID, String major, double gpa) {
        this.dataPersonal=dataPersonal;
        this.studentID=studentID;
        this.major=major;
        this.gpa=gpa;
    }

    public void showStudentInfo() {
        System.out.println("Full Name: "+dataPersonal.showName());
        System.out.println("Age: "+dataPersonal.getAge());
        System.out.println("Student ID: "+studentID);
        System.out.println("Major: "+major);
        System.out.println("GPA: "+gpa);
    }

    public boolean isRegular() {
        return gpa>=6.0;
    }

    public void greet() {
        System.out.println("Hi, my name is "+dataPersonal.getName()+" and I study "+major+".");
    }
}