echo "Enter no:"
read n
fact=1
for i in `seq 1 $n`
do
fact=$(($fact*$i));
i=$(($i+1));
done
echo "$n!=$fact";