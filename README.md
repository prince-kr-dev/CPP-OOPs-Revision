# Object-Oriented Programming (OOP)
OOP is a method of organizing and designing programs using **objects**, which are like little "mini-programs" that hold data and can perform actions.

In C++, OOP helps you break down a complex program into smaller, manageable pieces, making your code easier to understand, reuse, and maintain. It is based on **four main principles**:

1. **Encapsulation**
2. **Abstraction**
3. **Inheritance**
4. **Polymorphism**

# Topics Covered in programming!
1. **Class & Object**
2. **Access Specifiers**
3. **Encapsulation**
4. **Constructor**
5. **this Pointer**
6. **Copy Constructor**
7. **Shallow & Deep Copy**
8. **Destructor**
9. **Inheritance**
10. **Polymorphism**
11. **Function Overriding**
12. **Virtual Function**
13. **Abstraction**
14. **Abstract Class**

# Let’s explain each one with simple examples!

---

### 1. **Encapsulation: Keeping Data Safe**

**Encapsulation** is the idea of keeping the details of how something works hidden from the outside world and only exposing what is necessary. This is done by bundling the data (variables) and the actions (functions) into a single unit called a **class**. 

It also means controlling access to the data. You might not want someone to change a value directly, so you use **access modifiers** like **public** and **private**.

- **Public** means anyone can access it.
- **Private** means only the class itself can access it.

#### Example of Encapsulation:
```cpp
class Car {
private:
    int speed; // private variable, cannot be accessed directly

public:
    // Public function to set the speed
    void setSpeed(int s) {
        speed = s;
    }

    // Public function to get the speed
    int getSpeed() {
        return speed;
    }
};

int main() {
    Car myCar;
    myCar.setSpeed(100); // Using the public method to set the speed
    cout << "Speed of the car: " << myCar.getSpeed() << " km/h"; // Using the public method to get the speed
    return 0;
}
```

Here:
- `speed` is a **private** variable, so no one can directly change it outside the class.
- `setSpeed()` and `getSpeed()` are **public** functions that let us safely set and get the speed.

---

### 2. **Abstraction: Hiding Complexity**

**Abstraction** means showing only the **necessary details** and hiding the complex parts. It’s like using a remote control: you press buttons to change the TV channel, but you don’t need to understand the complex electronics inside the remote.

In C++, you can use **abstract classes** to hide complex logic and just show the simple, essential functions.

#### Example of Abstraction:
```cpp
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function (abstract)
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    shape1->draw(); // Calls Circle's draw() method
    
    Shape* shape2 = new Square();
    shape2->draw(); // Calls Square's draw() method

    delete shape1;
    delete shape2;
    return 0;
}
```

Here:
- We **abstract** the concept of "shapes" by creating an abstract `Shape` class with a virtual function `draw()`.
- `Circle` and `Square` provide their own specific **implementation** of how they are drawn, but the user only needs to know how to call `draw()`.

---

### 3. **Inheritance: Reusing Code**

**Inheritance** is like taking a class (think of it like a blueprint) and making a new class based on it. The new class **inherits** all the properties and behaviors of the original class. This saves time and avoids repeating code.

#### Example of Inheritance:
```cpp
class Animal {
public:
    void eat() {
        cout << "Eating food" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal class
    myDog.bark(); // Specific to Dog class
    return 0;
}
```

Here:
- `Dog` is a **derived** class that **inherits** from the `Animal` class.
- The `Dog` class can use the `eat()` method from `Animal` without having to rewrite it.
- `Dog` also has its own specific method `bark()`.

---

### 4. **Polymorphism: Different Behaviors with the Same Name**

**Polymorphism** allows different classes to respond to the same **function call** in different ways. This is useful because you can write code that works for objects of many different types, but they will behave according to their specific implementation.

There are two types of polymorphism in C++:
1. **Compile-time Polymorphism** (Method Overloading)
2. **Runtime Polymorphism** (Method Overriding)

Here’s an example of **runtime polymorphism** using **virtual functions**:

#### Example of Polymorphism:
```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Some animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();
    
    animal1->sound();  // Calls Dog's sound()
    animal2->sound();  // Calls Cat's sound()

    delete animal1;
    delete animal2;
    return 0;
}
```

Here:
- Even though `animal1` and `animal2` are of type `Animal`, they each call the `sound()` method of their specific class (`Dog` or `Cat`).
- This is possible because of **virtual functions** and **runtime polymorphism**. The program decides which `sound()` method to call at **runtime**.

---

### Advantages of OOP in C++
- **Reusability**: You can reuse classes and code in new programs or in different parts of the same program.
- **Maintainability**: If you need to fix or update something, it’s easier because you know where everything is, and you don’t need to change much.
- **Scalability**: As your program grows, you can easily add new classes and features without breaking the existing ones.
- **Modularity**: Each object/class is independent and can be worked on separately.

---

### Summary
In **Object-Oriented Programming (OOP)** in C++:
- **Classes** are like blueprints, and **objects** are instances (real copies) of those blueprints.
- **Encapsulation** keeps data safe by controlling how it is accessed.
- **Abstraction** hides complexity and shows only what’s necessary.
- **Inheritance** allows you to create new classes based on existing ones, reusing code.
- **Polymorphism** allows different objects to behave differently using the same function name.

Using OOP makes programs easier to manage, more organized, and allows you to reuse code.
