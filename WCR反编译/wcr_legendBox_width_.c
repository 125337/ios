// wcr_legendBox:width: @ 01d9ea78

/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsBoardView::wcr_legendBox_width_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_2c8;
  ulong local_268;
  ulong local_260;
  ID local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  ID local_1a0;
  byte local_191;
  long local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  double local_c8;
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
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_c8 = param_4;
  _objc_alloc();
  uVar10 = 0;
  uVar9 = 0;
  uVar12 = 0x4020000000000000;
  dVar11 = local_c8;
  FUN_01d8ec14();
  local_f0 = uVar9;
  local_e8 = uVar10;
  local_e0 = dVar11;
  local_d8 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,uVar10,dVar11,uVar12,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTag__026caa80,0x5a);
  _memset(auStack_138,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_260 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_260 != 0) {
    lVar8 = *local_128;
    local_268 = 0;
    do {
      do {
        if (*local_128 - lVar8 != 0) {
          _objc_enumerationMutation(*local_128 - lVar8,uVar1);
        }
        local_f8 = *(long *)(local_130 + local_268 * 8);
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        uVar10 = 0;
        uVar9 = 0;
        uVar12 = 0x4056000000000000;
        uVar13 = 0x4042000000000000;
        FUN_01d8ec14();
        local_160 = uVar9;
        local_158 = uVar10;
        local_150 = uVar12;
        local_148 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,uVar10,uVar12,uVar13,puVar2,PTR_s_initWithFrame__026ca6e8);
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_140 = puVar2;
        _objc_alloc();
        uVar9 = 0;
        uVar10 = 0x4010000000000000;
        uVar13 = 0x4020000000000000;
        uVar12 = 0x4020000000000000;
        FUN_01d8ec14();
        local_188 = uVar9;
        local_180 = uVar10;
        local_178 = uVar12;
        local_170 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,uVar10,uVar12,uVar13,puVar3,PTR_s_initWithFrame__026ca6e8);
        local_168 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,3);
        puVar2 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x4010000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        lVar4 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_color);
        _objc_retainAutoreleasedReturnValue();
        local_191 = 0;
        local_2c8 = lVar4;
        if (lVar4 == 0) {
          FUN_01d91918();
          _objc_retainAutoreleasedReturnValue();
          local_190 = local_2c8;
        }
        local_191 = lVar4 == 0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_168,PTR_s_setBackgroundColor__026ca888,local_2c8);
        if ((local_191 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_190);
        }
        (*(code *)PTR__objc_release_02578630)(lVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addSubview__026ca4c0,local_168);
        IVar6 = local_b0;
        lVar4 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__UIFontWeightMedium_02578150;
        puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                   PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        FUN_01d8f3a4();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar6,PTR_s_wcr_label_font_color__026c4e70,lVar4,puVar3);
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = IVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(lVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setTag__026caa80);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setNumberOfLines__026ca9d8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setLineBreakMode__026ca988,4);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setTextAlignment__026caa90,1);
        uVar9 = 0x4028000000000000;
        uVar10 = 0;
        uVar12 = 0x404c000000000000;
        uVar13 = 0x4030000000000000;
        FUN_01d8ec14();
        local_1e0 = uVar9;
        uStack_1d8 = uVar10;
        local_1d0 = uVar12;
        uStack_1c8 = uVar13;
        local_1c0 = uVar9;
        uStack_1b8 = uVar10;
        local_1b0 = uVar12;
        uStack_1a8 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,uVar10,uVar12,uVar13,local_1a0,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addSubview__026ca4c0,local_1a0);
        lVar4 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_count);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
        IVar6 = local_b0;
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_1e8 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4026000000000000,*(undefined8 *)puVar2,PTR__OBJC_CLASS___UIFont_026cdfc0,
                   PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        FUN_01d8f4e8();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar6,PTR_s_wcr_label_font_color__026c4e70,puVar3,puVar5);
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = IVar6;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setTag__026caa80,2);
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setTextAlignment__026caa90,1);
        uVar10 = 0x4028000000000000;
        uVar13 = 0x404c000000000000;
        uVar12 = 0x4030000000000000;
        uVar9 = uVar12;
        FUN_01d8ec14();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar10,uVar12,uVar13,uVar9,local_1f0,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addSubview__026ca4c0,local_1f0);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addSubview__026ca4c0,local_140);
        _objc_storeStrong(&local_1f0);
        _objc_storeStrong(&local_1a0,0);
        _objc_storeStrong(&local_168,0);
        _objc_storeStrong(&local_140,0);
        local_268 = local_268 + 1;
      } while (local_268 < local_260);
      local_260 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      local_268 = 0;
    } while (local_260 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,local_b0,PTR_s_wcr_reflowLegend_width__026c4e30,local_d0);
  puVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

