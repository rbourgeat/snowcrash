## Step 1: Login
`su level14`

**password:** 2A31L79asukciNyi8uppkEuSx

## Step 2: Find flag

On trouve aucun fichier exploitable alors on desassemble getflag:

`objdump -d -Mintel /bin/getflag | less`

On utilise gdb pour appeler la fonction ft_des (algo de decryptage):

`gdb /bin/getflag`

`(gdb) start`

`(gdb) call (char *)ft_des(0x8049220)`
> $1 = 0x804c008 "7QiHafiNa3HVozsaXkawuYrTstxbpABHD8CPnHJ"
