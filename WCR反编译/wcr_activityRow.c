// wcr_activityRow @ 01dbe4dc

/* Function Stack Size: 0x10 bytes */

long_long WCRefineSessionStatsLayoutViewController::wcr_activityRow(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_showsActivityRow_026c5200);
  if ((IVar1 & 1) == 0) {
    local_18 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_scanCapRow_026c5208);
    local_18 = param_1 + 1;
  }
  return local_18;
}

