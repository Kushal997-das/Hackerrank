
n = int(input())

arr = []
primary_diagonal=[]
secondary_diagonal=[]
counter=0
counter1=len(arr)-1
for _ in range(n):
    arr.append(list(map(int, input().rstrip().split())))
for _ in range(len(arr)):
    
    primary_diagonal.append(arr[counter][counter])
    counter+=1
counter=0     
#print(primary_diagonal)


for _ in range(len(arr)):
    
    secondary_diagonal.append(arr[counter][counter1])
    counter+=1
    counter1-=1 
#print(secondary_diagonal)
print(abs(sum(primary_diagonal)-sum(secondary_diagonal)))

                   
