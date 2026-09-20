// setEditingList: @ 01a06580

/* Function Stack Size: 0x14 bytes */

void WCRefineFriendRelationResultListViewController::setEditingList_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_editingList) = (byte)param_3 & 1;
  return;
}

