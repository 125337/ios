// FUN_008d7028 @ 008d7028

void FUN_008d7028(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong local_48;
  ulong local_40;
  int local_38;
  char *local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "MMInputToolView";
  _objc_getClass();
  uVar3 = local_20;
  local_28 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = local_20;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar4;
      while (local_40 != 0) {
        uVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,local_28);
        uVar3 = local_40;
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar3;
          local_38 = 1;
          goto LAB_008d71e0;
        }
        uVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_40;
        local_40 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_38 = 2;
LAB_008d71e0:
      _objc_storeStrong(&local_40,0);
      iVar5 = local_38 + -2;
      if (iVar5 == 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nextResponder_0269d0d8);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar3;
        while (local_48 != 0) {
          uVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,local_28);
          uVar3 = local_48;
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar3;
            local_38 = 1;
            goto LAB_008d7308;
          }
          uVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_nextResponder_0269d0d8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_48;
          local_48 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_38 = 5;
LAB_008d7308:
        _objc_storeStrong(&local_48,0);
        iVar5 = local_38 + -5;
        if (iVar5 == 0) {
          local_18 = 0;
          iVar5 = 1;
          local_38 = 1;
        }
      }
      goto LAB_008d7334;
    }
  }
  local_18 = 0;
  iVar5 = 1;
  local_38 = 1;
LAB_008d7334:
  _objc_storeStrong(iVar5,&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

