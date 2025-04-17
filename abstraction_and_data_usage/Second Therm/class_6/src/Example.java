import java.util.Scanner;


public class Example {
    public static void main(String[] args) {
        Person personal=new Person();
        @SuppressWarnings("resource")
        Scanner inputData=new Scanner(System.in);

        String name, last_name;
        int age;
        double height;

        System.out.println("Type the name of the person: ");
        name=inputData.next();
        personal.setName(name);

        System.out.println("Type the last name of the person: ");
        last_name=inputData.next();
        personal.setLast_name(last_name);

        System.out.println("Type the age of the person: ");
        age=inputData.nextInt();
        personal.setAge(age);

        System.out.println("Type the height of the person: ");
        height=inputData.nextDouble();
        personal.setHeight(height);

        Person dataPersonal=new Person(name, last_name, age, height);

        System.out.println("Type the Student ID: ");
        String studentID=inputData.next();

        System.out.println("Type your major : ");
        String major=inputData.next();

        System.out.println("Type your GPA: ");
        double gpa=inputData.nextDouble();

        Student student=new Student(dataPersonal, studentID, major, gpa);

        student.greet();
        student.showStudentInfo();

        if(student.isRegular()) {
            System.out.println("Status: Regular student.");
        } else {
            System.out.println("Status: Irregular student.");
        }

        System.out.println("The name of the person is: "+personal.showName());
    }
}