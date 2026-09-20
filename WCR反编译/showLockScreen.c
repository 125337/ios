// showLockScreen @ 0000733c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void EncryptionLock::showLockScreen(ID param_1,SEL param_2)

{
  double dVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double in_d2;
  double dVar14;
  undefined8 uVar15;
  undefined *local_398;
  double local_390;
  double dStack_388;
  double local_380;
  double dStack_378;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined *local_348;
  double local_340;
  double dStack_338;
  double local_330;
  double dStack_328;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined *local_2f8;
  int local_2ec;
  undefined *local_2e8;
  double local_2e0;
  undefined8 local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  undefined8 local_2b8;
  double local_2b0;
  double local_2a8;
  undefined *local_2a0;
  int local_294;
  double local_290;
  double local_288;
  double local_280;
  undefined8 local_278;
  double local_270;
  double local_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined8 local_248;
  double local_240;
  undefined8 local_238;
  double local_230;
  double dStack_228;
  undefined8 local_220;
  undefined8 local_218;
  double local_210;
  undefined8 local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 *local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined *local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined *local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_b0;
  undefined4 local_a4;
  ID local_a0 [3];
  SEL local_88;
  ID local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  uVar11 = DAT_02323c68;
  dVar1 = DAT_02323c60;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  dVar9 = DAT_02323c60;
  local_88 = param_2;
  local_80 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lockWindow_0269cba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setupLockWindow_0269cbd8);
  }
  else {
    IVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_lockWindow_0269cba0);
    _objc_retainAutoreleasedReturnValue();
    FUN_00006748();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_lockWindow_0269cba0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a0[0] = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (local_a0[0] == 0) {
    local_a4 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setIsLockScreenPresented__0269cc30,1);
    IVar2 = local_a0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (IVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setEnteredCode__0269cc40);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_d0 = dVar9;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      local_b0 = in_d2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e0 = dVar9;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_108 = local_b0 / 5.0;
      local_110 = local_108 * 3.0 + 40.0;
      local_118 = local_108 * 4.0 + 60.0;
      local_120 = local_b0 / 2.0;
      local_128 = ((dVar9 - local_118) - 150.0) / 2.0;
      puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      local_100 = local_108;
      local_d8 = dVar9;
      _objc_alloc();
      uVar12 = 0;
      uVar8 = 0;
      uVar7 = 0x406b800000000000;
      uVar15 = 0x4049000000000000;
      FUN_00009bf4();
      local_150 = uVar8;
      local_148 = uVar12;
      local_140 = uVar7;
      local_138 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar8,uVar12,uVar7,uVar15,puVar4,PTR_s_initWithFrame__026ca6e8);
      dVar9 = local_120;
      dVar13 = local_128;
      local_130 = puVar4;
      FUN_00009c40();
      local_170 = dVar9;
      dStack_168 = dVar13;
      local_160 = dVar9;
      dStack_158 = dVar13;
      (*(code *)PTR__objc_msgSend_02578628)(dVar9,dVar13,local_130,PTR_s_setCenter__026ca8c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setText__026caa88,&cf_eQ_x);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTextAlignment__026caa90,1);
      puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4032000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      IVar2 = local_a0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isBiometricEnabled_0269cbf0);
      if (((IVar2 & 1) != 0) &&
         (IVar2 = local_80,
         (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_biometricAttempted_0269cbf8),
         (IVar2 & 1) != 0)) {
        puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = 0;
        uVar7 = 0;
        uVar15 = 0x4044000000000000;
        uVar12 = 0x4044000000000000;
        local_178 = puVar4;
        FUN_00009bf4();
        local_1c0 = uVar7;
        uStack_1b8 = uVar8;
        local_1b0 = uVar12;
        uStack_1a8 = uVar15;
        local_198 = uVar7;
        uStack_190 = uVar8;
        local_188 = uVar12;
        uStack_180 = uVar15;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,uVar8,uVar12,uVar15,local_178,PTR_s_setFrame__026ca960);
        dVar13 = local_128 - 40.0;
        dVar9 = local_120;
        FUN_00009c40();
        local_1e0 = dVar9;
        dStack_1d8 = dVar13;
        local_1d0 = dVar9;
        dStack_1c8 = dVar13;
        (*(code *)PTR__objc_msgSend_02578628)(dVar9,dVar13,local_178,PTR_s_setCenter__026ca8c0);
        puVar5 = PTR__OBJC_CLASS___LAContext_026cdfa8;
        _objc_alloc_init();
        local_1f0 = 0;
        local_1f8 = 0;
        local_1e8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_canEvaluatePolicy_error__0269cc18,1,&local_1f8);
        _objc_storeStrong(&local_1f0,local_1f8);
        puVar4 = local_178;
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_faceid)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setImage_forState__0269cc60,puVar5,0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        else {
          puVar6 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_biometryType_0269cc58);
          puVar4 = local_178;
          if (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
            puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
                       &cf_faceid);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setImage_forState__0269cc60,puVar5,0)
            ;
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          else {
            puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
                       &cf_touchid);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setImage_forState__0269cc60,puVar5,0)
            ;
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
        }
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setTintColor__026caab0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar11);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_178;
        (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x4034000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_178;
        (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_178,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_80,
                   PTR_s_biometricButtonTapped__0269cc68,0x40);
        IVar2 = local_a0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        _objc_storeStrong(&local_1f0);
        _objc_storeStrong(&local_1e8,0);
        _objc_storeStrong(&local_178,0);
      }
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      dVar14 = local_110 - 60.0;
      uVar8 = 0;
      uVar7 = 0;
      uVar12 = 0x403e000000000000;
      FUN_00009bf4();
      local_220 = uVar7;
      local_218 = uVar8;
      local_210 = dVar14;
      local_208 = uVar12;
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,puVar4,PTR_s_initWithFrame__026ca6e8);
      dVar9 = local_120;
      dVar13 = local_120;
      local_200 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_frame_026ca640);
      local_250 = dVar13;
      local_248 = uVar8;
      local_240 = dVar14;
      local_238 = uVar12;
      _CGRectGetMaxY(dVar13,uVar8,dVar14);
      dVar14 = 40.0;
      dVar13 = dVar13 + 40.0;
      FUN_00009c40();
      local_260 = dVar9;
      dStack_258 = dVar13;
      local_230 = dVar9;
      dStack_228 = dVar13;
      (*(code *)PTR__objc_msgSend_02578628)(dVar9,local_200,PTR_s_setCenter__026ca8c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setTag__026caa80,100);
      IVar2 = local_a0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      dVar9 = 15.0;
      local_268 = 15.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_bounds_026ca548);
      uVar7 = 0x4014000000000000;
      dVar10 = (dVar14 + local_268 * -6.0) / 5.0;
      local_290 = dVar9;
      local_288 = dVar13;
      local_280 = dVar14;
      local_278 = uVar12;
      local_270 = dVar10;
      for (local_294 = 0; local_294 < 6; local_294 = local_294 + 1) {
        puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        dVar13 = (double)(long)local_294 * (local_268 + local_270);
        uVar7 = 0;
        dVar14 = local_268;
        dVar9 = local_268;
        FUN_00009bf4();
        local_2c0 = dVar13;
        local_2b8 = uVar7;
        local_2b0 = dVar14;
        local_2a8 = dVar9;
        (*(code *)PTR__objc_msgSend_02578628)(dVar13,uVar7,puVar4,PTR_s_initWithFrame__026ca6e8);
        uVar7 = 0x4000000000000000;
        dVar13 = local_268 / 2.0;
        local_2a0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar13);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
        puVar5 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        dVar10 = 1.0;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2a0,PTR_s_setTag__026caa80,(long)(local_294 + 1));
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_addSubview__026ca4c0,local_2a0);
        _objc_storeStrong(&local_2a0,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_frame_026ca640);
      local_2e0 = dVar10;
      local_2d8 = uVar7;
      local_2d0 = dVar14;
      local_2c8 = dVar9;
      _CGRectGetMaxY(dVar10,uVar7,dVar14,dVar9);
      local_128 = dVar10 + 40.0;
      local_78 = &cf_1;
      local_70 = &cf_2;
      local_68 = &cf_3;
      local_60 = &cf_4;
      local_58 = &cf_5;
      local_50 = &cf_6;
      local_48 = &cf_7;
      local_40 = &cf_8;
      local_38 = &cf_9;
      local_30 = &::cf_0;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78
                 ,10);
      _objc_retainAutoreleasedReturnValue();
      local_2e8 = puVar4;
      for (local_2ec = 0; local_2ec < 9; local_2ec = local_2ec + 1) {
        puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
        _objc_retainAutoreleasedReturnValue();
        dVar14 = (local_120 - local_110 / 2.0) + (local_100 + 20.0) * (double)(local_2ec % 3);
        dVar10 = local_128 + (local_108 + 20.0) * (double)(local_2ec / 3);
        dVar9 = local_100;
        dVar13 = local_108;
        local_2f8 = puVar4;
        FUN_00009bf4();
        local_340 = dVar14;
        dStack_338 = dVar10;
        local_330 = dVar9;
        dStack_328 = dVar13;
        local_318 = dVar14;
        dStack_310 = dVar10;
        local_308 = dVar9;
        dStack_300 = dVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar14,dVar10,dVar9,dVar13,local_2f8,PTR_s_setFrame__026ca960);
        puVar4 = local_2f8;
        puVar5 = local_2e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2e8,PTR_s_objectAtIndexedSubscript__0269cc78,(long)local_2ec);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitle_forState__026caab8,puVar5,0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_108 / 2.0,PTR__OBJC_CLASS___UIFont_026cdfc0,
                   PTR_s_systemFontOfSize__0269cc50);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_2f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_titleLabel_026caba0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar11);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        dVar9 = local_100 / 2.0;
        puVar4 = local_2f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar9);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_2f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_2f8;
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2f8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_80,
                   PTR_s_numberButtonTapped__0269cc80,0x40);
        puVar4 = local_2e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2e8,PTR_s_objectAtIndexedSubscript__0269cc78,(long)local_2ec);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_setTag__026caa80,(long)(int)puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        IVar2 = local_a0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        _objc_storeStrong(&local_2f8,0);
      }
      puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
      _objc_retainAutoreleasedReturnValue();
      dVar14 = local_120 - local_100 / 2.0;
      dVar10 = local_128 + (local_108 + 20.0) * 3.0;
      dVar9 = local_100;
      dVar13 = local_108;
      local_348 = puVar4;
      FUN_00009bf4();
      local_390 = dVar14;
      dStack_388 = dVar10;
      local_380 = dVar9;
      dStack_378 = dVar13;
      local_368 = dVar14;
      dStack_360 = dVar10;
      local_358 = dVar9;
      dStack_350 = dVar13;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar14,dVar10,dVar9,dVar13,local_348,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_setTitle_forState__026caab8,&::cf_0,0);
      puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_108 / 2.0,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_348;
      (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar11);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      dVar9 = local_100 / 2.0;
      puVar4 = local_348;
      (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar9);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_348;
      (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_348;
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_348,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_80,
                 PTR_s_numberButtonTapped__0269cc80,0x40);
      (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_setTag__026caa80,0);
      IVar2 = local_a0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc();
      dVar14 = local_b0 - 40.0;
      uVar7 = 0;
      uVar11 = 0;
      uVar8 = 0x403e000000000000;
      FUN_00009bf4();
      (*(code *)PTR__objc_msgSend_02578628)(uVar11,puVar4,PTR_s_initWithFrame__026ca6e8);
      dVar9 = local_120;
      dVar13 = local_120;
      local_398 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_frame_026ca640);
      _CGRectGetMaxY(dVar13,uVar7,dVar14,uVar8);
      dVar13 = dVar13 + 40.0;
      FUN_00009c40();
      (*(code *)PTR__objc_msgSend_02578628)(dVar9,dVar13,local_398,PTR_s_setCenter__026ca8c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_setText__026caa88,&cf_ScSQSndeQ);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar1,dVar1,dVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_setTextAlignment__026caa90,1);
      puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_398,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      IVar2 = local_a0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(&local_398);
      _objc_storeStrong(&local_348,0);
      _objc_storeStrong(&local_2e8,0);
      _objc_storeStrong(&local_200,0);
      _objc_storeStrong(&local_130,0);
      local_a4 = 0;
    }
    else {
      local_a4 = 1;
    }
  }
  _objc_storeStrong(local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

