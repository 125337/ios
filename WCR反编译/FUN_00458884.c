// FUN_00458884 @ 00458884

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00458884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double local_2d0;
  double local_298;
  undefined *local_250;
  undefined *local_80;
  undefined *local_70;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  ulong local_48;
  undefined4 local_40;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_29 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_40 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOpaque__026ca9f8,0);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x2c641);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    if ((local_29 & 1) == 0) {
      if (uVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setHidden__026ca970,1);
      }
      local_40 = 1;
    }
    else {
      local_50 = 7;
      puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeFromSuperview_026ca800);
        puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
        _objc_alloc();
        puVar4 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,local_50)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithEffect__026ca6e0);
        local_58 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTag__026caa80,DAT_02324198);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setUserInteractionEnabled__026caad8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setClipsToBounds__026ca8c8,1);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x4028000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_insertSubview_atIndex__026ca748,local_58,0);
        _objc_storeStrong(&local_48,local_58);
        _objc_storeStrong(&local_58,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidden__026ca970,0);
        uVar3 = local_48;
        puVar2 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,local_50)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setEffect__026ca930);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = PTR_s_BG_2_026a1010;
      uVar7 = 0x3ff0000000000000;
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      FUN_004584a0();
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = local_60 == (undefined *)0x0;
      local_68 = uVar3;
      if (bVar1) {
        local_250 = PTR__OBJC_CLASS___UIColor_026cdf78;
        uVar7 = DAT_02323e88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_250;
      }
      else {
        local_250 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323e80,local_60,PTR_s_colorWithAlphaComponent__026ca578);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_250;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setBackgroundColor__026ca888,local_250);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      dVar5 = 0.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      _CGRectGetWidth(dVar5,uVar7,param_3);
      dVar6 = dVar5 - 16.0;
      local_298 = dVar6;
      if (dVar6 <= 0.0) {
        local_298 = 0.0;
      }
      local_2d0 = 0.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      _CGRectGetHeight(local_2d0,dVar6,dVar5,param_4);
      local_2d0 = local_2d0 - 4.0;
      if (local_2d0 <= 0.0) {
        local_2d0 = 0.0;
      }
      uVar8 = 0x4000000000000000;
      uVar7 = 0x4020000000000000;
      FUN_004593d4();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,uVar8,local_298,local_2d0,local_48,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSubviewToBack__0269f5c0,local_48);
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      local_40 = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

