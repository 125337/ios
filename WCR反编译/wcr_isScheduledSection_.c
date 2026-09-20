// wcr_isScheduledSection: @ 01beca68

/* Function Stack Size: 0x18 bytes */

bool WCRefineMomentsDraftListViewController::wcr_isScheduledSection_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined4 local_2c;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_hasScheduledSection_026c0aa0);
  local_2c = 0;
  if ((param_1 & 1) != 0) {
    local_2c = (uint)(param_3 == 0);
  }
  return local_2c;
}

