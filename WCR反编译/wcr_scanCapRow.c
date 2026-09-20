// wcr_scanCapRow @ 01dbe468

/* Function Stack Size: 0x10 bytes */

long_long WCRefineSessionStatsLayoutViewController::wcr_scanCapRow(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_showsScanCapRow_026c51f0);
  if ((IVar1 & 1) == 0) {
    local_18 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_rankRow_026c51f8);
    local_18 = param_1 + 1;
  }
  return local_18;
}

