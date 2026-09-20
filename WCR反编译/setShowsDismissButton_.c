// setShowsDismissButton: @ 018da900

/* Function Stack Size: 0x14 bytes */

void WCRChatToolbarActionsViewController::setShowsDismissButton_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showsDismissButton) = (byte)param_3 & 1;
  return;
}

