// tableView:didSelectRowAtIndexPath: @0x17fa10


/* Function Stack Size: 0x20 bytes */



void CadisCustomStyleListViewController::tableView_didSelectRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  cfstringStruct *pcVar6;

  undefined8 uVar7;

  long lVar8;

  ID IVar9;

  undefined8 uVar10;

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

  undefined1 auVar11 [16];

  undefined *local_1e0;

  undefined8 local_1d8;

  code *local_1d0;

  undefined *puStack_1c8;

  ID local_1c0;

  long lStack_1b8;

  undefined *local_1b0;

  undefined8 local_1a8;

  code *local_1a0;

  undefined *puStack_198;

  undefined8 local_190;

  cfstringStruct *local_188;

  ID IStack_180;

  undefined *local_178;

  undefined8 local_170;

  code *local_168;

  undefined *puStack_160;

  cfstringStruct *local_158;

  ID local_150;

  long lStack_148;

  undefined *local_140;

  undefined8 local_138;

  code *local_130;

  undefined *puStack_128;

  ID local_120;

  long lStack_118;

  undefined *local_110;

  undefined8 local_108;

  code *local_100;

  undefined *puStack_f8;

  ID local_f0;

  long lStack_e8;

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  ID local_c0;

  ID local_b8;

  long local_b0;

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  ID local_88;

  ID local_80;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_00294460(param_3,extraout_x1,param_4,1);

  FUN_00167d7c();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar4 = FUN_00293860();

  if (lVar4 != 0) {

    auVar11 = FUN_0029bae0(param_4);

    lVar4 = auVar11._0_8_;

    FUN_00299500(uVar3,auVar11._8_8_,lVar4);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar11._0_8_;

    FUN_00299540(uVar5,auVar11._8_8_,&cf_name);

    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf__g_TT;

    if (pcVar6 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar6;

    }

    _objc_retain(pcVar1);

    _objc_release(pcVar6);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,pcVar1,0,0);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    lVar8 = FUN_00138258();

    puVar2 = PTR___NSConcreteStackBlock_003886f0;

    if (lVar8 == lVar4 + 10) {

      local_a8 = PTR___NSConcreteStackBlock_003886f0;

      local_a0 = 0xc2000000;

      local_98 = FUN_00180018;

      puStack_90 = &DAT_00388d20;

      local_88 = param_1;

      _objc_retain(param_3);

      local_80 = param_3;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm_O_u,0,&local_a8);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar7,auVar11._8_8_,auVar11._0_8_);

      _objc_release(auVar11._0_8_);

      IVar9 = local_80;

    }

    else {

      local_e0 = PTR___NSConcreteStackBlock_003886f0;

      local_d8 = 0xc2000000;

      local_d0 = FUN_001800bc;

      puStack_c8 = &DAT_00389020;

      local_c0 = param_1;

      local_b0 = lVar4;

      _objc_retain(param_3);

      local_b8 = param_3;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf__O_udk7h_,0,&local_e0);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar7,auVar11._8_8_,auVar11._0_8_);

      _objc_release(auVar11._0_8_);

      IVar9 = local_b8;

    }

    _objc_release(IVar9);

    FUN_0017e440(uVar5);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    lVar8 = FUN_00297fa0();

    _objc_release(uVar10);

    if (lVar8 == 0) {

      local_140 = puVar2;

      local_138 = 0xc2000000;

      local_130 = FUN_00180190;

      puStack_128 = &DAT_003890b0;

      local_120 = param_1;

      lStack_118 = lVar4;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf__Nx,0,&local_140);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar7,auVar11._8_8_,auVar11._0_8_);

      _objc_release(auVar11._0_8_);

      local_178 = puVar2;

      local_170 = 0xc2000000;

      local_168 = FUN_001802f8;

      puStack_160 = &DAT_00389020;

      _objc_retain(pcVar1);

      local_158 = pcVar1;

      local_150 = param_1;

      lStack_148 = lVar4;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf__TT,0,&local_178);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar7,auVar11._8_8_,auVar11._0_8_);

      _objc_release(auVar11._0_8_);

      local_1b0 = puVar2;

      local_1a8 = 0xc2000000;

      local_1a0 = FUN_0018068c;

      puStack_198 = &DAT_00388c90;

      _objc_retain(uVar5);

      local_190 = uVar5;

      _objc_retain(pcVar1);

      local_188 = pcVar1;

      IStack_180 = param_1;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf_Y6R_Ne7h_,0,&local_1b0);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar7,auVar11._8_8_,auVar11._0_8_);

      _objc_release(auVar11._0_8_);

      _objc_release(local_188);

      _objc_release(local_190);

      pcVar6 = local_158;

    }

    else {

      local_110 = puVar2;

      local_108 = 0xc2000000;

      local_100 = FUN_00180184;

      puStack_f8 = &DAT_003890b0;

      local_f0 = param_1;

      lStack_e8 = lVar4;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf__Mn_,0,&local_110);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar7,auVar11._8_8_,auVar11._0_8_);

      pcVar6 = auVar11._0_8_;

    }

    _objc_release(pcVar6);

    local_1e0 = puVar2;

    local_1d8 = 0xc2000000;

    local_1d0 = FUN_001807ac;

    puStack_1c8 = &DAT_003890b0;

    local_1c0 = param_1;

    lStack_1b8 = lVar4;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf_Rd,2,&local_1e0);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar11._8_8_,auVar11._0_8_);

    _objc_release(auVar11._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_07,&cf_Sm,1,0);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar7,auVar11._8_8_,auVar11._0_8_);

    _objc_release(auVar11._0_8_);

    FUN_0029a500(param_1,extraout_x1_08,uVar7,1,0);

    _objc_release(uVar7);

    _objc_release(pcVar1);

    _objc_release(uVar5);

  }

  _objc_release(uVar3);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




