// FUN_008ac670 @ 008ac670

void FUN_008ac670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_a8;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  long local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  FUN_008ac90c(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if (uVar1 == 0) {
    if ((local_20 == 0) || (local_30 == 0)) {
      local_18 = 0;
      local_48 = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_50 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) == 0) {
        local_a8 = 0;
      }
      else {
        local_a8 = local_50;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_a8;
      local_48 = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = 1;
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

