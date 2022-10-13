
a=int(input("Enter first number : "))
b=int(input("Enter second number : "))

c=input("Enter operation (+ or - or * or / or ** or // or %) : ")

def add():
    print(a+b)

def subtract():
    print(a-b)

def multiply():
    print(a*b)

def divide():
    print(a/b)

def floor_divide():
    print(a//b)

def exponent():
    print(a**b)

def remainder():
    print(a%b)
while True:
    c=input("Enter operation (+ or - or * or / or ** or // or %). Type anything else to break operation : ")
                                
    if c=="+":
        add()

    elif c=="-":
        subtract()

    elif c=="*":
        multiply()

    elif c=="/":
        divide()

    elif c=="**":
        exponent()

    elif c=="//":
        floor_divide()

    elif c=="%":
        remainder()

    else:
        print("wrong input...")
        break
