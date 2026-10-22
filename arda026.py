userinput1, userinput2 = str(input()), str(input())
if len(userinput1) == len(userinput2):
    same = []
    different = []
    notexist = []
    for i in range(len(userinput1)):
        if userinput1[i] == userinput2[i]:
            same.append(i)
        elif userinput1[i] in userinput2:
            different.append(i)
        else:
            notexist.append(i)
    print([same,different,notexist])
else:
    print("numbers length must be same.")