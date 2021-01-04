#Given two strings S1 and S2
#Find out if S2 can be obtained by replacing tokens in S1


def findTokenCount(str):
    tokenCount = 0
    for x in str:
        if x == "+":
            tokenCount += 1
    return tokenCount

def wordLength(str1, str2):
    tokenCount = findTokenCount(str1)
    return ((len(str2) -(len(str1)-tokenCount))//tokenCount)

def findReplacedWord(str1, str2):
    word = ""
    for x in range(len(str1)):
        if str1[x] == "+":
            word += str2[x:x+wordLength(str1, str2)]
            break
    if (word == ""):
        print("Not Found")
    else:
        print("Token is: ", word)


findReplacedWord("aabc+aa+", "aabcKaanaaKaasdfsdfn")
#test

#test3