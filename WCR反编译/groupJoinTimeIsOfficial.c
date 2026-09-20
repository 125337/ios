// groupJoinTimeIsOfficial @ 014dd92c

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsResult::groupJoinTimeIsOfficial(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xb) & 1;
}

