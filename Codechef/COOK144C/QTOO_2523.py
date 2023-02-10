# cook your dish here
for _ in range(int(input())):
    n = int(input())
    s = input()
    s_dict = {}
    tester = 1
    for i in s :
        if (i in s_dict.keys()):
            s_dict[i] +=1
        else : 
            s_dict[i] = 1
    for i in s_dict.values():
        if (i > 1 ):
            tester = -1 
            print(n-2)
            break
    if(tester==1):
        print(-1)