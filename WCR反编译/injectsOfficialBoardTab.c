// injectsOfficialBoardTab @ 0107affc

/* Function Stack Size: 0x10 bytes */

bool WCRefineLocalEmoticonStore::injectsOfficialBoardTab(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined4 local_24;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEnabled_026a0ef0);
  local_24 = 0;
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_entrySide_026a3ca0);
    local_24 = (uint)(param_1 != 2);
  }
  return local_24;
}

