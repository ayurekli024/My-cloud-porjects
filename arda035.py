sumEvens = 0
infile = open("Numbers.txt", 'r')
for line in infile:
    if eval(line) % 2 == 0:
        sumEvens += eval(line)
infile.close()
print(sumEvens)