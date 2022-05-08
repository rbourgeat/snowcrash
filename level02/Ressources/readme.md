## Step 1: Login
`su level02`

**password:** f2av5il02puano7naaf6adaaf

## Step 2: Find flag

`tcpdump -X -r level02.pcap`

[Traduire le dump](https://hpd.gasmi.net/?data=45100035A0FB400040064A2B3BE9EBDA3BE9EBDF994F2F599D18157BBAA8FB258018007392A700000101080A011BBCC202C23C6266&force=ipv4)

## Step 3: On regarde les paquets et leurs longeurs (1)

Pour l'IP 59.233.235.218:39247

ft_wandr[7f][7f][7f]NDRel[7f]L0L[0d]

ft_wand[7f][7f]NDRel[7f]L0L[0d]

ft_wan[7f]NDRel[7f]L0L[0d]

ft_waNDRel[7f]L0L[0d]

ft_waNDReL0L[0d]

ft_waNDReL0L

## Step 4: getflag

`su flag02`

**password:** ft_waNDReL0L

`getflag`
> kooda2puivaav1idi4f57q8iq