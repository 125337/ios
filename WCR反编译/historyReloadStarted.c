// historyReloadStarted @ 0152ef2c

/* Function Stack Size: 0x10 bytes */

bool WCRInvitedMemberListViewController::historyReloadStarted(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_historyReloadStarted) & 1;
}

