// FUN_00214708 @ 00214708

void FUN_00214708(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_a0;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     uVar2 = local_20, lVar1 == 0)) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    lVar1 = local_28;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,lVar1);
    if ((uVar2 & 1) == 0) {
      local_18 = 0;
      local_38 = 1;
    }
    else {
      local_40 = 0;
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_28);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_40;
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) == 0) {
        local_a0 = 0;
      }
      else {
        local_a0 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_a0;
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

