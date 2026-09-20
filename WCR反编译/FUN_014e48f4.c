// FUN_014e48f4 @ 014e48f4

undefined4 FUN_014e48f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 local_7c;
  ulong local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_14 = 0;
    local_2c = 1;
  }
  else {
    local_38 = 0;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_28);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
      if ((uVar3 & 1) == 0) {
        local_14 = 0;
      }
      else {
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
        if ((long)uVar3 < 1) {
          local_7c = 0;
        }
        else {
          local_7c = (undefined4)uVar3;
        }
        local_14 = local_7c;
      }
    }
    else {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_unsignedIntValue_0269db10);
      local_14 = (undefined4)uVar3;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

