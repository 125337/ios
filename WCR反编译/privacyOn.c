// privacyOn @ 01dc85e8

/* Function Stack Size: 0x10 bytes */

bool WCRSSOverviewRankListController::privacyOn(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_privacyOn) & 1;
}

