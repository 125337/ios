// wcr_usesPrivateTimeRange @ 01dcf0cc

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsViewController::wcr_usesPrivateTimeRange(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined4 local_24;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_overviewMode_026af898);
  local_24 = 0;
  if ((IVar1 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_portraitMode_026afd68);
    local_24 = 0;
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isGroup_026af768);
      local_24 = (uint)param_1 ^ 1;
    }
  }
  return local_24 & 1;
}

