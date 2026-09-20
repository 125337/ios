// FUN_000889e0 @ 000889e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_000889e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  byte local_228;
  uint local_1fc;
  long local_1f0;
  byte local_19c;
  bool local_c9;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_92;
  byte local_91;
  long local_90;
  undefined1 local_81;
  long local_80;
  undefined4 local_64;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_21;
  
  local_50 = 0;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  uStack_30 = param_4;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_7);
  if (local_50 == 0) {
    local_21 = 0;
    local_64 = 1;
  }
  else {
    local_81 = 0;
    bVar2 = false;
    uVar1 = local_58 != 0;
    if ((bool)uVar1) {
      lVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar4 != local_58;
      local_81 = uVar1;
      local_80 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar4);
      uVar1 = local_81;
    }
    local_81 = uVar1;
    if (bVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeFromSuperview_026ca800);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addSubview__026ca4c0,local_50);
    }
    lVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_viewWithTag__026cabe0,0x24f6e5);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = "MMEmoticonView";
    local_90 = lVar4;
    _objc_getClass();
    local_19c = 0;
    if (pcVar5 != (char *)0x0) {
      lVar4 = local_60;
      FUN_00074c2c();
      local_19c = (byte)lVar4;
    }
    lVar4 = local_90;
    local_91 = local_19c & 1;
    pcVar5 = "MMEmoticonView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_isKindOfClass__0269cd68,pcVar5);
    local_92 = (byte)lVar4;
    if ((local_90 != 0) && ((local_91 & 1) != (local_92 & 1))) {
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_removeFromSuperview_026ca800);
      _objc_storeStrong(&local_90,0);
    }
    if (local_90 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
      lVar6 = local_60;
      local_b8 = param_1;
      local_b0 = param_2;
      local_a8 = param_3;
      local_a0 = param_4;
      FUN_0008da28();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_90;
      local_90 = lVar6;
      (*(code *)PTR__objc_release_02578630)(lVar4);
      if (local_90 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_90);
        _objc_setAssociatedObject(local_50,DAT_026df738,local_60,3);
      }
    }
    local_c9 = local_90 == 0;
    if (local_c9) {
      local_1f0 = 0;
    }
    else {
      local_1f0 = local_50;
      _objc_getAssociatedObject(local_50,DAT_026df738);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_1f0;
    }
    local_c9 = !local_c9;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = local_1f0;
    if (local_c9) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    local_1fc = 0;
    if (local_c0 != 0) {
      lVar4 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isEqualToString__0269ccc8,local_60);
      local_1fc = (uint)lVar4;
    }
    lVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
    bVar3 = (byte)lVar4;
    _CGRectEqualToRect(param_1,param_2,param_3,param_4,local_48,uStack_40,local_38,uStack_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,uStack_40,local_38,uStack_30,local_50,PTR_s_setFrame__026ca960);
    if (local_90 != 0) {
      FUN_0008e0f0(local_90,local_50,local_60,(byte)local_1fc & 1 ^ 1);
    }
    local_228 = 0;
    if ((local_1fc & 1) != 0) {
      local_228 = bVar3;
    }
    local_21 = local_228 & 1;
    local_64 = 1;
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  return local_21 & 1;
}

