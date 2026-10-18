// tableView:didSelectRowAtIndexPath: @0x25f720


/* Function Stack Size: 0x20 bytes */



void XZYHomeDockCustomStyleListController::tableView_didSelectRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  bool bVar3;

  int iVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  cfstringStruct *pcVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  undefined8 uVar12;

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

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined1 auVar13 [16];

  undefined *local_248;

  undefined8 local_240;

  code *local_238;

  undefined *puStack_230;

  undefined8 local_228;

  ID IStack_220;

  long local_218;

  undefined *local_210;

  undefined8 local_208;

  code *local_200;

  undefined *puStack_1f8;

  undefined8 local_1f0;

  cfstringStruct *local_1e8;

  ID IStack_1e0;

  undefined *local_1d8;

  undefined8 local_1d0;

  code *local_1c8;

  undefined *puStack_1c0;

  cfstringStruct *local_1b8;

  ID local_1b0;

  long lStack_1a8;

  undefined *local_1a0;

  undefined8 local_198;

  code *local_190;

  undefined *puStack_188;

  undefined8 local_180;

  ID local_178;

  long lStack_170;

  undefined1 local_168;

  undefined *local_160;

  undefined8 local_158;

  code *local_150;

  undefined *puStack_148;

  undefined8 local_140;

  ID local_138;

  long lStack_130;

  undefined1 local_128;

  undefined *local_120;

  undefined8 local_118;

  code *local_110;

  undefined *puStack_108;

  ID local_100;

  long lStack_f8;

  undefined *local_f0;

  undefined8 local_e8;

  code *local_e0;

  undefined *puStack_d8;

  undefined8 local_d0;

  ID IStack_c8;

  ID local_c0;

  long local_b8;

  undefined *local_b0;

  undefined8 local_a8;

  code *local_a0;

  undefined *puStack_98;

  undefined8 local_90;

  ID IStack_88;

  ID local_80;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00294460(param_3,extraout_x1,param_4,1);

  FUN_0024d85c();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00293860();

  if (lVar6 != 0) {

    auVar13 = FUN_0029bae0(param_4);

    lVar6 = auVar13._0_8_;

    FUN_00299500(uVar5,auVar13._8_8_,lVar6);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar13._0_8_;

    FUN_00299540(uVar7,auVar13._8_8_,&cf_name);

    pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf__g_TT;

    if (pcVar8 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar8;

    }

    _objc_retain(pcVar1);

    _objc_release(pcVar8);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,pcVar1,0,0);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar10 = auVar13._0_8_;

    lVar11 = FUN_00297480(uVar10,auVar13._8_8_,&cf_xzyHomeBottomBarStyleMode);

    puVar2 = PTR___NSConcreteStackBlock_003886f0;

    bVar3 = lVar11 == lVar6 + 100;

    if (bVar3) {

      local_b0 = PTR___NSConcreteStackBlock_003886f0;

      local_a8 = 0xc2000000;

      local_a0 = FUN_0025fe7c;

      puStack_98 = &DAT_00388c90;

      _objc_retain(uVar10);

      local_90 = uVar10;

      IStack_88 = param_1;

      _objc_retain(param_3);

      local_80 = param_3;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm_O_u,0,&local_b0);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar9,auVar13._8_8_,auVar13._0_8_);

      _objc_release(auVar13._0_8_);

      _objc_release(local_80);

      uVar12 = local_90;

    }

    else {

      local_f0 = PTR___NSConcreteStackBlock_003886f0;

      local_e8 = 0xc2000000;

      local_e0 = FUN_0025ff10;

      puStack_d8 = &DAT_003891e0;

      _objc_retain(uVar10);

      local_d0 = uVar10;

      IStack_c8 = param_1;

      local_b8 = lVar6;

      _objc_retain(param_3);

      local_c0 = param_3;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf__O_udk7h_,0,&local_f0);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar9,auVar13._8_8_,auVar13._0_8_);

      _objc_release(auVar13._0_8_);

      _objc_release(local_c0);

      uVar12 = local_d0;

    }

    _objc_release(uVar12);

    local_120 = puVar2;

    local_118 = 0xc2000000;

    local_110 = FUN_0025ffa8;

    puStack_108 = &DAT_003890b0;

    local_100 = param_1;

    lStack_f8 = lVar6;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf__Nx,0,&local_120);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar9,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    local_160 = puVar2;

    local_158 = 0xc2000000;

    local_150 = FUN_0026010c;

    puStack_148 = &DAT_0038fdb8;

    _objc_retain(uVar7);

    local_140 = uVar7;

    local_138 = param_1;

    lStack_130 = lVar6;

    local_128 = bVar3;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_n_teSOMOn_,0,&local_160);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar9,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    FUN_00299540(uVar7,extraout_x1_05,&cf_type);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    iVar4 = FUN_00297820(auVar13._0_8_,auVar13._8_8_,&cf_html);

    _objc_release(auVar13._0_8_);

    if (iVar4 != 0) {

      local_1a0 = puVar2;

      local_198 = 0xc2000000;

      local_190 = FUN_002608dc;

      puStack_188 = &DAT_0038fdb8;

      _objc_retain(uVar7);

      local_180 = uVar7;

      local_178 = param_1;

      lStack_170 = lVar6;

      local_168 = bVar3;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf_n_,0,&local_1a0);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar9,auVar13._8_8_,auVar13._0_8_);

      _objc_release(auVar13._0_8_);

      _objc_release(local_180);

    }

    local_1d8 = puVar2;

    local_1d0 = 0xc2000000;

    local_1c8 = FUN_002610ac;

    puStack_1c0 = &DAT_00389020;

    _objc_retain(pcVar1);

    local_1b8 = pcVar1;

    local_1b0 = param_1;

    lStack_1a8 = lVar6;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_07,&cf__TT,0,&local_1d8);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar9,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    local_210 = puVar2;

    local_208 = 0xc2000000;

    local_200 = FUN_00261440;

    puStack_1f8 = &DAT_00388c90;

    _objc_retain(uVar7);

    local_1f0 = uVar7;

    _objc_retain(pcVar1);

    local_1e8 = pcVar1;

    IStack_1e0 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_08,&cf_Y6R_Ne7h_,0,&local_210);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar9,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    local_248 = puVar2;

    local_240 = 0xc2000000;

    local_238 = FUN_00261560;

    puStack_230 = &DAT_00389020;

    local_218 = lVar6;

    _objc_retain(uVar10);

    local_228 = uVar10;

    IStack_220 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_09,&cf_Rd,2,&local_248);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar9,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_10,&cf_Sm,1,0);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar9,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    FUN_0029a500(param_1,extraout_x1_11,uVar9,1,0);

    _objc_release(local_228);

    _objc_release(local_1e8);

    _objc_release(local_1f0);

    _objc_release(local_1b8);

    _objc_release(local_140);

    _objc_release(uVar10);

    _objc_release(uVar9);

    _objc_release(pcVar1);

    _objc_release(uVar7);

  }

  _objc_release(uVar5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




