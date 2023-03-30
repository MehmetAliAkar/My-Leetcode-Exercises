int myAtoi(char * s){
    int i,sign;
    unsigned long long num;
    i = 0;
    num = 0;
    sign = 1;

    while (s[i] == 32)
        i++;
    if(s[i] == '-' || s[i] == '+'){
        if(s[i] == '-')
            sign*=-1;
        i++;
    }
    while(s[i] == '0')
        i++;
    int j=0;
    while (s[i] >='0' && s[i] <= '9')
    {
        j++;
        num *= 10;
        num += s[i] - 48; //48 is the ascii number of 0
        i++;
        if((sign == -1 && num >= 2147483648 ) ||(sign == -1 && j>=11))//max negative value of the integer
           return (-2147483648);
        else if ((sign == 1 && num >=2147483647) || (sign == 1 && j >= 11))//max positive value of integer
            return 2147483647;
    }
    return (num*sign);
}