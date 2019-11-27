while :
do
echo "1.swap using 3rd variable"
echo "2.swap without using 3rd variable"
echo "3.Multiplication table"
echo "4.Exit"
read -p "Enter your choice[1-2]:" choice
case $choice in
1)echo "Enter two number:"
read a
read b
temp=$a
a=$b
b=$temp
echo "After swapping,result=$a $b"
read -p "Enter to continue" readEnterkey
;;
2)echo "Enter two number:"
read a 
read b
a=$((a+b))
b=$((a-b))
a=$((a-b))
echo "After swapping,result=$a $b"
read -p "Enter to continue" readEnterkey
;;
3)echo "Enter a no:"
read n 
i=1
for i in `seq 1 10`
do 
echo "$n*$i=$(($n*$i))"
done
read -p "Enter to continue" readEnterkey
;;
4)echo "good bye"
exit 0
;;
*)echo "Wrong choice"
end -p "Enter to continue" readEnterkey
;;
esac
done