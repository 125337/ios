// FUN_0085e524 @ 0085e524

byte FUN_0085e524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint local_14c;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  if ((local_30 == 0) ||
     (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    uVar2 = DAT_028cd0a0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd0a0,PTR_s_isEqualToString__0269ccc8,local_38);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      FUN_008201c0();
      uVar3 = local_38;
      local_50 = uVar2;
      _WCRefineProfileBgHTMLSnapshotSignature(local_38,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_58 = uVar3;
      FUN_0081f6b4(local_30,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_60 = uVar2;
      _objc_getAssociatedObject(local_30,&DAT_028cd4b2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_60;
      local_68 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      local_14c = 0;
      if (uVar2 != 0) {
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isHidden_026ca768);
        local_14c = 0;
        if ((uVar3 & 1) == 0) {
          uVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,local_58);
          local_14c = (uint)uVar3;
        }
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((local_14c & 1) == 0) {
        local_b8 = 0;
        uVar2 = DAT_028cd0b0;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd0b0,PTR_s_isEqualToString__0269ccc8,local_58)
        ;
        if ((uVar2 & 1) != 0) {
          _objc_storeStrong(&local_b8,DAT_028cd0a8);
        }
        if (local_b8 == 0) {
          uVar3 = local_58;
          _WCRefineProfileBgHTMLLoadSnapshot(local_58,local_50);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_b8;
          local_b8 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (local_b8 != 0) {
            _objc_storeStrong(&DAT_028cd0a8,local_b8);
            uVar3 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
            uVar2 = DAT_028cd0b0;
            DAT_028cd0b0 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
        }
        bVar1 = local_b8 != 0;
        if (bVar1) {
          uVar3 = local_30;
          FUN_0081f6b4(local_30,1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_60;
          local_60 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setImage__026ca978,local_b8);
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setHidden__026ca970,0);
          uVar4 = 0x3ff0000000000000;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAlpha__026ca860);
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,param_2,param_3,param_4,local_60,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_bringSubviewToFront__026ca550,local_60);
          _objc_setAssociatedObject(local_30,&DAT_028cd4b2,local_58,3);
        }
        local_48 = 1;
        local_21 = bVar1;
        _objc_storeStrong(&local_b8,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        local_b0 = param_1;
        uStack_a8 = param_2;
        local_a0 = param_3;
        uStack_98 = param_4;
        local_88 = param_1;
        uStack_80 = param_2;
        local_78 = param_3;
        uStack_70 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,param_3,param_4,local_60,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bringSubviewToFront__026ca550,local_60)
        ;
        local_21 = 1;
        local_48 = 1;
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    else {
      FUN_0081f43c(local_30);
      local_21 = 0;
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

