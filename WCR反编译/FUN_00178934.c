// FUN_00178934 @ 00178934

void FUN_00178934(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_a0;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*DAT_028c88c8)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_20;
  local_30 = param_1;
  FUN_00180090();
  uVar3 = local_30;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_40 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
       uVar3 == 0)) {
      uVar3 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
      local_40 = 1;
    }
    else {
      uVar3 = local_20;
      FUN_0018033c(local_20,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_injectedKeys_0269fa50);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar3;
      if (uVar3 == 0) {
        local_a0 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_a0;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_40 = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

