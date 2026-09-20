// FUN_002620fc @ 002620fc

void FUN_002620fc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_delegateEx_026a0d70);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_delegateEx);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_20 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_20 == 0) &&
       (uVar1 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_delegateEx_026a0d70),
       (uVar1 & 1) != 0)) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegateEx_026a0d70);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_20;
      local_20 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
  }
  if ((local_20 == 0) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808),
     (uVar1 & 1) != 0)) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_20 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

