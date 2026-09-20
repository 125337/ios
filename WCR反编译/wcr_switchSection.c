// wcr_switchSection @ 01dbe19c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineSessionStatsLayoutViewController::wcr_switchSection(ID param_1,SEL param_2)

{
  int iVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_isOverviewLayout_026c51e0);
  iVar1 = 2;
  if ((param_1 & 1) == 0) {
    iVar1 = -1;
  }
  return (long)iVar1;
}

