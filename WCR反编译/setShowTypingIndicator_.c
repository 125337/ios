// setShowTypingIndicator: @ 01c6d870

/* Function Stack Size: 0x14 bytes */

void WCRefineNavigationAvatarViewController::setShowTypingIndicator_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showTypingIndicator) = (byte)param_3 & 1;
  return;
}

