// FUN_01be2074 @ 01be2074

void FUN_01be2074(long param_1)

{
  long lVar1;
  cfstringStruct *local_58;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x30;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,
               *(undefined8 *)(param_1 + 0x20));
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setDidClean__026c0968,1);
    lVar1 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    local_58 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x28),PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stringWithFormat__0269cca8,&cf__nt);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_58;
    }
    else {
      local_58 = &cf__nt;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_58;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,local_38,
               *(undefined8 *)(param_1 + 0x20));
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

