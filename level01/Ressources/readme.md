## Step 1: Login
`su level01`

**password:** x24ti5gi3x0ol2eh4esiuxias

## Step 2: Find flag

`cd ../../..`

`cd rofs/etc`

`cat passwd`
> 42hDRfypTqqnw

## Step 3: install and use john

`scp -P 4242 level00@127.0.1.1:/rofs/etc/passwd .`

`./john-1.9.0-jumbo-1/run/john --show passwd`
> flag01:abcdefg:3001:3001::/home/flag/flag01:/bin/bash

## Step 4: getflag

`su flag01`

**password:** abcdefg

`getflag`
> f2av5il02puano7naaf6adaaf
