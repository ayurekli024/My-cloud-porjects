outfile = open("arda.txt",'w')
list1 = ["Arda","Begüm","Ela","Beren"]
total = len(list1)
for i in range (total):

    outfile.write(list1[i]+"\n")