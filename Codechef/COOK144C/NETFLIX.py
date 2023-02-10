# cook your dish here
for _ in range(int(input())):
    a,b,c,x = map(int,input().split())
    p,q,r = a+b , b+c , c+a
    if(p>=x or q >= x or r >= x):
        print("YES")
    else : 
        print("NO")