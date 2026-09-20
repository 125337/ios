// setHistoryReloadStarted: @ 0152ef58

/* Function Stack Size: 0x14 bytes */

void WCRInvitedMemberListViewController::setHistoryReloadStarted_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_historyReloadStarted) = (byte)param_3 & 1;
  return;
}

