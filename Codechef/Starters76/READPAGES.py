# cook your dish here
for _ in range(int(input())):
    n , x , y = map(int,input().split())
    if(x*y >= n ):
        print("YES")
    else:
        print("NO")