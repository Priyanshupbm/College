
class Parent3 {
void parent3Method() {
System.out.println("Hierarchical Inheritance: This is Parent class.");
}
}

class Child3A extends Parent3 {
void child3AMethod() {
System.out.println("Hierarchical Inheritance: This is Child3A class.");
}
}

class Child3B extends Parent3 {
void child3BMethod() {
System.out.println("Hierarchical Inheritance: This is Child3B class.");
}
}

interface A {
void methodA();
}

class B implements A {
public void methodA() {
System.out.println("Hybrid Inheritance: This is Interface A.");
}
void methodB() {
System.out.println("Hybrid Inheritance: This is Class B (implements A).");
}
}

interface C {
void methodC();
}

class D extends B implements C {
public void methodC() {
System.out.println("Hybrid Inheritance: This is Interface C.");
}
void methodD() {
System.out.println("Hybrid Inheritance: This is Class D (extends B and implements C).");

}
}

class Parent {
    void parentMethod() {
        System.out.println("Single Inheritance: This is Parent class.");
    }
}

class Child extends Parent {
    void childMethod() {
        System.out.println("Single Inheritance: This is Child class.");
    }
}



class Grandparent {
    void grandparentMethod() {
        System.out.println("Multilevel Inheritance: This is Grandparent class.");
    }
}

class Parent2 extends Grandparent {
    void parent2Method() {
        System.out.println("Multilevel Inheritance: This is Parent class.");
    }
}

class Child2 extends Parent2 {
    void child2Method() {
        System.out.println("Multilevel Inheritance: This is Child class.");
    }
}



interface Father {
void fatherMethod();
}

interface Mother {
void motherMethod();
}

class Son implements Father, Mother {
public void fatherMethod() {
System.out.println("Multiple Inheritance: This is Father interface method.");
}
public void motherMethod() {
System.out.println("Multiple Inheritance: This is Mother interface method.");
}
void sonMethod() {
System.out.println("Multiple Inheritance: This is Son class.");
}
}

public class InheritanceDemo {
public static void main(String[] args) {

System.out.println("\n--- Single Inheritance ---");
Child obj1 = new Child();
obj1.parentMethod(); // from Parent
obj1.childMethod(); // from Child


System.out.println("\n--- Multiple Inheritance (Interfaces) ---");
Son obj2 = new Son();
obj2.fatherMethod(); // from Father interface
obj2.motherMethod(); // from Mother interface
obj2.sonMethod(); // from Son class


System.out.println("\n--- Multilevel Inheritance ---");
Child2 obj3 = new Child2();
obj3.grandparentMethod(); // from Grandparent
obj3.parent2Method(); // from Parent2
obj3.child2Method(); // from Child2

System.out.println("\n--- Hierarchical Inheritance ---");

Child3A obj4A = new Child3A();
obj4A.parent3Method(); // from Parent3
obj4A.child3AMethod(); // from Child3A

Child3B obj4B = new Child3B();
obj4B.parent3Method(); // from Parent3
obj4B.child3BMethod(); // from Child3B

// --- Hybrid Inheritance ---
System.out.println("\n--- Hybrid Inheritance ---");
D obj5 = new D();
obj5.methodA(); // from Interface A via class B
obj5.methodB(); // from class B
obj5.methodC(); // from Interface C via class D
obj5.methodD(); // from class D
}
}
