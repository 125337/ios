// FUN_00652b4c @ 00652b4c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00652b4c(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double local_7d0;
  double local_7c8;
  double local_7c0;
  double local_7b8;
  double local_7b0;
  double local_7a8;
  cfstringStruct *local_770;
  double local_670;
  double local_668;
  double local_640;
  double local_638;
  cfstringStruct *local_4e0;
  cfstringStruct *local_488;
  byte local_479;
  cfstringStruct *local_478;
  byte local_461;
  double local_460;
  double dStack_458;
  double local_450;
  double dStack_448;
  double local_440;
  double dStack_438;
  double local_430;
  double dStack_428;
  double local_420;
  double dStack_418;
  double local_410;
  double dStack_408;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  undefined8 local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  undefined8 local_368;
  double local_358;
  double local_350;
  undefined8 local_348;
  double local_340;
  double local_338;
  undefined8 local_330;
  double local_328;
  double local_320;
  undefined8 local_318;
  double local_310;
  double local_308;
  undefined8 local_300;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  cfstringStruct *local_2a8 [4];
  cfstringStruct *local_288;
  double local_280;
  double dStack_278;
  double local_270;
  double dStack_268;
  double local_258;
  double local_250;
  double local_248;
  undefined8 local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  undefined8 local_198;
  double local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  cfstringStruct *local_88;
  long local_80;
  long local_78;
  cfstringStruct *local_70;
  undefined4 local_68;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_5);
  pcVar3 = local_28;
  local_61 = 0;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_40 = param_8;
  local_38 = param_7;
  local_30 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_4e0 = (cfstringStruct *)0x0;
  }
  else {
    local_4e0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_4e0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_4e0;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (local_48 == (cfstringStruct *)0x0) {
    local_68 = 1;
    goto LAB_00654904;
  }
  pcVar3 = &cf_MMEdgeTipsView;
  _NSClassFromString();
  lVar4 = local_30;
  local_70 = pcVar3;
  FUN_00657568(local_30,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_78 = lVar4;
  FUN_00657680();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_80 = lVar4;
  if (local_70 == (cfstringStruct *)0x0) {
    _objc_getAssociatedObject(local_28,&DAT_028cbc08);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    local_88 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_88;
      local_88 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4032000000000000);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setClipsToBounds__026ca8c8,1);
      uVar12 = 0x4020000000000000;
      uVar7 = 0x4020000000000000;
      uVar9 = 0x4028000000000000;
      uVar13 = 0x402c000000000000;
      FUN_00657a94();
      local_d0 = uVar7;
      uStack_c8 = uVar9;
      local_c0 = uVar12;
      uStack_b8 = uVar13;
      local_a8 = uVar7;
      uStack_a0 = uVar9;
      local_98 = uVar12;
      uStack_90 = uVar13;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,uVar9,uVar12,uVar13,local_88,PTR_s_setContentEdgeInsets__0269ebd0);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      param_4 = 0x3ff0000000000000;
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      param_2 = DAT_02323d98;
      param_3 = DAT_02323d90;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323da0,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setTitleColor_forState__026caac0,puVar2,0);
      if (local_80 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setImage_forState__0269cc60,local_80,0)
        ;
        uVar12 = 0;
        uVar7 = 0;
        uVar9 = 0xc000000000000000;
        uVar13 = 0x4000000000000000;
        FUN_00657a94();
        local_120 = uVar7;
        uStack_118 = uVar9;
        local_110 = uVar12;
        uStack_108 = uVar13;
        local_f8 = uVar7;
        uStack_f0 = uVar9;
        local_e8 = uVar12;
        uStack_e0 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,uVar9,uVar12,uVar13,local_88,PTR_s_setImageEdgeInsets__0269ebe0);
        param_3 = 0.0;
        uVar7 = 0;
        param_2 = 0x4010000000000000;
        param_4 = 0xc010000000000000;
        FUN_00657a94();
        local_160 = uVar7;
        uStack_158 = param_2;
        local_150 = param_3;
        uStack_148 = param_4;
        local_140 = uVar7;
        uStack_138 = param_2;
        local_130 = param_3;
        uStack_128 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,local_88,PTR_s_setTitleEdgeInsets__0269ebe8);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
                 PTR_s_wcr_onNewFileTipTap_026a61c0,0x40);
      _objc_setAssociatedObject(local_28,&DAT_028cbc08,local_88,1);
      _objc_storeStrong(&local_d8,0);
    }
    pcVar3 = local_88;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(pcVar3,&DAT_028cbc09,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTitle_forState__026caab8,local_78,0);
    pcVar5 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_48;
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar5 != pcVar3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_88);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setHidden__026ca970,0);
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_88,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bringSubviewToFront__026ca550,local_88);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_sizeToFit_0269ec08);
    dVar8 = 96.0;
    local_170 = 96.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_bounds_026ca548);
    local_180 = param_3 + 8.0;
    local_1a8 = 0x4069000000000000;
    local_638 = local_180;
    if (200.0 <= local_180) {
      local_638 = 200.0;
    }
    local_1b0 = local_638;
    local_178 = local_638;
    if (local_638 <= local_170) {
      local_640 = local_170;
    }
    else {
      local_640 = local_638;
    }
    local_1b8 = local_640;
    local_168 = local_640;
    uVar7 = 0x4041000000000000;
    local_1c8 = 34.0;
    local_1a0 = dVar8;
    local_198 = param_2;
    local_190 = param_3;
    local_188 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_bounds_026ca548);
    local_200 = 0x4046000000000000;
    local_668 = dVar8;
    if (44.0 <= dVar8) {
      local_668 = 44.0;
    }
    local_208 = local_668;
    local_1d0 = local_668;
    if (local_668 <= local_1c8) {
      local_670 = local_1c8;
    }
    else {
      local_670 = local_668;
    }
    local_210 = local_670;
    local_1c0 = local_670;
    local_1f8 = uVar7;
    local_1f0 = local_638;
    local_1e8 = param_2;
    local_1e0 = dVar8;
    local_1d8 = dVar8;
    FUN_00657ae0(local_28,local_48,local_40);
    local_218 = local_670;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    local_258 = local_670;
    local_250 = local_668;
    local_248 = local_638;
    local_240 = uVar7;
    _CGRectGetWidth(local_670,local_668,local_638,uVar7);
    local_670 = local_670 - local_168;
    dVar8 = local_218;
    dVar10 = local_168;
    dVar11 = local_1c0;
    FUN_00658d04();
    local_280 = local_670;
    dStack_278 = dVar8;
    local_270 = dVar10;
    dStack_268 = dVar11;
    local_238 = local_670;
    dStack_230 = dVar8;
    local_228 = dVar10;
    dStack_220 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_670,dVar8,dVar10,dVar11,local_88,PTR_s_setFrame__026ca960);
    pcVar3 = local_28;
    lVar4 = local_30;
    FUN_006549f8();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    _CFAbsoluteTimeGetCurrent();
    (*(code *)PTR__objc_msgSend_02578628)(local_670,puVar2,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(pcVar3,lVar4,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_68 = 1;
    _objc_storeStrong(&local_88,0);
  }
  else {
    lVar4 = local_30;
    FUN_006549cc(local_30);
    _objc_getAssociatedObject(pcVar3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    local_288 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar5 = local_70;
      _objc_alloc();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_initWithTitle_image__0269ebb8,local_78,local_80);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_288;
      local_288 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      if (local_288 != (cfstringStruct *)0x0) {
        pcVar3 = local_288;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_288,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_setDelegate__026ca910,local_28);
        }
        pcVar3 = local_28;
        lVar4 = local_30;
        FUN_006549cc(local_30);
        _objc_setAssociatedObject(pcVar3,lVar4,local_288,1);
        goto LAB_00653b4c;
      }
      local_68 = 1;
    }
    else {
LAB_00653b4c:
      pcVar3 = local_288;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_288,PTR_s_respondsToSelector__026ca818,PTR_s_updateTitle__026a62c8);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_updateTitle__026a62c8,local_78);
      }
      pcVar3 = local_288;
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar3 & 1) == 0) {
        local_770 = (cfstringStruct *)0x0;
      }
      else {
        local_770 = local_288;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_2a8[0] = local_770;
      local_2b0 = 40.0;
      dVar8 = 0.0;
      local_2b8 = 0.0;
      local_2c0 = 0.0;
      if (local_770 != (cfstringStruct *)0x0) {
        dStack_2c8 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
        local_2d0 = *(double *)PTR__CGSizeZero_025782f8;
        dVar8 = 200.0;
        dVar10 = 44.0;
        FUN_00658d50();
        local_2f0 = dVar8;
        local_2e8 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_770,PTR_s_sizeThatFits__0269ec10);
        local_300 = 0x4058000000000000;
        local_7a8 = dVar8;
        if (dVar8 <= 1.0) {
          local_7a8 = 128.0;
        }
        local_310 = local_7a8;
        local_318 = 0x4069000000000000;
        if (200.0 <= local_7a8) {
          local_7b0 = 200.0;
        }
        else {
          local_7b0 = local_7a8;
        }
        local_320 = local_7b0;
        local_308 = local_7b0;
        if (local_7b0 <= 96.0) {
          local_7b8 = 96.0;
        }
        else {
          local_7b8 = local_7b0;
        }
        local_328 = local_7b8;
        local_2c0 = local_7b8;
        local_330 = 0x4041000000000000;
        local_7c0 = dVar10;
        if (dVar10 <= 1.0) {
          local_7c0 = 40.0;
        }
        local_340 = local_7c0;
        local_348 = 0x4046000000000000;
        if (44.0 <= local_7c0) {
          local_7c8 = 44.0;
        }
        else {
          local_7c8 = local_7c0;
        }
        local_350 = local_7c8;
        local_338 = local_7c8;
        if (local_7c8 <= 34.0) {
          local_7d0 = 34.0;
        }
        else {
          local_7d0 = local_7c8;
        }
        local_358 = local_7d0;
        local_2b0 = local_7d0;
        local_2e0 = dVar8;
        dStack_2d8 = dVar10;
        local_2d0 = dVar8;
        dStack_2c8 = dVar10;
        FUN_00657ae0(local_28,local_48,local_40);
        pcVar3 = local_288;
        local_2b8 = local_7d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_288,PTR_s_respondsToSelector__026ca818,PTR_s_setY__026a62d0);
        if (((ulong)pcVar3 & 1) != 0) {
          local_7d0 = local_2b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_setY__026a62d0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_2a8[0],PTR_s_bounds_026ca548);
        dVar11 = 1.0;
        bVar1 = true;
        dVar8 = param_3;
        dVar10 = local_7c8;
        local_380 = local_7d0;
        local_378 = local_7c8;
        local_370 = param_3;
        local_368 = param_4;
        if (1.0 <= param_3) {
          dVar8 = local_7d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8[0],PTR_s_bounds_026ca548);
          bVar1 = dVar8 < 1.0;
          dVar10 = dVar11;
          local_7d0 = param_3;
          local_3a0 = param_3;
          local_398 = dVar11;
          local_390 = local_7c8;
          local_388 = dVar8;
        }
        uVar7 = 0x3ff0000000000000;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
          local_3e0 = dVar8;
          local_3d8 = uVar7;
          local_3d0 = dVar10;
          local_3c8 = local_7d0;
          _CGRectGetWidth(dVar8,uVar7,dVar10,local_7d0);
          dVar8 = dVar8 - local_2c0;
          dVar10 = local_2b8;
          dVar11 = local_2c0;
          dVar14 = local_2b0;
          FUN_00658d04();
          local_400 = dVar8;
          dStack_3f8 = dVar10;
          local_3f0 = dVar11;
          dStack_3e8 = dVar14;
          local_3c0 = dVar8;
          dStack_3b8 = dVar10;
          local_3b0 = dVar11;
          dStack_3a8 = dVar14;
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar8,dVar10,dVar11,dVar14,local_2a8[0],PTR_s_setFrame__026ca960);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8[0],PTR_s_frame_026ca640);
          dStack_418 = local_2b8;
          dStack_438 = local_2b8;
          dStack_458 = local_2b8;
          local_460 = dVar8;
          local_450 = dVar10;
          dStack_448 = local_7d0;
          local_440 = dVar8;
          local_430 = dVar10;
          dStack_428 = local_7d0;
          local_420 = dVar8;
          local_410 = dVar10;
          dStack_408 = local_7d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar8,local_2b8,dVar10,local_7d0,local_2a8[0],PTR_s_setFrame__026ca960);
        }
      }
      local_461 = 0;
      pcVar3 = local_288;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_288,PTR_s_respondsToSelector__026ca818,PTR_s_isShowing_0269ec18);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_288;
        (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_isShowing_0269ec18);
        local_461 = (byte)pcVar3;
      }
      local_479 = 0;
      bVar1 = false;
      if (local_2a8[0] != (cfstringStruct *)0x0) {
        pcVar3 = local_2a8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_2a8[0],PTR_s_isHidden_026ca768);
        bVar1 = true;
        if (((ulong)pcVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8[0],PTR_s_alpha_026ca4d8);
          bVar1 = true;
          if (DAT_02323d38 <= dVar8) {
            pcVar3 = local_2a8[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_2a8[0],PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            local_479 = 1;
            bVar1 = pcVar3 == (cfstringStruct *)0x0;
            local_478 = pcVar3;
          }
        }
      }
      if ((local_479 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_478);
      }
      if (bVar1) {
        local_461 = 0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_488 = &cf_none;
      if ((local_461 & 1) == 0) {
        pcVar3 = local_288;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_288,PTR_s_respondsToSelector__026ca818,
                   PTR_s_showAnimate_parentView_finishBlo_026a62d8);
        if (((ulong)pcVar3 & 1) == 0) {
          if (local_2a8[0] != (cfstringStruct *)0x0) {
            _objc_storeStrong(&local_488,&cf_manual_add);
            pcVar5 = local_2a8[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_2a8[0],PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_48;
            (*(code *)PTR__objc_release_02578630)();
            if (pcVar5 != pcVar3) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_addSubview__026ca4c0,local_2a8[0]);
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_2a8[0],PTR_s_setHidden__026ca970,0);
            dVar8 = 1.0;
            (*(code *)PTR__objc_msgSend_02578628)(local_2a8[0],PTR_s_setAlpha__026ca860);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_bringSubviewToFront__026ca550,local_2a8[0]);
          }
        }
        else {
          _objc_storeStrong(&local_488,&cf_showAnimate);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_288,PTR_s_showAnimate_parentView_finishBlo_026a62d8,1,local_48,0);
        }
      }
      else {
        _objc_storeStrong(&local_488,&cf_reuse_visible);
        if (local_2a8[0] != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8[0],PTR_s_setHidden__026ca970,0);
          dVar8 = 1.0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8[0],PTR_s_setAlpha__026ca860);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_bringSubviewToFront__026ca550,local_2a8[0]);
        }
      }
      pcVar3 = local_28;
      lVar4 = local_30;
      FUN_006549f8();
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      _CFAbsoluteTimeGetCurrent();
      (*(code *)PTR__objc_msgSend_02578628)(dVar8,puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(pcVar3,lVar4,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_488);
      _objc_storeStrong(local_2a8,0);
      local_68 = 0;
    }
    _objc_storeStrong(&local_288,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
LAB_00654904:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

