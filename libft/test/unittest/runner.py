from subprocess import Popen, PIPE

def run(list_args):
	p = Popen(list_args, stdin=PIPE, stdout=PIPE, stderr=PIPE)
	output, err = p.communicate(b"input data that is passed to subprocess' stdin")
	if output:
		return output
	else:
		return p.returncode