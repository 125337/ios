// wantsTableHeader @ 00fce49c

/* Function Stack Size: 0x10 bytes */

bool WCRefineHomeTableHeaderHost::wantsTableHeader(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined4 local_24;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_todoWantsTableHeader_026ad150);
  local_24 = 1;
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stripWantsTableHeader_026ad158);
    local_24 = (uint)param_1;
  }
  return local_24 & 1;
}

