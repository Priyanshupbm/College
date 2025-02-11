

def interest():

    p = int(input("\nEnter the principle amount : "))
    r = int(input("Enter the rate for the amount : "))
    t = int(input("Enter the time for the amount you have to get interest : "))

    i = p*r*t/100

    print(f"\nThe interest of the principle amount {p} of the rate {r} for {t} year is {i}")


interest()
