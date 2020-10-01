def reverse(num):
    rev=0
    while (num!=0):
        rem = num%10
        rev = rev*10 + rem
        num = num/10
    return rev;

def check(n):
    rev = reverse(n)
    if(n == rev):
        return 1
    else:
        return 0


if __name__ == "__main__":
    num = 31412;
    if(check(num)):
        print("Palindrome")
    else:
        print("Nah not palindrome!")
