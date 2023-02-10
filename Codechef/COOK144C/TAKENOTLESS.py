# cook your dish here
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    stone = {}
    for i in range(n):
        if(a[i] in stone.keys()):
            stone[a[i]] += 1 
        else : 
            stone[a[i]] = 1
    t = 0
    y = a.count(max(a))
    for i in stone.values():
        if(i%2):
            t = 1 
            break 
    if(y%2 or t == 1):
        print("Marichka")
    else : 
        print("Zenyk")