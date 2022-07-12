#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct tnode {
    char *word; // 单词
    int count; // 出现次数
    struct tnode *left; // 左子节点
    struct tnode *right; // 右子结点
};

#define MAXWORD 100

struct tnode *addtree(strcut tnode *p, char *word);
void treeprint(struct tnode *p);
// int getword(char *word, int count);

// 使用二叉树校验输入的每个关键词的次数
int main()
{
    char word[MAXWORD];

    while (getword(word, MAXWORD) != EOF) {
        if (isalpha(word[0])) {
            struct tnode *root = addtree(root, word);
        }
    }

    treeprint(root);

    return 0;
}

struct tnode *talloc();
char *strdup(char *p);

struct tnode *addtree(struct tnode *p, char *word)
{
    int cond;

    if (p == NULL) {
        p = talloc();
        p->word = strdup(word);
        p->count = 1;
        p->left = p->right = NULL;
    } else if ((cond = strcmp(word, p->word)) == 0) {
        p->count++;
    } else if (cond < 0) {
        p->left = addtree(p->left, word);
    } else {
        p->right = addtree(p->right, word);
    }

    return p;
}

void treeprint(struct tnode *p)
{
    if (p != NULL) {
        treeprint(p->left);
        printf("count = %4d, word = %s\n", p->count, p->word);
        treeprint(p->right);
    }

    return;
}

struct tnode *talloc()
{
    return (struct tnode *)malloc(sizeof(struct tnode));
}

char *strdup(char *s)
{
    char *p = (char *)malloc(strlen(s) + 1);
    if (p != NULL) {
        strcpy(p, s);
    }
    return p;
}