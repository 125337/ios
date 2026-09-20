// wcr_cardDonutTitle:subtitle:total:unit:slices:showPercent:empty: @ 01d9ded0

/* Function Stack Size: 0x44 bytes */

ID __thiscall
WCRefineSessionStatsBoardView::wcr_cardDonutTitle_subtitle_total_unit_slices_showPercent_empty_
          (WCRefineSessionStatsBoardView *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          unsigned_long_long param_5,ID param_6,ID param_7,bool param_8,ID param_9)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  double dVar7;
  double in_d0;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  cfstringStruct *local_420;
  cfstringStruct *local_408;
  cfstringStruct *local_3f0;
  ulong local_3c0;
  ulong local_3b8;
  ID local_250;
  byte local_241;
  cfstringStruct *local_240;
  byte local_231;
  cfstringStruct *local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  cfstringStruct *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  ID local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  double dStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  double dStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  ID local_110;
  double local_108;
  ID local_100;
  undefined8 local_f8;
  undefined1 local_e9;
  undefined8 local_e8;
  undefined8 local_e0;
  unsigned_long_long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_e0 = 0;
  local_d8 = param_5;
  _objc_storeStrong(&local_e0,param_6);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_7);
  local_e9 = (undefined1)param_8;
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_9);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_wcr_card_026c4f10);
  _objc_retainAutoreleasedReturnValue();
  local_100 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_wcr_placeCardTitle_onCard__026c4f18,local_c8,IVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_wcr_placeCardSubtitle_onCard_aft_026c4f20,local_d0,local_100);
  IVar1 = local_b8;
  uVar4 = local_f8;
  local_108 = in_d0;
  if (local_d8 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_01d8f4e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_wcr_label_font_color__026c4e70,uVar4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_110 = IVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar8 = 0x4030000000000000;
    uVar4 = 0x4070c00000000000;
    uVar9 = 0x4044000000000000;
    dVar10 = local_108;
    FUN_01d8ec14();
    local_150 = uVar8;
    local_140 = uVar4;
    uStack_138 = uVar9;
    local_130 = uVar8;
    local_120 = uVar4;
    uStack_118 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,dVar10,uVar4,uVar9,local_110,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setTag__026caa80,0x4e);
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addSubview__026ca4c0,local_110);
    uVar8 = 0x4030000000000000;
    dVar10 = local_108 + 56.0;
    uVar9 = 0;
    uVar4 = 0x4072c00000000000;
    FUN_01d8ec14();
    local_190 = uVar8;
    uStack_188 = uVar9;
    local_180 = uVar4;
    dStack_178 = dVar10;
    local_170 = uVar8;
    uStack_168 = uVar9;
    local_160 = uVar4;
    dStack_158 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,uVar9,uVar4,dVar10,local_100,PTR_s_setFrame__026ca960);
    IVar1 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = IVar1;
    local_194 = 1;
    _objc_storeStrong(&local_110,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_wcr_ringSlices__026c4f28,local_e8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRSSDonutView_026cf5c8;
    local_1a0 = IVar1;
    _objc_alloc();
    uVar9 = 0x4024000000000000;
    uVar4 = 0x4071800000000000;
    uVar8 = 0x406c800000000000;
    dVar10 = local_108;
    FUN_01d8ec14();
    local_1c8 = uVar9;
    local_1b8 = uVar4;
    local_1b0 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)(uVar9,dVar10,puVar2,PTR_s_initWithFrame__026ca6e8);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar3;
    _memset(auStack_228,0,0x40);
    IVar1 = local_1a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_3b8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10);
    if (local_3b8 != 0) {
      lVar5 = *local_218;
      local_3c0 = 0;
      do {
        do {
          if (*local_218 - lVar5 != 0) {
            _objc_enumerationMutation(*local_218 - lVar5,IVar1);
          }
          puVar2 = local_1d0;
          pcVar6 = *(cfstringStruct **)(local_220 + local_3c0 * 8);
          local_1e8 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_count);
          _objc_retainAutoreleasedReturnValue();
          local_231 = 0;
          local_3f0 = pcVar6;
          if (pcVar6 == (cfstringStruct *)0x0) {
            local_3f0 = (cfstringStruct *)PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
            _objc_retainAutoreleasedReturnValue();
            local_230 = local_3f0;
          }
          local_231 = pcVar6 == (cfstringStruct *)0x0;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,local_3f0);
          if ((local_231 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_230);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          puVar2 = local_1d8;
          pcVar6 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_color);
          _objc_retainAutoreleasedReturnValue();
          local_241 = 0;
          local_408 = pcVar6;
          if (pcVar6 == (cfstringStruct *)0x0) {
            FUN_01d91918();
            _objc_retainAutoreleasedReturnValue();
            local_240 = local_408;
          }
          local_241 = pcVar6 == (cfstringStruct *)0x0;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,local_408);
          if ((local_241 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_240);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          puVar2 = local_1e0;
          pcVar6 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          local_420 = pcVar6;
          if (pcVar6 == (cfstringStruct *)0x0) {
            local_420 = &::cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,local_420);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          local_3c0 = local_3c0 + 1;
        } while (local_3c0 < local_3b8);
        local_3b8 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10
                  );
        local_3c0 = 0;
      } while (local_3b8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setValues__026caae0,local_1d0);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setColors__026ca8d0,local_1d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setSliceTitles__026c4f30,local_1e0);
    IVar1 = local_1a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setShowLeaders__026c4f38,3 < IVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setCenterText__026c4f40);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setCenterUnit__026c4f48,local_e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setTag__026caa80,0x47);
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addSubview__026ca4c0,local_1a8);
    local_108 = local_108 + 236.0;
    dVar7 = 300.0;
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_wcr_legendBox_width__026c4f50,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_250 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_frame_026ca640);
    dVar10 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addSubview__026ca4c0,local_250);
    (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_frame_026ca640);
    _CGRectGetMaxY(dVar7,dVar10,uVar4,uVar8);
    uVar9 = 0x4072c00000000000;
    dVar10 = dVar7 + 14.0;
    uVar4 = 0x4030000000000000;
    uVar8 = 0;
    local_108 = dVar7;
    FUN_01d8ec14();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,uVar8,uVar9,dVar10,local_100,PTR_s_setFrame__026ca960);
    IVar1 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = IVar1;
    local_194 = 1;
    _objc_storeStrong(&local_250);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_1a0,0);
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

