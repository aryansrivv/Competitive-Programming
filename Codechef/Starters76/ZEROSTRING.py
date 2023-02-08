# cook your dish here
for _ in range(int(input())):
    n = int(input())
    s = input()
    x = s.count('0')
    y = s.count('1')
    if (x>=y):
        print(y)
    else : 
        print(x+1)
        
    