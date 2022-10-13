

import csv


with open('eggs.csv', 'a+') as csvwrite:
    a=csv.writer(csvwrite)
    a.writerow(['Spam'] * 5)


with open('eggs.csv', 'r+') as csvread:
    b=csv.reader(csvread)
    for i in b:
        print(i)

