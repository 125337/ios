// historyReloadFinished @ 0152ef88

/* Function Stack Size: 0x10 bytes */

bool WCRInvitedMemberListViewController::historyReloadFinished(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_historyReloadFinished) & 1;
}

