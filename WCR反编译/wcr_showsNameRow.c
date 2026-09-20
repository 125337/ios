// wcr_showsNameRow @ 01dbe280

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsLayoutViewController::wcr_showsNameRow(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined4 local_24;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mode_026ab488);
  local_24 = 1;
  if (IVar1 != 1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mode_026ab488);
    local_24 = (uint)(param_1 == 2);
  }
  return local_24;
}

