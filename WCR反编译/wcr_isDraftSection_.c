// wcr_isDraftSection: @ 01becad0

/* Function Stack Size: 0x18 bytes */

bool WCRefineMomentsDraftListViewController::wcr_isDraftSection_
               (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  undefined1 local_11;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_hasDraftSection_026c0aa8);
  if ((IVar1 & 1) == 0) {
    local_11 = false;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_hasScheduledSection_026c0aa0);
    if ((param_1 & 1) == 0) {
      local_11 = param_3 == 0;
    }
    else {
      local_11 = param_3 == 1;
    }
  }
  return (uint)local_11;
}

