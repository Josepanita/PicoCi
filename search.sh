for i in `(grep 'ProgramFail(Parser, .*)' ./* -o -h --color=NEVER)`; do
	echo $i >> fails.txt
done