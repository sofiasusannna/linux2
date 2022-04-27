#!/usr/bin/python3
import random

small = "abcdefghijklmnopqrstuvwxyz"
large = small.upper()
numbers = "1234567890"
password_variables = small + numbers + large
password = ""

lenght = input("Salasanan pituus: ")

while True:
        try:
                password_lenght = int(lenght)
                break;

        except ValueError:
                password_lenght = 8
                break;

if password_lenght <= 0:
        password_lenght = 8

for c in range(password_lenght):
        password += random.choice(password_variables)
print(password)
                 
