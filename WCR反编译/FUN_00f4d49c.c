// FUN_00f4d49c @ 00f4d49c

void FUN_00f4d49c(long param_1)

{
  long lVar1;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_38 = &cf_elSVGr;
  }
  else {
    local_38 = &cf__mR0Rh_N_;
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      local_38 = &cf_mRh_N_1Y_;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

