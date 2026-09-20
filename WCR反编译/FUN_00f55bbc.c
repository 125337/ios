// FUN_00f55bbc @ 00f55bbc

void FUN_00f55bbc(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_20;
  if ((uVar3 & 1) == 0) {
    if ((local_20 != 0) &&
       (uVar3 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_name_0269d828), (uVar3 & 1) != 0
       )) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_30 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_30;
      bVar1 = (uVar4 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(&local_30,0);
      if (local_24 != 0) goto LAB_00f55d54;
    }
    uVar3 = local_20;
    FUN_00f53b40();
    _objc_retainAutoreleasedReturnValue();
    local_24 = 1;
    local_18 = uVar3;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar4;
    local_24 = 1;
  }
LAB_00f55d54:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

