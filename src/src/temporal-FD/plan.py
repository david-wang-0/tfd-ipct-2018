#! /usr/bin/env python
import subprocess
import sys
import shutil
import math 
import time             # time mgmt


def main():
	def run(*args, **kwargs):
		input = kwargs.pop("input", None)
		output = kwargs.pop("output", None)
		assert not kwargs
		redirections = {}
		if input:
			redirections["stdin"] = open(input)
		if output:
			redirections["stdout"] = open(output, "w")
		print args, redirections
		subprocess.check_call(sum([arg.split("+") for arg in args],[]), **redirections)

	config, domain, problem, result_name = sys.argv[1:]

	# run translator
	begin = time.time()
	run("translate/translate.py", domain, problem)
	end = time.time()
	accumulated_time = end - begin
    	accumulated_time = math.ceil(accumulated_time)
    	print "Translate process: " + str(accumulated_time) + " seconds\n"
	# run preprocessing
	begin2 = time.time()
	run("preprocess/preprocess", input="output.sas")
	end2 = time.time()
	accumulated_time = end2 - begin2
    	accumulated_time = math.ceil(accumulated_time)
    	print "Preprocess: " + str(accumulated_time) + " seconds\n"
	# run search
	##run("search/search", config, "p", result_name, input="output")

if __name__ == "__main__":
    main()

