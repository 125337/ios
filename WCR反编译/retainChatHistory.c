// retainChatHistory @ 0185af40

/* Function Stack Size: 0x10 bytes */

bool WCRefineBatchDeleteFriendViewController::retainChatHistory(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_retainChatHistory) & 1;
}

