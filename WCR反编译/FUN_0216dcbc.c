// FUN_0216dcbc @ 0216dcbc

void FUN_0216dcbc(cfstringStruct *param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = param_1;
  FUN_0219d408();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  FUN_0219d628();
  pcVar1 = local_28;
  if (((ulong)param_1 & 1) == 0) {
    FUN_0219d6e8();
    pcVar1 = local_28;
    if (((ulong)param_1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    else {
      pcVar1 = &cf_web_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_web_,PTR_s_stringByAppendingString__0269d398,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

