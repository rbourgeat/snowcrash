## Step 1: Login
**login:** level00

**password:** level00

## Step 2: Find flag
`cd ../../..`

`find . -user flag00`
> ./rofs/usr/sbin/john

`cat ./rofs/usr/sbin/john -user flag00`
> cdiiddwpgswtgt

## Step 3: flag00
[Decrypter sans connaitre la cle (code cesar (le plus simple))](https://calculis.net/code-cesar)

`su flag00`

**password:** nottoohardhere

## Step 4: getflag

`getflag`
> x24ti5gi3x0ol2eh4esiuxias
