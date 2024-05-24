#ifndef SHANNON_FANO_H
#define SHANNON_FANO_H

#include <inttypes.h>
#include <stdbool.h>

typedef struct SFNode {
    struct SFNode *left, *right;
    uint32_t length;
    float frequency;
    char *value;
    char *code;
} SFNode;

SFNode* newSFNode(char value[], float frequency);

bool isLeaf(SFNode *node);

SFNode** splitSFNode(SFNode *node);
// SFNode* buildShannonFanoTree(char values[], float frequencies[]);
SFNode* buildShannonFanoTree(SFNode *parent, uint32_t length, char *values, float *frequencies) {

void appendSFNode(SFNode *parent, SFNode *node);
void printCodes(SFNode *node, uint8_t codeBuffer[], uint32_t index);
void ShannonFanoEncode(char values[], float frequencies[]);

#endif //SHANNON_FANO_H