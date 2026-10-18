// tableView:didSelectRowAtIndexPath: @0x1b30f4


/* Function Stack Size: 0x20 bytes */



void AABCustomDashStyleListViewController::tableView_didSelectRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  int iVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  cfstringStruct *pcVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  long lVar12;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined1 *puVar13;

  undefined8 uVar14;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar15 [16];

  undefined *local_240;

  undefined8 local_238;

  code *local_230;

  undefined *puStack_228;

  undefined8 local_220;

  undefined1 auStack_218 [8];

  undefined8 local_210;

  undefined8 uStack_208;

  undefined *local_200;

  undefined8 local_1f8;

  code *local_1f0;

  undefined *puStack_1e8;

  undefined8 local_1e0;

  cfstringStruct *local_1d8;

  undefined8 local_1d0;

  undefined8 local_1c8;

  undefined *local_1c0;

  undefined8 local_1b8;

  code *local_1b0;

  undefined *puStack_1a8;

  cfstringStruct *local_1a0;

  undefined8 local_198;

  undefined1 auStack_190 [8];

  undefined8 local_188;

  undefined8 uStack_180;

  undefined *local_178;

  undefined8 local_170;

  code *local_168;

  undefined *puStack_160;

  undefined8 local_158;

  undefined1 auStack_150 [8];

  undefined8 local_148;

  undefined8 uStack_140;

  undefined *local_138;

  undefined8 local_130;

  code *local_128;

  undefined *puStack_120;

  undefined8 local_118;

  undefined1 auStack_110 [8];

  undefined8 local_108;

  undefined8 uStack_100;

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  undefined8 local_d8;

  undefined1 auStack_d0 [8];

  undefined8 local_c8;

  undefined8 uStack_c0;

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  undefined1 auStack_98 [8];

  undefined1 auStack_90 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00294460(param_3,extraout_x1,param_4,1);

  FUN_00298060(param_1);

  FUN_001ab458();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  lVar5 = FUN_00293860();

  if (lVar5 != 0) {

    auVar15 = FUN_0029bae0(param_4);

    uVar14 = auVar15._0_8_;

    FUN_00299500(uVar4,auVar15._8_8_,uVar14);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    uVar6 = auVar15._0_8_;

    FUN_00299540(uVar6,auVar15._8_8_,&cf_name);

    pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf__g_TT;

    if (pcVar7 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar7;

    }

    _objc_retain(pcVar1);

    _objc_release(pcVar7);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,pcVar1,0,0);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    uVar9 = FUN_00298060(param_1);

    iVar3 = FUN_001b2fb4(uVar14,uVar9);

    _objc_initWeak(auStack_90,param_1);

    puVar2 = PTR___NSConcreteStackBlock_003886f0;

    local_b8 = PTR___NSConcreteStackBlock_003886f0;

    local_b0 = 0xc2000000;

    local_a8 = FUN_001b3810;

    puStack_a0 = &DAT_0038e4a0;

    _objc_copyWeak(auStack_98,auStack_90);

    uVar9 = _objc_retainBlock(&local_b8);

    uVar10 = FUN_00298060(param_1);

    if (iVar3 == 0) {

      local_138 = puVar2;

      local_130 = 0xc2000000;

      local_128 = FUN_001b3ae0;

      puStack_120 = &DAT_0038e530;

      puVar13 = auStack_110;

      local_108 = uVar14;

      uStack_100 = uVar10;

      _objc_copyWeak(puVar13,auStack_90);

      _objc_retain(uVar9);

      local_118 = uVar9;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf__O_udk7h_,0,&local_138);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar8,auVar15._8_8_,auVar15._0_8_);

      _objc_release(auVar15._0_8_);

      uVar11 = local_118;

    }

    else {

      local_f8 = puVar2;

      local_f0 = 0xc2000000;

      local_e8 = FUN_001b38bc;

      puStack_e0 = &DAT_0038e530;

      puVar13 = auStack_d0;

      local_c8 = uVar14;

      uStack_c0 = uVar10;

      _objc_copyWeak(puVar13,auStack_90);

      _objc_retain(uVar9);

      local_d8 = uVar9;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm_O_u,0,&local_f8);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar8,auVar15._8_8_,auVar15._0_8_);

      _objc_release(auVar15._0_8_);

      uVar11 = local_d8;

    }

    _objc_release(uVar11);

    _objc_destroyWeak(puVar13);

    local_178 = puVar2;

    local_170 = 0xc2000000;

    local_168 = FUN_001b3cc0;

    puStack_160 = &DAT_0038e530;

    local_148 = uVar14;

    uStack_140 = uVar10;

    _objc_copyWeak(auStack_150,auStack_90);

    _objc_retain(uVar9);

    local_158 = uVar9;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf__Nx,0,&local_178);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    local_1c0 = puVar2;

    local_1b8 = 0xc2000000;

    local_1b0 = FUN_001b3e6c;

    puStack_1a8 = &DAT_0038e5c0;

    _objc_retain(pcVar1);

    local_1a0 = pcVar1;

    local_188 = uVar10;

    uStack_180 = uVar14;

    _objc_retain(uVar9);

    local_198 = uVar9;

    _objc_copyWeak(auStack_190,auStack_90);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf__TT,0,&local_1c0);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    local_200 = puVar2;

    local_1f8 = 0xc2000000;

    local_1f0 = FUN_001b41d0;

    puStack_1e8 = &DAT_0038e5f0;

    local_1c8 = uVar10;

    _objc_retain(uVar6);

    local_1e0 = uVar6;

    _objc_retain(pcVar1);

    local_1d8 = pcVar1;

    _objc_retain(uVar9);

    local_1d0 = uVar9;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf_Y6R_Ne7h_,0,&local_200);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    local_240 = puVar2;

    local_238 = 0xc2000000;

    local_230 = FUN_001b42ec;

    puStack_228 = &DAT_0038e530;

    local_210 = uVar10;

    uStack_208 = uVar14;

    _objc_copyWeak(auStack_218,auStack_90);

    _objc_retain(uVar9);

    local_220 = uVar9;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf_Rd,2,&local_240);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_07,&cf_Sm,1,0);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    FUN_0029a0a0(uVar8);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar14 = extraout_x1_08;

    if (lVar5 != 0) {

      FUN_00292aa0(param_3,extraout_x1_08,param_4);

      lVar12 = _objc_retainAutoreleasedReturnValue();

      lVar5 = lVar12;

      if (lVar12 == 0) {

        FUN_002a6220(param_1);

        lVar5 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_0029a0a0(uVar8);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1740(auVar15._0_8_,auVar15._8_8_,lVar5);

      _objc_release(auVar15._0_8_);

      if (lVar12 == 0) {

        _objc_release(lVar5);

        FUN_002a6220(param_1);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        uVar14 = FUN_002925a0();

      }

      else {

        uVar14 = FUN_002925a0(lVar12);

      }

      FUN_0029a0a0(uVar8);

      uVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1700(uVar14,in_d1,in_d2,in_d3);

      _objc_release(uVar10);

      if (lVar12 == 0) {

        _objc_release(lVar5);

      }

      _objc_release(lVar12);

      uVar14 = extraout_x1_09;

    }

    FUN_0029a500(param_1,uVar14,uVar8,1,0);

    _objc_release(local_220);

    _objc_destroyWeak(auStack_218);

    _objc_release(local_1d0);

    _objc_release(local_1d8);

    _objc_release(local_1e0);

    _objc_destroyWeak(auStack_190);

    _objc_release(local_198);

    _objc_release(local_1a0);

    _objc_release(local_158);

    _objc_destroyWeak(auStack_150);

    _objc_release(uVar9);

    _objc_destroyWeak(auStack_98);

    _objc_destroyWeak(auStack_90);

    _objc_release(uVar8);

    _objc_release(pcVar1);

    _objc_release(uVar6);

  }

  _objc_release(uVar4);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




