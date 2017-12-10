#!/usr/bin/python3
#comment

a = "#!/usr/bin/python3{:c}#comment{:c}{:c}a = {:c}{:s}{:c}{:c}tup = [10, 10, 10, 34, a, 34, 10, 10, 10, 9, 10, 9, 9, 34, 34, 34, 34, 10, 9, 9, 9, 10, 9, 10, 9, 9, 10, 10, 34, 34, 10, 9]{:c}def main():{:c}{:c}try:{:c}{:c}{:c}with open({:c}Grace_kid.py{:c}, {:c}w{:c}) as f:{:c}{:c}{:c}{:c}print(a.format(*tup), file=f){:c}{:c}except Exception as e:{:c}{:c}{:c}pass{:c}{:c}if __name__ == {:c}__main__{:c}:{:c}{:c}main()"
tup = [10, 10, 10, 34, a, 34, 10, 10, 10, 9, 10, 9, 9, 34, 34, 34, 34, 10, 9, 9, 9, 10, 9, 10, 9, 9, 10, 10, 34, 34, 10, 9]
def main():
	try:
		with open("Grace_kid.py", "w") as f:
			print(a.format(*tup), file=f)
	except Exception as e:
		pass

if __name__ == "__main__":
	main()
