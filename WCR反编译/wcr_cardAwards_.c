// wcr_cardAwards: @ 01db3664

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineSessionStatsBoardView::wcr_cardAwards_
          (WCRefineSessionStatsBoardView *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  double in_d0;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  cfstringStruct *local_438;
  cfstringStruct *local_3f0;
  cfstringStruct *local_3d0;
  ulong local_370;
  ulong local_368;
  ID local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  ID local_230;
  bool local_221;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  ID local_1d0;
  bool local_1c1;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  ID local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  cfstringStruct *local_100;
  undefined8 local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  double local_d0;
  ID local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_card_026c4f10);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_b0;
  pcVar4 = &cf_awards;
  local_c8 = IVar3;
  FUN_01db0b2c(&cf_awards,3,&cf__YSKN);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar7,PTR_s_wcr_placeCardTitle_onCard__026c4f18,pcVar4,local_c8);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_d0 = in_d0;
  _objc_alloc();
  dVar13 = local_d0 + 4.0;
  uVar12 = 0;
  uVar9 = 0x4072c00000000000;
  uVar15 = 0x4020000000000000;
  FUN_01d8ec14();
  local_f8 = uVar12;
  local_f0 = dVar13;
  local_e8 = uVar9;
  local_e0 = uVar15;
  (*(code *)PTR__objc_msgSend_02578628)(uVar12,puVar5,PTR_s_initWithFrame__026ca6e8);
  local_d8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTag__026caa80,99);
  _memset(auStack_140,0,0x40);
  uVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_368 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
  if (local_368 != 0) {
    lVar10 = *local_130;
    local_370 = 0;
    do {
      do {
        if (*local_130 - lVar10 != 0) {
          _objc_enumerationMutation(*local_130 - lVar10,uVar2);
        }
        local_100 = *(cfstringStruct **)(local_138 + local_370 * 8);
        puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        uVar15 = 0;
        uVar12 = 0;
        uVar14 = 0x4056000000000000;
        uVar9 = 0x405b800000000000;
        FUN_01d8ec14();
        local_168 = uVar12;
        local_160 = uVar15;
        local_158 = uVar14;
        local_150 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar12,uVar15,uVar14,uVar9,puVar5,PTR_s_initWithFrame__026ca6e8);
        IVar7 = local_b0;
        pcVar4 = local_100;
        local_148 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4026000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
                   PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        FUN_01d8f4e8();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar7,PTR_s_wcr_label_font_color__026c4e70,pcVar4,puVar5);
        _objc_retainAutoreleasedReturnValue();
        local_170 = IVar7;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setTextAlignment__026caa90,1);
        uVar12 = 0;
        uVar9 = 0x4010000000000000;
        uVar15 = 0x4054000000000000;
        uVar14 = 0x4030000000000000;
        FUN_01d8ec14();
        local_1b0 = uVar9;
        uStack_1a8 = uVar12;
        local_1a0 = uVar15;
        uStack_198 = uVar14;
        local_190 = uVar9;
        uStack_188 = uVar12;
        local_180 = uVar15;
        uStack_178 = uVar14;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,uVar12,uVar15,uVar14,local_170,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addSubview__026ca4c0,local_170);
        pcVar4 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_usr);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar8 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        local_1c1 = false;
        bVar1 = ((ulong)pcVar8 & 1) == 0;
        if (bVar1) {
          local_3d0 = &::cf___;
        }
        else {
          local_3d0 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_usr);
          _objc_retainAutoreleasedReturnValue();
          local_1c0 = local_3d0;
        }
        local_1c1 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_1b8 = local_3d0;
        if ((local_1c1 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1c0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        IVar7 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_head_size__026c4f68,local_1b8);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = 0x404a000000000000;
        uVar12 = 0x4032000000000000;
        uVar15 = 0x4034000000000000;
        uVar9 = uVar14;
        local_1d0 = IVar7;
        FUN_01d8ec14();
        local_210 = uVar12;
        uStack_208 = uVar15;
        local_200 = uVar14;
        uStack_1f8 = uVar9;
        local_1f0 = uVar12;
        uStack_1e8 = uVar15;
        local_1e0 = uVar14;
        uStack_1d8 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar12,uVar15,uVar14,uVar9,local_1d0,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addSubview__026ca4c0,local_1d0);
        pcVar4 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar8 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        local_221 = false;
        bVar1 = ((ulong)pcVar8 & 1) == 0;
        if (bVar1) {
          local_3f0 = &cf_lg;
        }
        else {
          local_3f0 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          local_220 = local_3f0;
        }
        local_221 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_218 = local_3f0;
        if ((local_221 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_220);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        IVar7 = local_b0;
        pcVar4 = local_218;
        puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                   PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        FUN_01d8f3a4();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar7,PTR_s_wcr_label_font_color__026c4e70,pcVar4,puVar5);
        _objc_retainAutoreleasedReturnValue();
        local_230 = IVar7;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_setTextAlignment__026caa90);
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_setNumberOfLines__026ca9d8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_setLineBreakMode__026ca988,4);
        uVar9 = 0x4010000000000000;
        uVar12 = 0x4053000000000000;
        uVar15 = 0x4054000000000000;
        uVar14 = 0x4030000000000000;
        FUN_01d8ec14();
        local_270 = uVar9;
        uStack_268 = uVar12;
        local_260 = uVar15;
        uStack_258 = uVar14;
        local_250 = uVar9;
        uStack_248 = uVar12;
        local_240 = uVar15;
        uStack_238 = uVar14;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,uVar12,uVar15,uVar14,local_230,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addSubview__026ca4c0,local_230);
        IVar7 = local_b0;
        pcVar4 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_detail);
        _objc_retainAutoreleasedReturnValue();
        local_438 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_438 = &::cf___;
        }
        puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4024000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                   PTR_s_systemFontOfSize__0269cc50);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        FUN_01d8f4e8();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar7,PTR_s_wcr_label_font_color__026c4e70,local_438,puVar5);
        _objc_retainAutoreleasedReturnValue();
        local_278 = IVar7;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_setTextAlignment__026caa90,1);
        uVar12 = 0x4010000000000000;
        dVar13 = 92.0;
        uVar9 = 0x4054000000000000;
        uVar15 = 0x402c000000000000;
        FUN_01d8ec14();
        (*(code *)PTR__objc_msgSend_02578628)(uVar12,local_278,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addSubview__026ca4c0,local_278);
        pcVar4 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0);
        if (pcVar4 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_wcr_bindFriendTap_usr_name__026c4ed8,local_148,local_1b8,
                     local_218);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addSubview__026ca4c0,local_148);
        _objc_storeStrong(&local_278);
        _objc_storeStrong(&local_230,0);
        _objc_storeStrong(&local_218,0);
        _objc_storeStrong(&local_1d0,0);
        _objc_storeStrong(&local_1b8,0);
        _objc_storeStrong(&local_170,0);
        _objc_storeStrong(&local_148,0);
        local_370 = local_370 + 1;
      } while (local_370 < local_368);
      local_368 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      local_370 = 0;
    } while (local_368 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  dVar11 = 300.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_reflowInner_cardW__026c4e48,local_d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addSubview__026ca4c0,local_d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_frame_026ca640);
  _CGRectGetMaxY(dVar11,dVar13,uVar9,uVar15);
  uVar15 = 0x4072c00000000000;
  uVar9 = 0x4030000000000000;
  dVar11 = dVar11 + 16.0;
  uVar12 = 0;
  FUN_01d8ec14();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,uVar12,uVar15,dVar11,local_c8,PTR_s_setFrame__026ca960);
  IVar7 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return IVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

