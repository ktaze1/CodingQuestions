def firstLetterEachWord(string):
    result = ""
    v = True

    for x in range(len(string)):
        if string[x] == ' ':
            v = True
        elif string[x] != ' ' and v == True:
            result  += string[x]
            v = False

    return  result

string = "deneme kaan taze alp sakaci devran canikli"
print(firstLetterEachWord(string))