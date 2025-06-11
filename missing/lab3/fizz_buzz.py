def fizz_buzz(limit):
	for i in range(1,limit+1):
		if i % 15 == 0:
			print('fizzbuzz')
		elif i % 3 == 0:
			print('fizz')
		elif i % 5 == 0:
			print('fizz')
		else:
			print(i)

def main():
	limit=int(input())
	fizz_buzz(limit)

if __name__=="__main__":
	main()
