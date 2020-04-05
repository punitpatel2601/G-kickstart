infile = raw_input("Input file>>")
outfile = raw_input('Output file>>')
fr = open(infile, 'r')
fw = open(outfile, 'w')
t = int(fr.readline())
x = 0
while x < t:
    n = int(fr.readline())
    count = 0
    ev1 = ev2 = 0
    num = n
    while num >= 10:
        num = num/10
        count = count+1
    i = count
    while i >= 0:
        if num%2 == 0:
            ev1 = ev2 = num
            num = int(n/(10**(i-1)))
        else:
            ev1 = num-1
            if num != 9:
                ev2 = num+1
            j = 0
            while j < i:
                ev1 = (ev1*10)+8
                if num%10 != 9:
                    ev2 = (ev2*10)
                j = j+1
            break
        i = i-1
    if num == 9:
        ev2 = ev1
    ev1 = n-ev1
    ev2 = ev2-n
    ans = ev1
    if ev2 < ans and ev2 > 0:
        ans = ev2
    fw.write('Case #{:d}: {:d}\n'.format((x+1),ans))
    x = x+1
fr.close()
fw.close()
