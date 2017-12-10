#!/usr/bin/python3
import subprocess
i = 5
d = i-1 if "_" in __file__ else i
a = "#!/usr/bin/python3{:c}import subprocess{:c}i = {:d}{:c}d = i-1 if {:c}_{:c} in __file__ else i{:c}a = {:c}{:s}{:c}{:c}tup = [10, 10, d, 10, 34, 34, 10, 34, a, 34, 10, 10, 10, 9, 10, 9, 9, 34, 34, 34, 34, 10, 9, 9, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 9, 10, 9, 9, 9, 34, 34, 10]{:c}if i > 0:{:c}{:c}try:{:c}{:c}{:c}with open({:c}Sully_{{:d}}.py{:c}.format(d), {:c}w{:c}) as f:{:c}{:c}{:c}{:c}f.write(a.format(*tup)){:c}{:c}except Exception as e:{:c}{:c}{:c}print(e){:c}{:c}else:{:c}{:c}{:c}if i > 1:{:c}{:c}{:c}{:c}subprocess.call({:c}python3 Sully_{{:d}}.py{:c}.format(d), shell=True){:c}"
tup = [10, 10, d, 10, 34, 34, 10, 34, a, 34, 10, 10, 10, 9, 10, 9, 9, 34, 34, 34, 34, 10, 9, 9, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 9, 10, 9, 9, 9, 34, 34, 10]
if i > 0:
	try:
		with open("Sully_{:d}.py".format(d), "w") as f:
			f.write(a.format(*tup))
	except Exception as e:
		print(e)
	else:
		if i > 1:
			subprocess.call("python3 Sully_{:d}.py".format(d), shell=True)
