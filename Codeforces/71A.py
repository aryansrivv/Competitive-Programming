#Codeforces beta round 65 

t = int (input())
word = []
while (t>0):
    word = input()
    l = len (word)
    if(l>10):
        l = l-2
        print ("%s%d%s"%(word[0],l,word[l+1]))
    else : 
        print (word)
    t=t-1
