infile = open("makale.txt",'r')
for word in infile:
    word = list(word.split())
    for i in word:
        for n in i:
            if n in "!?.,:":
                print(i)
                
                i = i[:-1]
                word.insert(word.index(i),i)
        
    

