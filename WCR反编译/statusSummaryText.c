// statusSummaryText @ 00f28550

/* Function Stack Size: 0x10 bytes */

ID WCRefineDoNotDisturbSupport::statusSummaryText(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isFeatureEnabled_026abe00);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__g_T_u;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEffectivelyActive_0269d708);
    local_18 = &cf_Rpb_N;
    if ((param_1 & 1) == 0) {
      local_18 = &cf__sQ;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

