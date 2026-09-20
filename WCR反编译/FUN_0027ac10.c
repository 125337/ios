// FUN_0027ac10 @ 0027ac10

ulong FUN_0027ac10(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_c0;
  ulong local_a8;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    local_40 = 0;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_28);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_40 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedLongLongValue_0269d6b8);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_longLongValue_0269d5e0);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
        if ((uVar3 & 1) == 0) {
          local_18 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
          if (param_1 <= 0.0) {
            local_c0 = 0;
          }
          else {
            local_c0 = (ulong)param_1;
          }
          local_18 = local_c0;
        }
      }
      else {
        local_a8 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_longLongValue_0269d5e0);
        if ((long)local_a8 < 1) {
          local_a8 = 0;
        }
        local_18 = local_a8;
      }
    }
    else {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_unsignedLongLongValue_0269d6b8);
      local_18 = uVar3;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

