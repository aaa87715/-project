import random
class Lottery:
    def __init__(self,a=5,b=39):
        self.a=a
        self.b=b
        self.l1 =random.sample(range(1,self.b+1),self.a)
    def play(self):
        number =[int(x) for x in input("請輸入{}個選號:範圍1~{}".format(self.a,self.b)).split()]
        print("您的選號:",number)
        z=0
        l3=[]
        print("開獎號碼:",self.l1)
        for i in range(5):
            for j in range(5):
                if(self.l1[i]==number[j]):
                    l3.append(number[j])
                    z+=1
        print("恭喜中獎{}個數字".format(z),l3)