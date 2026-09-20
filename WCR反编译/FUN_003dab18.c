// FUN_003dab18 @ 003dab18

void FUN_003dab18(ulong *param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 byte param_9)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined *local_440;
  undefined *local_438;
  uint local_410;
  double local_398;
  cfstringStruct *local_350;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  uint local_31c;
  cfstringStruct *local_308;
  cfstringStruct *local_2e8;
  cfstringStruct *local_2d8;
  cfstringStruct *local_2b0;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  double local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  byte local_179;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  byte local_162;
  byte local_161;
  undefined *local_160;
  byte local_151;
  cfstringStruct *local_150;
  byte local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  byte local_11d;
  undefined *local_110;
  undefined4 local_108;
  byte local_102;
  byte local_101;
  cfstringStruct *local_100;
  ulong local_f8;
  long local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_6);
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_7);
  local_100 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_100,param_8);
  local_102 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_101 = param_9;
  if ((local_f0 == 0) || (local_100 == (cfstringStruct *)0x0)) {
    local_102 = 1;
    local_108 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_11d = 0;
    pcVar2 = local_100;
    local_110 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    local_2b0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_2b0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = local_2b0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar1 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_homeGroupingFriendTitleShown_026a32a8);
    if (((ulong)puVar1 & 1) == 0) {
      _objc_storeStrong(&local_128,&cf___);
    }
    pcVar2 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_inlineDetailText_026a3248);
    _objc_retainAutoreleasedReturnValue();
    local_2d8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_2d8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_2d8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_141 = 0;
    local_151 = 0;
    if ((local_11d & 1) == 0) {
      pcVar2 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_detailText_026a3240);
      _objc_retainAutoreleasedReturnValue();
      local_141 = 1;
      local_140 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_308 = &cf_0;
      }
      else {
        local_308 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_detailText_026a3240);
        _objc_retainAutoreleasedReturnValue();
        local_151 = 1;
        local_150 = local_308;
      }
      local_2e8 = local_308;
    }
    else {
      local_2e8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = local_2e8;
    if ((local_151 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_150);
    }
    if ((local_141 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_140);
    }
    puVar1 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_homeGroupingInlineRightDisplayMo_026a3010)
    ;
    local_31c = 0;
    local_160 = puVar1;
    if ((local_11d & 1) != 0) {
      puVar1 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_homeGroupingInlineAvatarShown_026a31f8);
      local_31c = (uint)puVar1 ^ 1;
    }
    local_161 = (byte)local_31c & 1;
    local_162 = 0;
    if ((local_31c & 1) != 0) {
      pcVar2 = local_100;
      FUN_003d857c(local_100,0);
      local_162 = (byte)pcVar2;
    }
    local_179 = 0;
    if ((local_11d & 1) == 0) {
      pcVar2 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_timeText_026a3250);
      _objc_retainAutoreleasedReturnValue();
      local_179 = 1;
      local_350 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_350 = &cf___;
      }
      local_338 = local_350;
      local_178 = pcVar2;
    }
    else {
      if (((local_162 & 1) == 0) && (local_160 == (undefined *)0x0)) {
        local_330 = local_130;
      }
      else {
        local_330 = &cf___;
      }
      local_338 = local_330;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = local_338;
    if ((local_179 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_178);
    }
    if ((local_101 & 1) == 0) {
      FUN_00367110(local_f0,&cf_m_textForNameLabel,local_128);
      FUN_00367110(local_f0,&cf_m_textForMessageLabel,local_138);
      FUN_00367110(local_f0,&cf_m_textForTimeLabel,local_170);
      FUN_00367110(local_f0,&cf_m_oldTextForNameLabel,local_128);
    }
    else {
      FUN_00367110(local_f0,&cf_textForNameLabel,local_128);
      FUN_00367110(local_f0,&cf_textForMessageLabel,local_138);
      FUN_00367110(local_f0,&cf_textForTimeLabel,local_170);
    }
    FUN_003df198(local_f8,local_f0,local_101 & 1);
    FUN_003c89a0(local_f8,local_128,local_138,local_170);
    uVar6 = local_f8;
    pcVar2 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    FUN_003df438(uVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
    uVar6 = local_f8;
    local_1b8 = 0x4074000000000000;
    local_398 = param_4;
    if (param_4 < 320.0) {
      local_398 = 320.0;
    }
    local_1c0 = local_398;
    local_188 = local_398;
    local_30 = &cf_MMCPLabel;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_1b0 = param_2;
    local_1a8 = param_3;
    local_1a0 = param_4;
    local_198 = param_5;
    local_190 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    dVar9 = local_188 - 150.0;
    uVar5 = 0x4052400000000000;
    uVar8 = 0x4026000000000000;
    uVar10 = 0x4038000000000000;
    FUN_00360240();
    local_1e0 = uVar5;
    local_1d8 = uVar8;
    local_1d0 = dVar9;
    local_1c8 = uVar10;
    FUN_003df580(uVar5,uVar8,dVar9,uVar10,uVar6,&cf_m_nameLabel,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *param_1;
    *param_1 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar6 = local_f8;
    local_40 = &cf_NoLineBreakLabel;
    local_38 = &cf_MMCPLabel;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,2
              );
    _objc_retainAutoreleasedReturnValue();
    dVar9 = local_188 - 150.0;
    uVar5 = 0x4052400000000000;
    uVar8 = 0x4041800000000000;
    uVar10 = 0x4034000000000000;
    FUN_00360240();
    local_200 = uVar5;
    local_1f8 = uVar8;
    local_1f0 = dVar9;
    local_1e8 = uVar10;
    FUN_003df580(uVar5,uVar8,dVar9,uVar10,uVar6,&cf_m_messageLabel,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1[1];
    param_1[1] = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar6 = local_f8;
    local_50 = &cf_MMUILabel;
    local_48 = &cf_UILabel;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,2
              );
    _objc_retainAutoreleasedReturnValue();
    dVar9 = local_188 - 72.0;
    uVar5 = 0x4026000000000000;
    uVar8 = 0x404e000000000000;
    uVar10 = 0x4034000000000000;
    FUN_00360240();
    local_220 = dVar9;
    local_218 = uVar5;
    local_210 = uVar8;
    local_208 = uVar10;
    FUN_003df580(dVar9,uVar5,uVar8,uVar10,uVar6,&cf_m_timeLabel,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1[2];
    param_1[2] = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_003c7be4(*param_1,local_128);
    FUN_003c7be4(param_1[1],local_138);
    FUN_003c7be4(param_1[2],local_170);
    uVar6 = *param_1;
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar6 & 1) != 0) {
      local_410 = 0;
      if ((local_11d & 1) != 0) {
        puVar1 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_110,PTR_s_homeGroupingInlineNameCenteredEn_026a3258);
        local_410 = (uint)puVar1;
      }
      uVar5 = 4;
      if ((local_410 & 1) != 0) {
        uVar5 = 1;
      }
      (*(code *)PTR__objc_msgSend_02578628)(*param_1,PTR_s_setTextAlignment__026caa90,uVar5);
    }
    _memset(auStack_268,0,0x40);
    local_e8 = *param_1;
    local_e0 = param_1[1];
    local_d8 = param_1[2];
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e8,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_438 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_438 != (undefined *)0x0) {
      lVar7 = *local_258;
      local_440 = (undefined *)0x0;
      do {
        do {
          if (*local_258 - lVar7 != 0) {
            _objc_enumerationMutation(*local_258 - lVar7,puVar1);
          }
          uVar6 = *(ulong *)(local_260 + (long)local_440 * 8);
          puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_228 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar6 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setHidden__026ca970,0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,local_228,PTR_s_setAlpha__026ca860);
          }
          local_440 = local_440 + 1;
        } while (local_440 < local_438);
        local_438 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_d0,
                   0x10);
        local_440 = (undefined *)0x0;
      } while (local_438 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_003c8194(local_f8,*param_1,param_1[1],param_1[2]);
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setNeedsLayout_0269deb8);
    FUN_003c6aa4(local_f8);
    local_102 = 1;
    local_108 = 1;
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_110,0);
  }
  if ((local_102 & 1) == 0) {
    FUN_003db9ac(param_1);
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

