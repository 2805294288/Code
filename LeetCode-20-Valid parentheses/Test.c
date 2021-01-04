//��̬ջ(���飩���ɶ�̬���ݣ�
typedef char STDataType;
typedef struct Stack
{
    STDataType* a;
    int  top;//ջ���±�
    int  capacity;
}Stack;

// ��ʼ��ջ 
void StackInit(Stack* ps);
// ��ջ 
void StackPush(Stack* ps, STDataType data);
// ��ջ 
void StackPop(Stack* ps);
// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps);
// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps);
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps);
// ����ջ 
void StackDestroy(Stack* ps);

//ջ�ĳ�ʼ��
void StackInit(Stack* ps)
{
    ps->a = malloc(sizeof(STDataType) * 4);
    ps->top = 0;
    ps->capacity = 4;
}
//��ջ
void StackPush(Stack* ps, STDataType data)
{
    assert(ps);
    if (ps->top == ps->capacity) {
        ps->capacity *= 2;
        STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * ps->capacity);
        if (tmp == NULL) {
            printf("����ʧ�ܣ�");
            exit(-1);
        }
        else
            ps->a = tmp;
    }
    ps->a[ps->top] = data;
    ps->top++;
}

// ��ջ 
void StackPop(Stack* ps)
{
    assert(ps);
    assert(ps->top > 0);
    --ps->top;
}
//��ȡջ�и���
int StackSize(Stack* ps)
{
    assert(ps);
    return ps->top;
}

// ����ջ 
void StackDestroy(Stack* ps)
{
    assert(ps);
    free(ps->a);
    ps->a = NULL;
    ps->capacity = 0;
    ps->top = 0;
}
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps)
{
    assert(ps);
    if (ps->top == 0)
        return 1;
    else
        return 0;
}

// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps)
{
    assert(ps);
    assert(ps->top > 0);
    return ps->a[ps->top - 1];
}

bool isValid(char* s) {
    Stack st;
    StackInit(&st);
    bool ret;
    while (*s != '\0')
    {
        if (*s == '(' || *s == '{' || *s == '[') {
            StackPush(&st, *s);
            ++s;
        }
        else
        {
            if (StackEmpty(&st)) {
                ret = false;
                break;
            }
            char Top = StackTop(&st);
            if (*s == ')' && Top != '(') {
                ret = false;
                break;
            }
            if (*s == '}' && Top != '{') {
                ret = false;
                break;
            }
            if (*s == ']' && Top != '[') {
                ret = false;
                break;
            }
            StackPop(&st);
            ++s;
        }
    }
    if (*s == '\0')
        ret = StackEmpty(&st);
    StackDestroy(&st);

    return ret;
}