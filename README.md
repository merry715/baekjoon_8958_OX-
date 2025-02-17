#8958

result= 0; //초기화
count=0;

1) ooo = 6

i = 0
str[i] = 첫번째 o
count= (count=0) + 1 = 1
result= result+count
result= (result=0) + (count=1) = 1


i= 1
str[i] = 두번째 o
count= count + 1 = 2
result= result+count
result= (result=1) + (count=2) = 3

i=2
str[i] = 세번째 o
result= (result=3) + (count=3) = 6
count= i+1 = 2 + 1 = 3

공식
result= result + (i+1)
count= (i+1)

2) ooxoo = 6

i = 0
str[i] = 첫번째 o
result= 0 + (i+1) = result + (i+1)
count= i+1 = 0+1 = 1

i= 1
str[i] = 두번째 o
result= (result=1) + (count=2) = 3
count= i+1 = 1 + 1 = 2

i= 2
str[i] = 세번째 자리 x
result= (result=3) + (i+1)*0=0 = 3

result= result + (i+1)
       = 3 + (2+1) = 6

i= 3
str[i] = 다시 첫번째 o
result= (result=0) + (count=1) = 1
count= count + 1 = 0 + 1 = 1

i= 4
str[i] = 다시 두번째 o
result= (result=1) + (count=2) = 3
count= count + 1 = 1 + 1 = 2

3(oo) + 0(x) + 3(oo) = 6

[공식]
result= result + (i+1)
count= count + 1

+) 이전 줄 누르고 + ctrl shfit f10
