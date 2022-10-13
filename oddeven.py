
while True:
    a=int(input("Enter a number to check for it being Odd or Even: \n"))

    if a%2==0 and a%4!=0:
        print("The number is even and not divisible by 4..\n")
    
    elif a%4==0:
        print("The number is even and divisible by 4..\n")

    else:
        print("The number is odd..\n")
    
    c=int(input("Do you want to stop checking for odd or even? (1 for Yes/ 0 for No): \n"))
    if c==0:
        print("LESSSGOOOOOOO!\n")
    
    elif c==1:
        print("Thank You! Have a nice day! \n")
        break
    
    else:
        print("Wrong input..")
