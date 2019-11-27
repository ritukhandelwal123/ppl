echo "Enter no:"
read num 
p=$num
rev=0
while [ $num -ne 0 ]
do
rem=$(($num%10));
rev=$(($rev*10+$rem));
num=$(($num /10));
done
if [ $p -eq $rev ]
then
echo "$p is a palindrome no."
else
echo "$p is not a palindrome no."
fi