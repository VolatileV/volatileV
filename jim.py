

filler_text=":\t"

def name():

    a=input("\nName : ")
    
    with open("jim.txt",'a+') as file:
    
        e=file.read()
    
    if a not in e:
    
        with open("jim.txt",'a+') as file:
            file.write(a+filler_text)

        
        age=input("\nAge : ")

        with open("jim.txt",'a+') as file:
            file.write(age+"\n")

        description=input("\nDescription : ")

        with open("jim.txt",'a+') as file:
            file.write(description+"\n\n")
    
    elif a in e:
        print("\nThis person is already registered...\n")



while True:
    
    b=input("\nDo you want to enter a person's details? (Y/N) : ")
    
    if b=="Y":
        
        name()

        c=input("\nDo you want to read jim.txt? (Y/N) : ")
        
        if c=="Y":
            
            with open("jim.txt",'r+') as file:
                print("\n"+file.read())            
        
        elif c=="N":
            
            break
        
        else:
            
            print("\nWrong input...\n")
    
    elif b=="N":
        
        print("Thank You! \n")
        d=input("\nDo you want to read jim.txt? (Y/N) : ")
        
        if d=="Y":
            
            with open("jim.txt",'r+') as file:
                print("n"+file.read())            
        
        elif d=="N":
            
            break
        
        else:
            
            print("\nWrong input...\n")
        
        break
    
    else:
        
        print("\nWrong Input...\n")        

