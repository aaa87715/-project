import random
class Guess:
    def cnt(self):
        return (self.__Guess_cont) 
    def __init__(self,abc=random.randint(1,99),Guess__cont=0):
        abc=random.randint(1,99)
        self.__abc=abc
        self.__Guess_cont=Guess__cont
    def play(self):
            max=100
            min=1
            i=0
            while 1:
                i+=1
                x=int(input("請輸入數字次,猜測範圍{}~{}".format(min,max)))
                if x<100 and x>1 :
                    if x>self.__abc:
                        max=x
                        print("第{}次猜測太大了,猜小一點,下次猜測範圍{}~{}".format(i,min,max))
                       # print("太大了猜小一點第",i,"次猜測範圍",min,max)
                    elif(x<self.__abc):
                        min=x
                        print("第{}次猜測太小了,猜大一點,下次猜測範圍{}~{}".format(i,min,max))
                    else:
                        print("恭喜猜對")
                        self.__Guess_cont+=1
                        break
                else:
                    print("輸入錯誤")
                    continue