x = list(map(int, input().split()))
y = list(map(int, input().split()))
score=score1=0
for i in range(len(y)):
    if x[i]>y[i]:
        score+=1
    elif x[i]<y[i]:
        score1+=1  
print(score,score1)
