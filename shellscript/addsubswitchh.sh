while :
do
clear
echo "1.add"
echo "2.subtract"
echo "3.exit"
read -p "Enter your choice[1-2]:" choice
case $choice in
1)echo "Enter two numbers:"
read a
read b
c=$((a+b))
echo "addition = $c"
read -p "Enter to continue" readEnterkey
;;
2)echo "Enter two numbers:"
read a
read b
c=$((a-b))
echo "subtraction = $c"
read -p "Enter to continue" readEnterkey
;;
3)echo "Good bye!"
exit 0
;;
*)echo "Wrong choice"
read -p "Enter to continue" readEnterkey
;;
esac
done