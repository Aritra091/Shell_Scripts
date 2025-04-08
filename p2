echo "Enter file name: "
read a
c=`ls -l $a|cut -c 1`
echo $c
if [ $c = "-" ]
then
	d=`ls -l $a|cut -d " " -f 6-9`
	echo "$a is Ordinary and file created on $d"
else
	echo "Directory"
fi
