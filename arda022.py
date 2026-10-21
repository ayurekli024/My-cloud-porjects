password = "Python2026"
numberofTries = 0
while numberofTries != 3:
    guess = input("Enter password: ")
    if password == guess:
        print("Access Granted!")
        break
    else:
        print("Incorrect Password. Try again.")
        numberofTries += 1
if numberofTries == 3:
    print("Account Locked. Too many failed attempts.")
list1 = []
while True:
    str1 = input("Enter score: (for exit write exit or -1)")
    if str1 == 'exit' or str1 == '-1':
        break
    elif not str1.isdigit() or str1.startswith("-"):
        print("Invalid score! You can input only numbers")
        break
    else: 
        list1.append(int(str1))
print(len(list1))
print(list1)
print(sum(list1)/len(list1))