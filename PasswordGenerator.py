
import random
import string


passlen=int(input("Enter the length of your password : "))

password="".join(random.choices(string.ascii_uppercase + string.digits, k=passlen))

print("Your randomized password is "+password)
