/**
 * @file Voter_Info.h
 * @author nehal kamble (kamblenehal1234567@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef voter_info_H
#define voter_info_H

typedef struct
{
    char VoterName[50][100];
    int VoterID[50];
    int VoterMNo[50];
} voterId;

typedef struct
{
    char CdName[5][20];
    char CdParty[5][20];
    char CdSymbol[5][20];
} candidateId;
candidateId CdI;
voterId VdI;
int votes[5];

#endif
