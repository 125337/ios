// hasRecentMomentCount3Days @ 015272f0

/* Function Stack Size: 0x10 bytes */

bool WCRTopBarProfileData::hasRecentMomentCount3Days(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

