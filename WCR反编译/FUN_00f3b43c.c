// FUN_00f3b43c @ 00f3b43c

void FUN_00f3b43c(long param_1)

{
  bool bVar1;
  undefined *local_58;
  undefined *local_40;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x20) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S1Y_);
  }
  else {
    bVar1 = *(double *)(param_1 + 0x30) < 1.0;
    local_58 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_S);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_58;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_S);
      _objc_retainAutoreleasedReturnValue();
      local_30 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_58;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_sendEmoticonData_title_chatVC__026ac138,
               *(undefined8 *)(param_1 + 0x20),local_28,*(undefined8 *)(param_1 + 0x28));
    _objc_storeStrong(&local_28,0);
  }
  return;
}

