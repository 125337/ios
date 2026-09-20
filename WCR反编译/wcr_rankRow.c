// wcr_rankRow @ 01dbe41c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineSessionStatsLayoutViewController::wcr_rankRow(ID param_1,SEL param_2)

{
  int iVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_showsNameRow_026c51e8);
  iVar1 = 2;
  if ((param_1 & 1) == 0) {
    iVar1 = 1;
  }
  return (long)iVar1;
}

