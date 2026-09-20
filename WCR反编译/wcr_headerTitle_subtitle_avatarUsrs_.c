// wcr_headerTitle:subtitle:avatarUsrs: @ 01da1b20

/* Function Stack Size: 0x28 bytes */

ID WCRefineSessionStatsBoardView::wcr_headerTitle_subtitle_avatarUsrs_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  int iVar5;
  double dVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double local_450;
  ulong local_420;
  ulong local_418;
  double local_3f8;
  double local_3e0;
  double local_3d8;
  ulong local_3b0;
  ulong local_3a8;
  ID local_290;
  undefined4 local_284;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  undefined8 local_240;
  double local_238;
  ulong local_230;
  double local_228;
  double local_220;
  undefined4 local_214;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  int local_1c4;
  double local_1c0;
  int local_1b4;
  double local_1b0;
  ID local_1a8;
  double local_1a0;
  ulong local_198;
  undefined8 local_190;
  ulong local_188;
  ulong local_180;
  undefined8 local_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  ID local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  undefined *local_e0;
  byte local_d1;
  ulong local_d0;
  undefined8 local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  lVar7 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  local_d1 = lVar7 == 0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  iVar5 = 0x40;
  if ((local_d1 & 1) == 0) {
    iVar5 = 100;
  }
  dVar11 = (double)iVar5;
  uVar8 = 0x4030000000000000;
  uVar9 = 0;
  dVar6 = 300.0;
  FUN_01d8ec14();
  local_100 = uVar8;
  local_f8 = uVar9;
  local_f0 = dVar6;
  local_e8 = dVar11;
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_e0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_b0;
  lVar7 = local_c0;
  local_108 = 8.0;
  if ((local_d1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4032000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    FUN_01d8f3a4();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_wcr_label_font_color__026c4e70,lVar7,puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_110 = IVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setTextAlignment__026caa90,1);
    uVar9 = 0;
    uVar10 = 0x4020000000000000;
    uVar8 = 0x4072c00000000000;
    uVar12 = 0x4038000000000000;
    FUN_01d8ec14();
    local_150 = uVar9;
    uStack_148 = uVar10;
    local_140 = uVar8;
    uStack_138 = uVar12;
    local_130 = uVar9;
    uStack_128 = uVar10;
    local_120 = uVar8;
    uStack_118 = uVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar9,uVar10,uVar8,uVar12,local_110,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setTag__026caa80,0x4c);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addSubview__026ca4c0,local_110);
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar8 = 0x405d800000000000;
    uVar9 = 0x4042000000000000;
    dVar6 = 64.0;
    dVar11 = 2.0;
    FUN_01d8ec14();
    local_178 = uVar8;
    local_170 = uVar9;
    local_168 = dVar6;
    local_160 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_158 = puVar1;
    FUN_01d8f3a4();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setTag__026caa80,0x4d);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addSubview__026ca4c0,local_158);
    local_108 = 48.0;
    _objc_storeStrong(&local_158);
    _objc_storeStrong(&local_110,0);
  }
  uVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  local_1a8 = local_b0;
  uVar8 = local_c8;
  local_190 = 4;
  local_3a8 = uVar4;
  if (3 < uVar4) {
    local_3a8 = 4;
  }
  local_198 = local_3a8;
  local_180 = local_3a8;
  if (local_3a8 == 0) {
    local_3b0 = 0;
  }
  else {
    local_3b0 = (local_3a8 - 1) * 0x16 + 0x24;
  }
  local_1a0 = (double)local_3b0;
  uVar10 = 0x402a000000000000;
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_188 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_01d8f4e8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_wcr_label_font_color__026c4e70,uVar8,puVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setTextAlignment__026caa90,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_sizeToFit_0269ec08);
  local_1b4 = 0xdc;
  local_1c4 = 0x50;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_bounds_026ca548);
  local_1d0 = dVar6 + 8.0;
  local_3d8 = local_1d0;
  if (local_1d0 <= (double)(long)local_1c4) {
    local_3d8 = (double)(long)local_1c4;
  }
  local_1f8 = local_3d8;
  local_1c0 = local_3d8;
  if (local_3d8 <= (double)(long)local_1b4) {
    local_3e0 = local_3d8;
  }
  else {
    local_3e0 = (double)(long)local_1b4;
  }
  local_200 = local_3e0;
  local_1b0 = local_3e0;
  iVar5 = 10;
  if (local_1a0 == 0.0 || local_3e0 == 0.0) {
    iVar5 = 0;
  }
  local_208 = local_1a0 + (double)iVar5 + local_3e0;
  local_214 = 8;
  local_220 = (300.0 - local_208) / 2.0;
  local_3f8 = local_220;
  if (local_220 <= 8.0) {
    local_3f8 = 8.0;
  }
  local_228 = local_3f8;
  local_210 = local_3f8;
  local_230 = 0;
  local_238 = local_3f8;
  local_1f0 = uVar10;
  local_1e8 = uVar9;
  local_1e0 = dVar6;
  local_1d8 = dVar11;
  _memset(auStack_280,0,0x40);
  uVar4 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_418 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_a8,0x10);
  if (local_418 != 0) {
    lVar7 = *local_270;
    local_420 = 0;
    do {
      do {
        if (*local_270 - lVar7 != 0) {
          _objc_enumerationMutation(*local_270 - lVar7,uVar4);
        }
        local_240 = *(undefined8 *)(local_278 + local_420 * 8);
        if (3 < local_230) {
          local_284 = 2;
          goto LAB_01da24c0;
        }
        IVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_head_size__026c4f68,local_240);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = 0x4042000000000000;
        dVar6 = local_238;
        dVar11 = local_108;
        uVar8 = uVar9;
        local_290 = IVar3;
        FUN_01d8ec14();
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar6,dVar11,uVar9,uVar8,local_290,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addSubview__026ca4c0,local_290);
        local_238 = local_238 + 22.0;
        local_230 = local_230 + 1;
        _objc_storeStrong(&local_290,0);
        local_420 = local_420 + 1;
      } while (local_420 < local_418);
      local_418 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_a8,0x10);
      local_420 = 0;
    } while (local_418 != 0);
  }
  local_284 = 0;
LAB_01da24c0:
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (local_180 == 0) {
    local_450 = local_210;
  }
  else {
    local_450 = local_210 + local_1a0 + 10.0;
  }
  dVar11 = local_108 + 8.0;
  uVar8 = 0x4034000000000000;
  dVar6 = local_1b0;
  FUN_01d8ec14();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_450,dVar11,dVar6,uVar8,local_1a8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setTag__026caa80,0x4e);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addSubview__026ca4c0,local_1a8);
  puVar1 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_284 = 1;
  _objc_storeStrong(&local_1a8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

