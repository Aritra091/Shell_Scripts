a="$1"
b="$2"
c="$3"

if [ -e $a -a -e $b ]
then
	`cat $a $b > $c`
else
	echo "Warning"
fi
