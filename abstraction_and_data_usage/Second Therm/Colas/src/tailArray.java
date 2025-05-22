public class tailArray {
    //Attibutes
    private static final int Max_size=5;
    private int front;
    private int last;
    private int []tail;


    //Constructor
    public tailArray() {
        front = 0;
        last = -1;
        tail = new int[Max_size];
    }

    //Methods
    public void add(int element) throws Exception {     //Without the "throw Exception" the program will overflow.
        if (fullTail()) {
            tail[++last] = element;
        } else {
            throw new Exception("Error. The tail is full.");
        }
    }

    public int remove() throws Exception {
        if (emptyTail()) {
            return tail(front++);
        } else {
            throw new Exception("Error. The tail is empty.");
        }
    }

    public void delete() {  //method to delete the hole tail.
        front=0;
        last=1;
    }

    public boolean fullTail() {
        return last==Max_size-1;
    }

    public boolean emptyTail() {
        return front>last;
    }
}