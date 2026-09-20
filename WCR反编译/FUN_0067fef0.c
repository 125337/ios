// FUN_0067fef0 @ 0067fef0

byte FUN_0067fef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_208;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined4 local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  _objc_initWeak(auStack_50,local_48);
  puVar4 = PTR_WCRefineHelper_026ce000;
  uVar3 = 1;
  FUN_0067d668(1,local_30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_00681c84;
  local_90 = &DAT_0257e8a8;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar6 = local_30;
  local_88 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = pcVar6;
  _objc_copyWeak(auStack_70,auStack_50);
  uVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4058000000000000,puVar4,PTR_s_presentPageSheetSingleLineInputW_026a46e0,&cf_S6e>kc,
             uVar3,uVar2,&local_a8);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (local_58 == (undefined *)0x0) {
    local_21 = 0;
    local_ac = 1;
  }
  else {
    puVar4 = local_58;
    FUN_00680afc(local_58,&cf_hostViewController);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = puVar4;
    while( true ) {
      puVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar4 == (undefined *)0x0) break;
      puVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_c8;
      local_c8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_viewWithTag__026cabe0,0xe1b56);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    local_d0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)puVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setTitle_forState__026caab8,&cf_S,0);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323f00,DAT_02324258,DAT_02324250,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_viewWithTag__026cabe0,0xe1b55);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_c0;
    local_d8 = puVar4;
    FUN_006833c8();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar5;
    if (puVar5 != (undefined *)0x0) {
      if (local_30 == (cfstringStruct *)0x0) {
        local_208 = &cf___;
      }
      else {
        local_208 = local_30;
      }
      _objc_setAssociatedObject(puVar5,DAT_026f4520,local_208,3);
      FUN_00683704(local_e0,local_30);
    }
    puVar4 = local_d8;
    puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((((ulong)puVar4 & 1) != 0) && (local_e0 != (undefined *)0x0)) {
      _objc_setAssociatedObject(local_e0,DAT_026f4518,local_d8,1);
      pcVar6 = &cf_wcr_paymentSubtitleEditingChanged_;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_58,pcVar6,0x20000);
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar6);
      if (((ulong)puVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,pcVar6,local_e0);
      }
    }
    local_21 = 1;
    local_ac = 1;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_78,0);
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_88,0);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

