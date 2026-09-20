// FUN_004dd4d4 @ 004dd4d4

byte FUN_004dd4d4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  bool bVar4;
  ulong local_108;
  ulong local_d0;
  long local_88;
  ulong local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  byte local_59;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_30;
  FUN_004ddba4();
  if ((uVar1 & 1) == 0) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    local_59 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_d0 = 0;
    }
    else {
      local_d0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_d0;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_71 = 0;
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_108 = 0;
    }
    else {
      local_108 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_108;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_108;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_68;
    if ((local_50 == 0) || (local_68 == 0)) {
      local_21 = 1;
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = uVar1;
      for (local_88 = 0; bVar4 = local_80 != 0 && local_88 < 0xc, local_80 != 0 && local_88 < 0xc;
          local_88 = local_88 + 1) {
        uVar1 = local_80;
        FUN_004e0558();
        if ((uVar1 & 1) != 0) {
          local_21 = 0;
          goto LAB_004dd9c8;
        }
        if (local_80 == local_50) {
          bVar4 = false;
          break;
        }
        uVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_80;
        local_80 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_50;
      FUN_004e074c(bVar4);
      if ((uVar1 & 1) == 0) {
        local_21 = 1;
      }
      else {
        local_21 = 0;
      }
LAB_004dd9c8:
      local_48 = 1;
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

