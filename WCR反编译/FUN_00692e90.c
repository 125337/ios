// FUN_00692e90 @ 00692e90

void FUN_00692e90(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00693da8(local_20,&cf_url);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  local_18 = local_28;
  if (uVar1 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = 1;
    goto LAB_00693120;
  }
  uVar1 = local_20;
  FUN_00680afc(0,local_20,&cf_data);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
LAB_006930d8:
    uVar1 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  else {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKey__0269e048,&cf_url);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_0067d980();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    uVar1 = local_28;
    if (uVar3 == 0) goto LAB_006930d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  local_38 = 1;
  _objc_storeStrong(&local_40,0);
LAB_00693120:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

