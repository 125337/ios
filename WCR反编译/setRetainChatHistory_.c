// setRetainChatHistory: @ 0185af6c

/* Function Stack Size: 0x14 bytes */

void WCRefineBatchDeleteFriendViewController::setRetainChatHistory_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_retainChatHistory) = (byte)param_3 & 1;
  return;
}

