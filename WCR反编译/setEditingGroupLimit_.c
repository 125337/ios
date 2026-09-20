// setEditingGroupLimit: @ 01d162a8

/* Function Stack Size: 0x14 bytes */

void WCRefineQuickChatSettingsViewController::setEditingGroupLimit_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_editingGroupLimit) = (byte)param_3 & 1;
  return;
}

