// FUN_00539cd4 @ 00539cd4

void FUN_00539cd4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  uVar2 = local_20;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_30 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___RT_);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__relative_,&cf___RT_);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_38 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf___RT_);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__);
      if ((uVar2 & 1) == 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___RT_,&cf_____RT___)
        ;
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_38;
        local_38 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
    uVar2 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

