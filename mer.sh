echo "Enter 3 file names"
read a
read b
read c

if [ -e $a -a -e $b ]
then
`cat $a $b > $c`
echo "Files merged" 
else
echo "Warning"
fi
