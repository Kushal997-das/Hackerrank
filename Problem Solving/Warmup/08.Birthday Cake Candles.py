n=int(input())
arr=list(map(int,input().split()))
x=max(arr)
counter=0
for i in arr:
    if i==x:
        counter+=1  

print(counter) 
