def cost(x):
	sum = 0
	# print(x)
	if x < 4:
		print(1)
		sum+=x*20
	elif x == 5:
		print(2)
		sum+=120
	elif x > 5 and x<10:
		print(3)
		sum+=120+(x-5)*20
	elif x==10:
		print(4)
		sum+=250
	elif x > 10 and x<15:
		print(5)
		sum+=250+(x-10)*30
	elif x==15:
		print(6)
		sum+=400
	elif x > 15 and x<20:
		print(7)
		sum+=400+(x-15)*30
	elif x==20:
		print(8)
		sum+=620
	elif x > 20 and x<25:
		sum+=620+(x-20)*40	
	elif x==25:
		sum+=860
	elif x > 25 and x<30:
		sum+=860+(x-25)*40
	elif x==30:
		sum+=1080
	print(sum)

x = int(input())
cost(x)