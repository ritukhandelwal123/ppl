echo "********"
echo "1.Factorial"
echo "2.Palindrome"
echo "********"
echo "Enter your choice"
read ch
case $ch in
1)echo "Enter no:"
read a
i=1
fac=1
for i in `seq 1 $a`
do
fac=$(($fac*$i))
i=$((i+1))
done
echo "$a!=$fac"
;;
2)echo "Enter no:"
read n
p=$n
while [ $n -gt 0 ]
do
rem=$((n%10))
rev=$((rev*10+rem))
n=$((n/10))
done
if [ $rev -eq $p ]
then
echo "palindrome"
else
echo "not palindome"
fi 
;;
*)echo "wrong choice"
;;
esac