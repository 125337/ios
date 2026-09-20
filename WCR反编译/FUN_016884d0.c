// FUN_016884d0 @ 016884d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016884d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6,byte param_7)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  ulong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong *local_40;
  ulong local_38;
  undefined4 local_30;
  byte local_2a;
  byte local_29;
  ulong local_28;
  
  puVar1 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar1,param_5);
  local_2a = param_7;
  local_29 = param_6;
  if (local_28 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__bV1Y_);
    FUN_01686c18();
    local_30 = 1;
  }
  else {
    if (DAT_028e3c70 != 0) {
      uVar2 = DAT_028e3c70;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3c70,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_WCRSuperFloatCropViewController_026ceea8;
      local_38 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatCropViewController_026ceea8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setOnClose__026b2458,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3c70,PTR_s_setHidden__026ca970,1);
      _objc_storeStrong(&DAT_028e3c70);
      FUN_01686c18();
      puVar1 = &local_38;
      _objc_storeStrong(puVar1,0);
    }
    FUN_01688b74();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    local_79 = 0;
    local_40 = puVar1;
    if (puVar1 == (ulong *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_60 = param_1;
      uStack_58 = param_2;
      local_50 = param_3;
      uStack_48 = param_4;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_coordinateSpace_0269cb30);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_60 = param_1;
      uStack_58 = param_2;
      local_50 = param_3;
      uStack_48 = param_4;
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    local_88 = (undefined *)0x0;
    if (local_40 == (ulong *)0x0) {
      puVar4 = PTR_WCRSFCropHostWindow_026ceeb0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_60,uStack_58,local_50,uStack_48);
      puVar3 = local_88;
      local_88 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      puVar4 = PTR_WCRSFCropHostWindow_026ceeb0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar3 = local_88;
      local_88 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uStack_c8 = uStack_58;
      local_d0 = local_60;
      uStack_b8 = uStack_48;
      local_c0 = local_50;
      local_b0 = local_d0;
      uStack_a8 = uStack_c8;
      local_a0 = local_c0;
      uStack_98 = uStack_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,uStack_58,local_50,uStack_48,local_88,PTR_s_setFrame__026ca960);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(double *)PTR__UIWindowLevelAlert_02578230 + 10.0,local_88,
               PTR_s_setWindowLevel__026caae8);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setHidden__026ca970,0);
    puVar3 = PTR_WCRSuperFloatCropViewController_026ceea8;
    _objc_alloc_init();
    local_d8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setImage__026ca978,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setTranslateMode__026b1e68,local_29 & 1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_setStartsWithFullScreen__026b1e48,local_2a & 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setCropVC__026b2880,local_d8);
    _objc_initWeak(auStack_e0,local_88);
    local_108 = PTR___NSConcreteStackBlock_02578660;
    local_100 = 0xc2000000;
    local_fc = 0;
    local_f8 = FUN_016897bc;
    local_f0 = &DAT_0257be28;
    _objc_copyWeak(auStack_e8,auStack_e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setOnClose__026b2458,&local_108);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setRootViewController__026caa20,local_d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_makeKeyAndVisible_0269cd78);
    _objc_storeStrong(&DAT_028e3c70,local_88);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_40,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

