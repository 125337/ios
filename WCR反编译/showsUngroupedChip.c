// showsUngroupedChip @ 010871f4

/* Function Stack Size: 0x10 bytes */

bool WCRefineLocalEmoticonStore::showsUngroupedChip(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined1 local_11;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasUngroupedItems_026a3ae0);
  if ((IVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ungroupedChipHidden_026a3df0);
    if ((IVar1 & 1) == 0) {
      local_11 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allChipHidden_026a3de8);
      local_11 = (byte)param_1 & 1;
    }
  }
  return (uint)local_11;
}

