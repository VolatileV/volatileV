
import random

a=random.randint(0,9)

b=int(input("Guess the number (Between 1 to 9) : "))

if b==a:
    print("\nVoila! You won\n")

else:
    print("\nBUZZZZ! TRY AGAIN!")

x=1

while b!=a:
    x+=1
    
    b=int(input("\nGuess the number (Between 1 to 9) : "))

    if b==a:
        print("\nVoila! You won\n")
        break
    
    else:
        print("\nBUZZZZ! TRY AGAIN!")

print("Congrats! You got it in "+str(x)+" number of tries..")

