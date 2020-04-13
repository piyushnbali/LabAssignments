start=0
while [ $start -ne 1 ] #menu driven while loop
do                         
echo "**********MENU********"
echo "    1.Add        "    #add.sh  program
echo "    2.List       "    #display data
echo "    3.Delete     "    #delete particular data
echo "    4.Search     "    #search for element
echo "    5.Exit       "     # exit

read choice

case "$choice" in    #Switch case 
1) sh add.sh ;;
2) sh display.sh;;
3) sh delete.sh;;
4) sh Search.sh;;
5) start=1;;

esac

done 
