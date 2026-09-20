// wcr_reflowRankRow:cardW: @ 01da4000

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineSessionStatsBoardView::wcr_reflowRankRow_cardW_
          (WCRefineSessionStatsBoardView *this,ID param_1,SEL param_2,ID param_3,double param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_d1;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_378;
  double local_368;
  double local_360;
  double local_350;
  double local_340;
  double local_338;
  ulong local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  double local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  double local_2b0;
  undefined8 uStack_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined4 local_274;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_260;
  undefined8 uStack_258;
  double local_248;
  ulong local_240;
  ulong local_238;
  double local_230;
  undefined8 uStack_228;
  double local_220;
  undefined8 uStack_218;
  double local_210;
  undefined8 uStack_208;
  double local_200;
  undefined8 uStack_1f8;
  double local_1f0;
  double local_1e8;
  undefined4 local_1dc;
  double local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1a8;
  double local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_180;
  double dStack_178;
  undefined1 local_169;
  double local_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  double local_b0;
  double local_a0;
  undefined8 uStack_98;
  double local_90;
  double local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  double local_58;
  undefined8 uStack_50;
  undefined4 local_44;
  double local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_4;
  if (local_38 == 0) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    local_68 = 0;
    local_58 = local_40;
    uStack_50 = 0x404c000000000000;
    dVar6 = 0.0;
    uStack_98 = 0x404c000000000000;
    local_a0 = local_40;
    local_b0 = dVar6;
    local_90 = dVar6;
    local_80 = local_a0;
    uStack_78 = uStack_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,in_d1,local_40,0x404c000000000000,local_38,PTR_s_setFrame__026ca960);
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x46);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_b8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x45);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_c0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_c8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x4b);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_d0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,0x49);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    if (local_b8 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setAutoresizingMask__026ca878,0);
      uVar5 = 0x4030000000000000;
      uVar7 = 0x4020000000000000;
      uVar9 = 0x4044000000000000;
      uVar8 = 0x4044000000000000;
      FUN_01d8ec14();
      local_120 = uVar5;
      uStack_118 = uVar7;
      local_110 = uVar8;
      uStack_108 = uVar9;
      local_f8 = uVar5;
      uStack_f0 = uVar7;
      local_e8 = uVar8;
      uStack_e0 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,uVar7,uVar8,uVar9,local_b8,PTR_s_setFrame__026ca960);
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      dVar6 = 20.0;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_c0 != 0) {
      dVar6 = 60.0;
      uVar5 = 0x4020000000000000;
      uVar7 = 0x4036000000000000;
      uVar8 = 0x4032000000000000;
      FUN_01d8ec14();
      local_160 = dVar6;
      uStack_158 = uVar5;
      local_150 = uVar7;
      uStack_148 = uVar8;
      local_140 = dVar6;
      uStack_138 = uVar5;
      local_130 = uVar7;
      uStack_128 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar6,uVar5,uVar7,uVar8,local_c0,PTR_s_setFrame__026ca960);
    }
    FUN_01da4938(local_d0);
    uVar1 = local_c8;
    local_168 = dVar6;
    if (local_c8 != 0) {
      puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_169 = false;
      if ((uVar1 & 1) != 0) {
        uVar1 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_numberOfLines_026a8e70);
        local_169 = 1 < (long)uVar1;
      }
      local_194 = 0x28;
      local_1a0 = (((local_40 - 88.0) - 16.0) - local_168) - 8.0;
      local_338 = local_1a0;
      if (local_1a0 <= 40.0) {
        local_338 = 40.0;
      }
      local_1a8 = local_338;
      iVar4 = 0x20;
      if ((bool)local_169 == false) {
        iVar4 = 0x12;
      }
      dVar6 = (double)iVar4;
      uVar5 = 0x4056000000000000;
      uVar7 = 0x4018000000000000;
      FUN_01d8ec14();
      local_1d0 = uVar5;
      uStack_1c8 = uVar7;
      local_1c0 = local_338;
      dStack_1b8 = dVar6;
      local_190 = uVar5;
      uStack_188 = uVar7;
      local_180 = local_338;
      dStack_178 = dVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,uVar7,local_338,dVar6,local_c8,PTR_s_setFrame__026ca960);
    }
    FUN_01da4b1c(local_40,local_d0,local_c8);
    if (local_d8 != 0) {
      local_1dc = 0x28;
      local_1e8 = (local_40 - 88.0) - 16.0;
      local_340 = local_1e8;
      if (local_1e8 <= 40.0) {
        local_340 = 40.0;
      }
      local_1f0 = local_340;
      local_1d8 = local_340;
      local_350 = 88.0;
      uVar5 = 0x403e000000000000;
      uVar7 = 0x4020000000000000;
      FUN_01d8ec14();
      local_230 = local_350;
      uStack_228 = uVar5;
      local_220 = local_340;
      uStack_218 = uVar7;
      local_210 = local_350;
      uStack_208 = uVar5;
      local_200 = local_340;
      uStack_1f8 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setFrame__026ca960);
      uVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_viewWithTag__026cabe0,0x4a);
      _objc_retainAutoreleasedReturnValue();
      local_238 = uVar1;
      if (uVar1 != 0) {
        _objc_getAssociatedObject(uVar1,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_240 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar1 & 1) == 0) {
          local_350 = 0.3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_doubleValue_026ca608);
        }
        local_248 = local_350;
        (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_frame_026ca640);
        uStack_2d8 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
        local_378 = *(undefined8 *)PTR__CGPointZero_025782e0;
        uStack_258 = 0x4020000000000000;
        local_274 = 6;
        local_288 = local_248;
        local_290 = DAT_02323d80;
        if (DAT_02323d80 <= local_248) {
          local_360 = local_248;
        }
        else {
          local_360 = DAT_02323d80;
        }
        local_298 = local_360;
        local_280 = local_1d8 * local_360;
        local_368 = local_280;
        if (local_280 <= 6.0) {
          local_368 = 6.0;
        }
        local_2a0 = local_368;
        local_260 = local_368;
        uStack_2a8 = 0x4020000000000000;
        local_2b0 = local_368;
        uStack_2c8 = 0x4020000000000000;
        local_2d0 = local_368;
        local_2e0 = local_378;
        local_2c0 = local_378;
        uStack_2b8 = uStack_2d8;
        local_270 = local_378;
        uStack_268 = uStack_2d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_378,uStack_2d8,local_368,0x4020000000000000,local_238,
                   PTR_s_setFrame__026ca960);
        uVar1 = local_238;
        _objc_getAssociatedObject(local_238,PTR_s_hash_0269ec90);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_2e8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar1 & 1) == 0) {
          local_378 = 0x3fd3333333333333;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_doubleValue_026ca608);
        }
        FUN_01da4e6c(local_378,local_238);
        _objc_storeStrong(&local_2e8);
        _objc_storeStrong(&local_240,0);
      }
      _objc_storeStrong(&local_238,0);
    }
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

