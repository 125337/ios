// wcr_displayRowCount @ 01dbe550

/* Function Stack Size: 0x10 bytes */

long_long WCRefineSessionStatsLayoutViewController::wcr_displayRowCount(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_28;
  
  local_28 = 2;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_showsNameRow_026c51e8);
  if ((IVar1 & 1) != 0) {
    local_28 = 3;
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_showsScanCapRow_026c51f0);
  if ((IVar1 & 1) != 0) {
    local_28 = local_28 + 1;
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_showsActivityRow_026c5200);
  if ((param_1 & 1) != 0) {
    local_28 = local_28 + 1;
  }
  return local_28;
}

