// wcr_cardRolesSession:rangeTitle:empty: @ 01daf4ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCRefineSessionStatsBoardView::wcr_cardRolesSession_rangeTitle_empty_
          (WCRefineSessionStatsBoardView *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          ID param_5)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  cfstringStruct *pcVar12;
  double in_d0;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined *local_6b0;
  long local_6a0;
  double local_660;
  cfstringStruct *local_620;
  undefined *local_5a8;
  undefined *local_5a0;
  undefined *local_538;
  ulong local_528;
  undefined *local_410;
  undefined *local_400;
  ID local_3f8;
  long local_3f0;
  ulong local_3e8;
  undefined8 local_3e0;
  double dStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3b8;
  double dStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  ID local_398;
  double local_390;
  ulong local_388;
  undefined8 local_380;
  double dStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  double dStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  ID local_340;
  undefined *local_338;
  undefined8 local_330;
  double dStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_308;
  double dStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  ID local_2e8;
  undefined8 local_2e0;
  double dStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  double dStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  ID local_2a0;
  cfstringStruct *local_298;
  cfstringStruct *local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  cfstringStruct *local_248;
  byte local_239;
  undefined *local_238;
  byte local_229;
  undefined *local_228;
  byte local_219;
  undefined *local_218;
  byte local_209;
  undefined *local_208;
  byte local_1f9;
  undefined *local_1f8;
  undefined *local_1f0;
  bool local_1e1;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  double dStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  double dStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  ID local_140;
  ulong local_138;
  double local_130;
  ID local_128;
  undefined8 local_120;
  long local_118;
  ulong local_110;
  SEL local_108;
  ID local_100;
  ID local_f8;
  undefined1 auStack_f0 [128];
  cfstringStruct *local_70;
  ulong local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  ulong local_50;
  cfstringStruct *local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_110 = 0;
  local_108 = param_2;
  local_100 = param_1;
  _objc_storeStrong(&local_110,param_3);
  local_118 = 0;
  _objc_storeStrong(&local_118,param_4);
  local_120 = 0;
  _objc_storeStrong(&local_120,param_5);
  IVar1 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_wcr_card_026c4f10);
  _objc_retainAutoreleasedReturnValue();
  local_128 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_wcr_placeCardTitle_onCard__026c4f18,&cf_sNQ_Ws,IVar1);
  IVar1 = local_100;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_130 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_wcr_placeCardSubtitle_onCard_aft_026c4f20,puVar2,local_128);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar3 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_speakerOrder_026af778);
  _objc_retainAutoreleasedReturnValue();
  local_138 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
  IVar1 = local_100;
  uVar10 = local_120;
  if (uVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    FUN_01d8f4e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_wcr_label_font_color__026c4e70,uVar10,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_140 = IVar1;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar13 = 0x4030000000000000;
    uVar10 = 0x4070c00000000000;
    uVar14 = 0x4044000000000000;
    dVar15 = local_130;
    FUN_01d8ec14();
    local_180 = uVar13;
    local_170 = uVar10;
    uStack_168 = uVar14;
    local_160 = uVar13;
    local_150 = uVar10;
    uStack_148 = uVar14;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar13,dVar15,uVar10,uVar14,local_140,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setTag__026caa80,0x4e);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_140);
    uVar13 = 0x4030000000000000;
    dVar15 = local_130 + 56.0;
    uVar14 = 0;
    uVar10 = 0x4072c00000000000;
    FUN_01d8ec14();
    local_1c0 = uVar13;
    uStack_1b8 = uVar14;
    local_1b0 = uVar10;
    dStack_1a8 = dVar15;
    local_1a0 = uVar13;
    uStack_198 = uVar14;
    local_190 = uVar10;
    dStack_188 = dVar15;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar13,uVar14,uVar10,dVar15,local_128,PTR_s_setFrame__026ca960);
    IVar1 = local_128;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = IVar1;
    local_1c4 = 1;
    _objc_storeStrong(&local_140,0);
  }
  else {
    uVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_138;
    local_1d0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
    local_1e1 = false;
    if (uVar4 < 2) {
      local_528 = 0;
    }
    else {
      local_528 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_1e0 = local_528;
    }
    local_1e1 = uVar4 >= 2;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = local_528;
    if ((local_1e1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1e0);
    }
    local_1f9 = 0;
    local_209 = 0;
    local_219 = 0;
    local_229 = 0;
    local_239 = 0;
    if (local_1d8 == 0) {
      local_70 = &cf_s;
      local_68 = local_1d0;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_229 = 1;
      local_538 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_228 = puVar2;
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_239 = 1;
      local_238 = local_538;
    }
    else {
      local_48 = &cf_s;
      local_40 = local_1d0;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                );
      _objc_retainAutoreleasedReturnValue();
      local_1f9 = 1;
      local_58 = &cf_Q_Ws;
      local_50 = local_1d8;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_1f8 = puVar2;
      local_38 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_209 = 1;
      local_538 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_208 = puVar5;
      local_30 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_219 = 1;
      local_218 = local_538;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = local_538;
    if ((local_239 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_238);
    }
    if ((local_229 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_228);
    }
    if ((local_219 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_218);
    }
    if ((local_209 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_208);
    }
    if ((local_1f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1f8);
    }
    _memset(auStack_288,0,0x40);
    puVar2 = local_1f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_5a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_f0,0x10);
    if (local_5a0 != (undefined *)0x0) {
      lVar11 = *local_278;
      local_5a8 = (undefined *)0x0;
      do {
        do {
          if (*local_278 - lVar11 != 0) {
            _objc_enumerationMutation(*local_278 - lVar11,puVar2);
          }
          pcVar12 = *(cfstringStruct **)(local_280 + (long)local_5a8 * 8);
          local_248 = pcVar12;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar12,PTR_s_objectAtIndexedSubscript__0269cc78,0);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_248;
          local_290 = pcVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_248,PTR_s_objectAtIndexedSubscript__0269cc78,1);
          _objc_retainAutoreleasedReturnValue();
          IVar1 = local_100;
          pcVar12 = local_290;
          puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          local_298 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
                     PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          FUN_01d8f4e8();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_wcr_label_font_color__026c4e70,pcVar12,puVar5);
          _objc_retainAutoreleasedReturnValue();
          local_2a0 = IVar1;
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          uVar10 = 0x4030000000000000;
          uVar13 = 0x404c000000000000;
          uVar14 = 0x4032000000000000;
          dVar15 = local_130;
          FUN_01d8ec14();
          local_2e0 = uVar10;
          dStack_2d8 = dVar15;
          local_2d0 = uVar13;
          uStack_2c8 = uVar14;
          local_2c0 = uVar10;
          dStack_2b8 = dVar15;
          local_2b0 = uVar13;
          uStack_2a8 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar10,dVar15,uVar13,uVar14,local_2a0,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_2a0);
          IVar1 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_wcr_head_size__026c4f68,local_298);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = 0x4042000000000000;
          uVar13 = 0x4053000000000000;
          dVar15 = local_130;
          uVar10 = uVar14;
          local_2e8 = IVar1;
          FUN_01d8ec14();
          local_330 = uVar13;
          dStack_328 = dVar15;
          local_320 = uVar14;
          uStack_318 = uVar10;
          local_308 = uVar13;
          dStack_300 = dVar15;
          local_2f8 = uVar14;
          uStack_2f0 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar13,dVar15,uVar14,uVar10,local_2e8,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_2e8);
          pcVar12 = local_298;
          puVar5 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
          uVar3 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_usr_026af770);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_displayNameForUser_inRoom__0269ecd0,pcVar12);
          _objc_retainAutoreleasedReturnValue();
          local_338 = puVar5;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          puVar5 = local_338;
          (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_length_0269cca0);
          if (puVar5 == (undefined *)0x0) {
            pcVar12 = local_298;
            (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_length_0269cca0);
            if (pcVar12 == (cfstringStruct *)0x0) {
              local_620 = &cf__bXT;
            }
            else {
              local_620 = local_298;
            }
            _objc_storeStrong(&local_338,local_620);
          }
          IVar1 = local_100;
          puVar5 = local_338;
          puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x402e000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                     PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          FUN_01d8f3a4();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_wcr_label_font_color__026c4e70,puVar5,puVar7);
          _objc_retainAutoreleasedReturnValue();
          local_340 = IVar1;
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_setNumberOfLines__026ca9d8,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_setLineBreakMode__026ca988,4);
          uVar10 = 0x405e800000000000;
          uVar13 = 0x4059000000000000;
          uVar14 = 0x4032000000000000;
          dVar15 = local_130;
          FUN_01d8ec14();
          local_380 = uVar10;
          dStack_378 = dVar15;
          local_370 = uVar13;
          uStack_368 = uVar14;
          local_360 = uVar10;
          dStack_358 = dVar15;
          local_350 = uVar13;
          uStack_348 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar10,dVar15,uVar13,uVar14,local_340,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_setTag__026caa80,0x50);
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_340);
          uVar3 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_speakerCounts_026af780);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_110;
          local_388 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_totalCount_026a3130);
          if (uVar3 == 0) {
            local_660 = 0.0;
          }
          else {
            dVar15 = (double)NEON_ucvtf(local_388);
            uVar3 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_totalCount_026a3130);
            local_660 = (dVar15 * 100.0) / (double)uVar3;
          }
          IVar1 = local_100;
          local_390 = local_660;
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                     PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          FUN_01d8f4e8();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_wcr_label_font_color__026c4e70,puVar5,puVar7);
          _objc_retainAutoreleasedReturnValue();
          local_398 = IVar1;
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_setTextAlignment__026caa90,2);
          dVar15 = local_130 + 18.0;
          uVar10 = 0x4065400000000000;
          uVar13 = 0x405c800000000000;
          uVar14 = 0x4030000000000000;
          FUN_01d8ec14();
          local_3e0 = uVar10;
          dStack_3d8 = dVar15;
          local_3d0 = uVar13;
          uStack_3c8 = uVar14;
          local_3b8 = uVar10;
          dStack_3b0 = dVar15;
          local_3a8 = uVar13;
          uStack_3a0 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar10,dVar15,uVar13,uVar14,local_398,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_setTag__026caa80,0x4b);
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_398);
          local_130 = local_130 + 48.0;
          _objc_storeStrong(&local_398);
          _objc_storeStrong(&local_340,0);
          _objc_storeStrong(&local_338,0);
          _objc_storeStrong(&local_2e8,0);
          _objc_storeStrong(&local_2a0,0);
          _objc_storeStrong(&local_298,0);
          _objc_storeStrong(&local_290,0);
          local_5a8 = local_5a8 + 1;
        } while (local_5a8 < local_5a0);
        local_5a0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_f0,
                   0x10);
        local_5a8 = (undefined *)0x0;
      } while (local_5a0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
    uVar4 = local_110;
    local_3e8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_peopleCount_026c4d90);
    if (local_3e8 < uVar4) {
      uVar3 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_peopleCount_026c4d90);
      local_6a0 = uVar3 - local_3e8;
    }
    else {
      local_6a0 = 0;
    }
    IVar1 = local_100;
    local_3f0 = local_6a0;
    local_6b0 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (local_6a0 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_410 = local_6b0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__o4l);
      _objc_retainAutoreleasedReturnValue();
      local_400 = local_6b0;
    }
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    FUN_01d8f4e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_wcr_label_font_color__026c4e70,local_6b0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_3f8 = IVar1;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_6a0 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_410);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_400);
    }
    uVar13 = 0x4030000000000000;
    uVar10 = 0x4070c00000000000;
    uVar14 = 0x4032000000000000;
    dVar15 = local_130;
    FUN_01d8ec14();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar13,dVar15,uVar10,uVar14,local_3f8,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_3f8,PTR_s_setTag__026caa80,0x4e);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_addSubview__026ca4c0,local_3f8);
    uVar13 = 0x4030000000000000;
    local_130 = local_130 + 28.0;
    dVar15 = local_130 + 8.0;
    uVar14 = 0;
    uVar10 = 0x4072c00000000000;
    FUN_01d8ec14();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar13,uVar14,uVar10,dVar15,local_128,PTR_s_setFrame__026ca960);
    IVar1 = local_128;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = IVar1;
    local_1c4 = 1;
    _objc_storeStrong(&local_3f8);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1d0,0);
  }
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_f8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

