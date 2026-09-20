// FUN_003e0f38 @ 003e0f38

void FUN_003e0f38(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_58;
  undefined4 local_50;
  byte local_49;
  ulong local_48;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*DAT_028ca388)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = true;
  if ((param_1 & 1) != 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_DYLD_INSERT_LIBRARIES);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    bVar1 = uVar3 == 0;
    local_48 = uVar3;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  uVar3 = local_30;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_50 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_removeObjectForKey__0269d700,&cf_DYLD_INSERT_LIBRARIES);
    uVar3 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_50 = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

