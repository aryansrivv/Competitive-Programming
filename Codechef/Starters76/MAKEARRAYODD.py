# cook your dish here
for _ in range(int(input())):
    n ,x = map(int,input().split())
    a = list(map(int,input().split()))
    even = 0
    odd = 0
    for i in a :
        if(i%2==0):
            even+=1
        else : 
            odd+=1
    if(x%2==0):
        if(odd==0):
            print(-1)
        else : 
            print(even)
    else : 
        if(even%2 == 0 ):
            print(even//2)
        else :
            print(1 + (even//2))