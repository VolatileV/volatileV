

a={"Albert Einstein":"14 March","Benjamin Franklin":"17 January","Vishist Parashar":"23 January"}


while True:
    
    
    b=input("Enter a name to get birthday (Albert Einstein/Benjamin Franklin/Vishist Parashar) : ")


    if b=="Albert Einstein":
        print(a["Albert Einstein"])


    elif b=="Benjamin Franklin":
        print(a["Benjamin Franklin"])


    elif b=="Vishist Parashar":
        print(a["Vishist Parashar"])


    else:
        print("Wrong Input...")

