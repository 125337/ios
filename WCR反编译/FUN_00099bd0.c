// FUN_00099bd0 @ 00099bd0

void FUN_00099bd0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_50 [4];
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
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar4 = local_30;
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar4;
    }
    local_24 = (uint)bVar1;
    _objc_storeStrong(&local_30,0);
    if (local_24 == 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
      if ((uVar4 & 1) != 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_50[0] = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar4 = local_50[0];
        bVar1 = (uVar2 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar4;
        }
        local_24 = (uint)bVar1;
        _objc_storeStrong(local_50,0);
        if (local_24 != 0) goto LAB_00099ea0;
      }
      local_18 = 0;
      local_24 = 1;
    }
  }
LAB_00099ea0:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

