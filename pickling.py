
import pickle

a=open("pickle.txt",'ab+')
c=open("pickle.txt",'rb+')


b=input("Enter string you want to insert into file : ")
pickle.dump(b,a)


objects = []
with (open("pickle.txt", "rb")) as openfile:
    while True:
        try:
            objects.append(pickle.load(openfile))
        except EOFError:
            break


print(objects)

