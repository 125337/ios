// editingList @ 01a06554

/* Function Stack Size: 0x10 bytes */

bool WCRefineFriendRelationResultListViewController::editingList(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_editingList) & 1;
}

