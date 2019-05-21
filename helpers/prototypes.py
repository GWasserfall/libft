import os

l = []
count = 0
for f in os.listdir("."):
	if f.endswith(".c") and not f.startswith("test"):
		with open("./{}".format(f), 'r') as fh:
			proto = None
			for line in fh.readlines():
				if line.startswith("void"):
					proto = line
				if line.startswith("int"):
					proto = line
				if line.startswith("char"):
					proto = line
			if proto:
				count += 1
				l.append(proto.rstrip() + ";")

[print(x) for x in sorted(l)]
print("Found {}".format(count))