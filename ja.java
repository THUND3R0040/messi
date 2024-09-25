

class A{

    protected int c;
    public int m(){
        return 5;
    }
    public static int n(){
        return 6;
    }
}

class B extends A{

    public int m(){
        return 2;
    }
    public static int n(){
        return 4;
    }
}


public class ja {
    public static void main(String[] args) {
        B b = new B();
        A a = new A();
        a.c = 3;
        System.out.println(a.c);
    
    }  
}