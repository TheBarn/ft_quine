#!/usr/bin/python3
#first comment

def print_c():
	a = "#!/usr/bin/python3{:c}#first comment{:c}{:c}def print_c():{:c}{:c}a = {:c}{:s}{:c};{:c}{:c}print(a.format(10, 10, 10, 10, 9, 34, a, 34, 10, 9, 10, 10, 10, 9, 10, 9, 10, 10, 34, 34, 10, 9)){:c}{:c}def main():{:c}{:c}#second comment{:c}{:c}print_c(){:c}{:c}if __name__ == {:c}__main__{:c}:{:c}{:c}main()";
	print(a.format(10, 10, 10, 10, 9, 34, a, 34, 10, 9, 10, 10, 10, 9, 10, 9, 10, 10, 34, 34, 10, 9))

def main():
	#second comment
	print_c()

if __name__ == "__main__":
	main()
