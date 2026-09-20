// FUN_0025a96c @ 0025a96c

void FUN_0025a96c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_58 [3];
  ulong local_40;
  long local_38;
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar2;
    local_38 = 0;
    while (local_38 < 0xc && local_30 != 0) {
      uVar3 = local_30;
      _objc_getAssociatedObject(local_30,DAT_026dfb98);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_40 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      uVar2 = local_40;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_30;
        _objc_getAssociatedObject(local_30,DAT_026dfb88);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_58[0] = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar2 = local_58[0];
        bVar1 = (uVar3 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar2;
        }
        local_24 = (uint)bVar1;
        _objc_storeStrong(local_58,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
        local_24 = 1;
      }
      _objc_storeStrong(&local_40,0);
      if (local_24 != 0) goto LAB_0025ac3c;
      local_38 = local_38 + 1;
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_18 = 0;
    local_24 = 1;
LAB_0025ac3c:
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

