// FUN_00253944 @ 00253944

void FUN_00253944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined *local_1f8;
  ulong local_1a0;
  undefined8 local_198;
  double local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  double local_c8;
  undefined **local_c0;
  double local_b8;
  double local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  undefined *local_90;
  undefined *local_88 [2];
  ulong local_78;
  undefined4 local_6c;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  dVar8 = DAT_02323e78;
  local_30 = param_6;
  local_28 = param_5;
  _objc_getAssociatedObject(param_5,DAT_026dfbc8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = 0;
  local_48 = 0;
  uVar1 = local_28;
  local_38 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_moveToFrontButton_026a10b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  local_40 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_deleteButton_026a0f28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  local_48 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (((local_38 == 0) || (local_40 == 0)) ||
     (uVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isHidden_026ca768),
     (uVar2 & 1) != 0)) {
    if (local_38 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,1);
    }
    local_6c = 1;
  }
  else {
    local_78 = 0;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentEmotionMd5_026a10c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_78;
    local_78 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_91 = 0;
    uVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_1f8 = (undefined *)0x0;
    }
    else {
      local_1f8 = PTR_WCRefineEmoticonGroupStore_026ce420;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_groupIdForMd5__026a10c8,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_1f8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_88[0] = local_1f8;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    puVar3 = local_88[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_length_0269cca0);
    local_a0 = &cf_yRR_;
    if (puVar3 == (undefined *)0x0) {
      local_a0 = &cf_mRR_;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTitle_forState__026caab8,local_a0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTitle_forState__026caab8,local_a0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,0);
    dVar5 = 152.0;
    local_a8 = 152.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewPopoverWidth_026a10d8);
    local_a8 = dVar5;
    if (dVar5 < 80.0) {
      local_a8 = 152.0;
    }
    local_c8 = local_a8 / 3.0;
    ppuVar4 = &local_e8;
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc0000000;
    local_dc = 0;
    local_d8 = FUN_0025cff8;
    local_d0 = &DAT_0257b058;
    local_b8 = local_c8;
    _objc_retainBlock();
    local_c0 = ppuVar4;
    (*(code *)ppuVar4[2])(local_a8 * 0.16666666666666666,ppuVar4,local_40);
    if ((local_48 == 0) ||
       (uVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isHidden_026ca768),
       (uVar2 & 1) != 0)) {
      (*(code *)local_c0[2])(local_a8 * dVar8,local_c0,local_38);
      uVar6 = 0;
      local_178 = 0;
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_top_026a10e8);
      uVar2 = local_40;
      if ((uVar1 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
          local_198 = uVar6;
          local_190 = dVar8;
          local_188 = param_3;
          local_180 = param_4;
          _CGRectGetMinY(uVar6,dVar8,param_3,param_4);
          local_178 = uVar6;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_top_026a10e8);
        local_178 = uVar6;
      }
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setTop__026a10f0);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_178,local_38,PTR_s_setTop__026a10f0);
      }
    }
    else {
      uVar7 = 0x3fe0000000000000;
      (*(code *)local_c0[2])(local_a8 * 0.5,local_c0,local_48);
      uVar6 = 0;
      local_f0 = 0;
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_top_026a10e8);
      uVar2 = local_40;
      if ((uVar1 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
          local_110 = uVar6;
          local_108 = uVar7;
          local_100 = param_3;
          local_f8 = param_4;
          _CGRectGetMinY();
          local_f0 = uVar6;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_top_026a10e8);
        local_f0 = uVar6;
      }
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setTop__026a10f0);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
        uStack_128 = local_f0;
        uStack_148 = local_f0;
        uStack_168 = local_f0;
        local_170 = uVar6;
        local_160 = param_3;
        uStack_158 = param_4;
        local_150 = uVar6;
        local_140 = param_3;
        uStack_138 = param_4;
        local_130 = uVar6;
        local_120 = param_3;
        uStack_118 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,local_f0,param_3,param_4,local_38,PTR_s_setFrame__026ca960);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_38,PTR_s_setTop__026a10f0);
      }
      (*(code *)local_c0[2])(local_a8 * dVar8,local_c0,local_38);
    }
    local_1a0 = 0;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_verticalDivider_026a10f8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_1a0;
    local_1a0 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_1a0 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setHidden__026ca970,1);
    }
    _objc_storeStrong(&local_1a0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(local_88,0);
    _objc_storeStrong(&local_78,0);
    local_6c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

