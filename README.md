#8958

<공식>
1. result= result + count
2. count= count + 1

-------------------------------------------------

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
count= (count=1) + 1 = 2
result= result+count
result= (result=1) + (count=2) = 3

i=2
str[i] = 세번째 o
count= (count=2) + 1 = 3
result= (result=3) + (count=3) = 6

-------------------------------------------------

2) ooxoo = 6

i = 0
str[i] = 첫번째 o
count= (count=0) + 1 = 1
result= result+count
result= (result=0) + (count=1) = 1

i= 1
str[i] = 두번째 o
count= (count=1) + 1 = 2
result= (result=1) + (count=2) = 3

i= 2
str[i] = 세번째 자리 x
count = 0;  //초기화
result= (result=3) + (count=0) = 3  //유지

i= 3
str[i] = 다시 첫번째 o
result= (result=0) + (count=1) = 1
count= count + 1 = 0 + 1 = 1

i= 4
str[i] = 다시 두번째 o
result= (result=1) + (count=2) = 3
count= count + 1 = 1 + 1 = 2

3(oo) + 0(x) + 3(oo) = 6

-------------------------------------------------

+) visual studio 디버그 과정 되돌아가기
=> 이전 줄 누르고 + ctrl shfit f10
