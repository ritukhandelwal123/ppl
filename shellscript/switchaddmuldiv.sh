echo "********"
echo "1.Addition"
echo "2.Multiplication"
echo "3.Divison"
echo "********"
echo "Enter your choice:"
read ch
case $ch in
1)echo "Enter the two no:"
read a 
read b
c=$(($a+$b))
echo "Addition=$c"
;;
2)echo "Enter the two no:"
read a 
read b
c=$(($a*$b))
echo "Multiplication=$c"
;;
3)echo "Enter the two no:"
read a 
read b
c=$(($a/$b))
echo "Division=$c"
;;
*)echo "Wrong choice"
;;
esac
