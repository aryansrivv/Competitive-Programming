# cook your dish here
for _ in range(1):
    n,m = map(int , input().split())
    ans = 0 
    play = {}
    for i in range(m):
        participant,time=map(int,input().split())
        if(participant in play.keys()):
            play[participant] += time 
            ans += play[participant]
            print(ans)
        else : 
            play[participant] = time 
            ans += play[participant]
            print(ans)