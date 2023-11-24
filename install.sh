if [ -d /opt/bin/ ]
then
    gcc src/randstring.c -o /opt/bin/randstring
else
    mkdir /opt/bin && gcc src/randstring.c -o /opt/bin/randstring
fi