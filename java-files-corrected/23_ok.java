class Person {
    String name;
    int age;
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
}

class Main {
    public static void main(String[] args) {
        Person person = new Person("John", 30);
        Person ptr = person;
        Person ptrPtr = ptr;
        System.out.println("Person's name: " + person.name + " (Age: " + person.age + ")");
        System.out.println("ptr points to: " + person.name + " (Age: " + person.age + ")");
        System.out.println("ptrPtr points to: " + ptr.name + ")" + " (Age: " + ptr.age + ")");
    }
}