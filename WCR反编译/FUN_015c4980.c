// FUN_015c4980 @ 015c4980

void FUN_015c4980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,uint param_7,byte param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double local_108;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40;
  byte local_31;
  uint local_30;
  uint local_2c;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  puVar1 = local_28;
  local_31 = param_8;
  local_30 = param_7;
  local_2c = param_6;
  FUN_015c2a0c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  if ((puVar1 == (undefined *)0x0) || (local_30 == 0)) {
    local_44 = 1;
  }
  else {
    FUN_015c5938(local_28);
    puVar1 = local_28;
    FUN_015c33ec();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    FUN_015c3a54(local_28,local_40);
    if (local_30 == 0) {
      local_108 = 0.0;
    }
    else {
      local_108 = (double)NEON_ucvtf((ulong)local_2c);
      dVar3 = (double)NEON_ucvtf((ulong)local_30);
      local_108 = local_108 / dVar3;
    }
    local_78 = local_108;
    local_70 = param_1;
    uStack_68 = param_2;
    local_60 = param_3;
    uStack_58 = param_4;
    if (local_50 == (undefined *)0x0) {
      puVar2 = PTR_WCRVoiceSeekOverlay_026cede0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_70,uStack_68,local_60,uStack_58);
      puVar1 = local_50;
      local_50 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_50,PTR_s_setAlpha__026ca860);
      dVar3 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_wcr_updateProgress_currentMS_tot_026b0df0,local_2c,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_50);
    }
    else {
      local_c0 = param_1;
      uStack_b8 = param_2;
      local_b0 = param_3;
      uStack_a8 = param_4;
      local_a0 = param_1;
      uStack_98 = param_2;
      local_90 = param_3;
      uStack_88 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,local_50,PTR_s_setFrame__026ca960);
      dVar3 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_wcr_updateProgress_currentMS_tot_026b0df0,local_2c,local_30);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layoutIfNeeded_026ca790);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bringSubviewToFront__026ca550,local_50);
    if (((local_31 & 1) == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_alpha_026ca4d8), puVar2 = local_50,
       puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8, 0.95 <= dVar3)) {
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_50,PTR_s_setAlpha__026ca860);
    }
    else {
      local_e8 = PTR___NSConcreteStackBlock_02578660;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_015c5cf8;
      local_d0 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323cc0,puVar1,PTR_s_animateWithDuration_animations__026ca4e0,&local_e8);
      _objc_storeStrong(&local_c8,0);
    }
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

