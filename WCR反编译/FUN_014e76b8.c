// FUN_014e76b8 @ 014e76b8

byte FUN_014e76b8(undefined8 param_1)

{
  ulong uVar1;
  ulong local_38;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_21 = 1;
  }
  else {
    local_18 = &DAT_028e3790;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025862d8);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar1 = DAT_028e3788;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3788,PTR_s_containsObject__0269cbb8,local_38);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_gh_);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__app);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_containsString__0269d0b0,&cf__stranger);
          if ((uVar1 & 1) == 0) {
            local_21 = 0;
          }
          else {
            local_21 = 1;
          }
        }
        else {
          local_21 = 1;
        }
      }
      else {
        local_21 = 1;
      }
    }
    else {
      local_21 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

