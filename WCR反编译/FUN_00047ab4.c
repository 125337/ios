// FUN_00047ab4 @ 00047ab4

void FUN_00047ab4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_30 = 1;
  }
  else {
    FUN_00048998();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    local_38 = uVar3;
    if (uVar3 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_30 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mutableCopy_0269d8a0);
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,&cf_fixedInviteRule);
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
      local_30 = 1;
      local_18 = uVar2;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

