// editingAllGroups @ 01ac1ed4

/* Function Stack Size: 0x10 bytes */

bool WCRGroupListViewController::editingAllGroups(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_editingAllGroups) & 1;
}

