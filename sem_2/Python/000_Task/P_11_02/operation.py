

a = 0
b = 0


def add():
    add = a+b
    print("The addiction is ",add)

def sub():
    sub = a-b
    print("The subrraction is ",sub)

def mul():
    mul = a*b
    print("The multiplication is ",mul)


def div():
    div = a/b
    print("The division is ",div)

    
def mod():
    mod = a%b
    print("The modules is ",mod)


a = int(input("\nEnter the first number : " ))
b = int(input("Enter the second number : "))


c = int(input("\nEnter the number to do operation \n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod \n                   :  "))

match c :
    case 1 :
        add()
    case 2:
        sub()
    case 3:
        mul()
    case 4:
        div()
    case 5:
        mod()
