// customSection @ 01ab5c24

/* Function Stack Size: 0x10 bytes */

long_long WCRGroupListViewController::customSection(ID param_1,SEL param_2)

{
  int iVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasQuickSection_026bde38);
  iVar1 = 2;
  if ((param_1 & 1) == 0) {
    iVar1 = 1;
  }
  return (long)iVar1;
}

