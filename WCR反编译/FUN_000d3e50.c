// FUN_000d3e50 @ 000d3e50

void FUN_000d3e50(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_000d88a4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    (*DAT_028c82b0)(local_18,local_20);
  }
  else {
    FUN_000d8808();
    if ((param_1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_J_YU_d__X___sQ);
    }
    else {
      uVar1 = local_18;
      FUN_000d9a18(local_18,local_28);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_J_YU_d__X__fNS_u)
        ;
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

