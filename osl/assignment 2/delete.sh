cat data.txt     #show data set
echo Enter line no you want to delete  #display message
read line                           #read line
sed -i "${line}d" data.txt           #delete that line using sed command
cat data.txt                         #display updated data
exit 0                               #exit
