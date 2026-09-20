// setPrivacyOn: @ 01dc8614

/* Function Stack Size: 0x14 bytes */

void WCRSSOverviewRankListController::setPrivacyOn_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_privacyOn) = (byte)param_3 & 1;
  return;
}

