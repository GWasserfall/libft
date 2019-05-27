#!/bin/python3

import os
import subprocess

for fi in os.listdir('.'):
	if fi.endswith(".c"):
		outfile = fi[:-2]
		subprocess.Popen(['gcc', fi, '../libft.a', '-w', '-o', './binaries/{0}'.format(outfile[6:])])