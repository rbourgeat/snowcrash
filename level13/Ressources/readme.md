## Step 1: Login
`su level13`

**password:** g1qKMiRpXf53AWhDaU7FEkczr

## Step 2: Find flag

`vi getuid.c`

```
int getuid()
{
    return 4242;
}
```

`gcc -o libgetuid.so -shared getuid.c`

`export LD_PRELOAD=/tmp/libgetuid.so`

`ltrace ./level13`
> printf("your token is %s\n", "2A31L79asukciNyi8uppkEuSx"your token is 2A31L79asukciNyi8uppkEuSx