// wcr_layoutMode @ 01dd3db8

/* Function Stack Size: 0x10 bytes */

long_long WCRefineSessionStatsViewController::wcr_layoutMode(ID param_1,SEL param_2)

{
  ID IVar1;
  int iVar2;
  undefined8 local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_portraitMode_026afd68);
  if ((IVar1 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overviewMode_026af898);
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isGroup_026af768);
      iVar2 = 2;
      if ((param_1 & 1) != 0) {
        iVar2 = 1;
      }
      local_18 = (long_long)iVar2;
    }
    else {
      local_18 = 0;
    }
  }
  else {
    local_18 = 3;
  }
  return local_18;
}

