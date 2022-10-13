

ch = int(input("How many terms? : "))


def fibonacci(p):


    n1 , n2 = 0 , 1
    count = 0


    if ch <= 0 :
        print("Please enter a positive integer...")

    elif ch == 1:
        print("Fibonacci sequence upto %d is 0" , p)
    
    else:


        print("\nFibonacci Series : ")


        while count < p:

            print("\n"+str(n1))

            nth = n1 + n2
            n1 = n2


            n2 = nth

            count+=1


fibonacci(ch)

