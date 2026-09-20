// FUN_008a7974 @ 008a7974

void FUN_008a7974(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_88;
  ulong local_50;
  char *local_48;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028cddda);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 == 0) {
      pcVar2 = "WCC2CImageScrollView";
      _objc_getClass();
      uVar1 = local_20;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) == 0) {
        local_88 = 0;
      }
      else {
        local_88 = local_20;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = local_88;
      while (local_50 != 0) {
        if (local_48 != (char *)0x0) {
          uVar4 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_48);
          uVar1 = local_50;
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar1;
            goto LAB_008a7bbc;
          }
        }
        uVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_50;
        local_50 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      local_18 = 0;
LAB_008a7bbc:
      local_24 = 1;
      _objc_storeStrong(&local_50,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_24 = 1;
      local_18 = uVar1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

