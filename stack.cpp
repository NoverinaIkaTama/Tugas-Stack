if (isdigit(exp[i]))
            push(stack, exp[i] - '0');
        else{
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i])  {
             case '+': push(stack, val2 + val1); break;
             case '-': p
