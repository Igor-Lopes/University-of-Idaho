FILES="/home/debianos/Unicon/unicon/ipl/lib/*.u"
FILES2="/home/debianos/Unicon/unicon/uni/*/"
APP="./ucode"
BASE="*.u"
COUNT=0

echo "" > out

for f in $FILES
do
  echo "PROCESSING FILE $f"
	COUNT=$((COUNT + 1))
	$APP $f

  if [ $? -eq 0 ]
  then
    echo "SUCESSFULLY DONE $?"
  else
    echo "FAILED ON FILE: $f $?"
    exit 0
  fi
done

for dir in $FILES2
do
  for i in $(find $dir -name \*.u);
  do
    echo "PROCESSING FILE $f"
    COUNT=$((COUNT + 1))
    $APP $f
    if [ $? -eq 0 ]
    then
      echo "SUCESSFULLY DONE $?"
    else
      echo "FAILED ON FILE: $f $?"
      exit 0
    fi
  done
done

echo "DONE $COUNT FILES PRECCESSED"
