# cook your dish here
for _ in range(int(input())):
    x,y,z = map(int, input().split())
    res = x+y+z
    if(res >5):
        print("YES")
    else : 
        print("NO")