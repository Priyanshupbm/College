
print("\n     The area calculator of square rectangle and triangle")



def triangle():
    
    l = float(input("\nEnter the length of the first side of the triangle  : "))
    b = float(input("Enter the length of the second side of the triangle  : "))
    print(f"The area of the triangle of side {l} and {b} is {l*b}.")

def square():
    l = float(input("\nEnter the length of the side of the square  : "))
    print(f"The area of the square of side {l} is {l*l}.")


def rectangle():
    l = float(input("\nEnter the length of the first side of the retangle  : "))
    b = float(input("Enter the length of the second side of the retangle  : "))
    print(f"The area of the retangle of side {l} and {b} is {0.5*l*b}.")

def circle():
    l = float(input("\nEnter the length of the radius of the circle  : "))
    print(f"The area of the circle of side {l} is {3.141*l*l}.")



    


try :

    s = int(input("\n\nEnter\n1.Square\n2.Rectangle\n3.triangle\n4.Cicrle\n           :  "))

    if s == 1:
        square()

    elif s == 2:
        rectangle()

    elif s == 3 :
        triangle()
        

    elif s == 4:
        circle()

    else :
        print("\nEnter only number from 1 to 4")



except Exception as a :

    print("\nPlease enter only number")
