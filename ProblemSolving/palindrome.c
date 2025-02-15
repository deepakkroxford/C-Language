# include <stdio.h>

int isPalindrome(int num)
{
    int reverse =0; 
    int temp = num;
    while(num!=0)
    {
        int rem =num%10;
        reverse = reverse*10 + rem;
        num = num/10;
    }

    return (reverse==temp); // so it evalute and return 0 and 1;

}
int main()
{
    int num = 121;
    if(isPalindrome(num)){
        printf("%d is a palindrome", num);
    }
    else{
        printf("%d is not a palindrome", num);
    }
    
}