// FUN_01605314 @ 01605314

void FUN_01605314(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsUserName);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_30 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar2 = local_30;
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_24 = (uint)bVar1;
    _objc_storeStrong(&local_30,0);
    if (local_24 == 0) {
      local_18 = 0;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

