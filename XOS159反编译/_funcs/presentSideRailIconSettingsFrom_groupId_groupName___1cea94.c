// presentSideRailIconSettingsFrom:groupId:groupName: @0x1cea94


/* Function Stack Size: 0x28 bytes */



void XZYCLGDividerGestureTarget::presentSideRailIconSettingsFrom_groupId_groupName_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  uint uVar3;

  long lVar4;

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined1 auVar15 [16];

  undefined *local_150;

  undefined8 local_148;

  code *local_140;

  undefined *puStack_138;

  ID local_130;

  undefined1 local_128;

  undefined *local_120;

  undefined8 local_118;

  code *local_110;

  undefined *puStack_108;

  ID local_100;

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  ID local_d8;

  ID local_d0;

  ID local_c8;

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  ID local_a0;

  ID IStack_98;

  ID local_90;

  ID local_88;

  undefined1 local_80;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  if ((param_3 != 0) && (lVar4 = FUN_00297fa0(param_4), lVar4 != 0)) {

    auVar15 = FUN_00297fa0(param_5);

    if (auVar15._0_8_ == 0) {

      pcVar5 = &cf_n_OhVh;

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar15._8_8_,&cf_n_OhVh_);

      pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    FUN_001cf100(param_4);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    lVar4 = FUN_00297fa0();

    FUN_001cf400(param_4);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    lVar8 = FUN_00297fa0();

    uVar3 = FUN_001cf52c(param_4);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,pcVar5,&cf_NO9eOhVhNq_TRhQR_Vh0,0);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    pcVar2 = &cf__O_uVhNx;

    if (lVar8 == 0 && lVar4 == 0) {

      pcVar2 = &cf_n_VhNx;

    }

    pcVar1 = &cf__;

    if (((uint)(lVar8 != 0 && lVar4 == 0) & (uVar3 ^ 1)) == 0) {

      pcVar1 = pcVar2;

    }

    _objc_retain(pcVar1);

    local_c0 = PTR___NSConcreteStackBlock_003886f0;

    local_b8 = 0xc2000000;

    local_b0 = FUN_001cf594;

    puStack_a8 = &DAT_0038ede8;

    local_80 = lVar4 != 0;

    _objc_retain(param_4);

    local_a0 = param_4;

    IStack_98 = param_1;

    _objc_retain(param_3);

    local_90 = param_3;

    _objc_retain(param_5);

    local_88 = param_5;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,pcVar1,0,&local_c0);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar9,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    pcVar2 = &cf_fbc_INVh;

    if (uVar3 == 0) {

      pcVar2 = &cf__;

    }

    if (lVar4 == 0) {

      pcVar2 = &cf_NO_INVh;

    }

    local_f8 = PTR___NSConcreteStackBlock_003886f0;

    local_f0 = 0xc2000000;

    local_e8 = FUN_001cf82c;

    puStack_e0 = &DAT_00388c90;

    local_d8 = param_1;

    _objc_retain(param_4);

    local_d0 = param_4;

    _objc_retain(param_3);

    local_c8 = param_3;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,pcVar2,0,&local_f8);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar9,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    if (lVar4 != 0) {

      local_120 = PTR___NSConcreteStackBlock_003886f0;

      local_118 = 0xc2000000;

      local_110 = FUN_001cf8b8;

      puStack_108 = &DAT_00388cf0;

      _objc_retain(param_4);

      local_100 = param_4;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_RdOh_INVh,2,&local_120);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar9,auVar15._8_8_,auVar15._0_8_);

      _objc_release(auVar15._0_8_);

      _objc_release(local_100);

    }

    pcVar2 = &cf_>f_yVh;

    if (uVar3 == 0) {

      pcVar2 = &cf_N>f_yVh;

    }

    uVar10 = 0;

    if (uVar3 == 0) {

      uVar10 = 2;

    }

    local_150 = PTR___NSConcreteStackBlock_003886f0;

    local_148 = 0xc2000000;

    local_140 = FUN_001cf8d0;

    puStack_138 = &DAT_0038a1f0;

    _objc_retain(param_4);

    local_128 = (undefined1)uVar3;

    local_130 = param_4;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,pcVar2,uVar10,&local_150);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar9,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_Sm,1,0);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar9,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    FUN_002a6220(param_3);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a0a0(uVar9);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar15._0_8_,auVar15._8_8_,uVar10);

    _objc_release(auVar15._0_8_);

    _objc_release(uVar10);

    FUN_002a6220(param_3);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    uVar13 = _CGRectGetMidX();

    FUN_002a6220(param_3);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    uVar14 = _CGRectGetMidY();

    FUN_0029a0a0(uVar9);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(uVar13,uVar14,0x3ff0000000000000,0x3ff0000000000000);

    _objc_release(uVar12);

    _objc_release(uVar11);

    _objc_release(uVar10);

    FUN_0029a500(param_3,extraout_x1_05,uVar9,1,0);

    _objc_release(local_130);

    _objc_release(local_c8);

    _objc_release(local_d0);

    _objc_release(local_88);

    _objc_release(local_90);

    _objc_release(local_a0);

    _objc_release(pcVar1);

    _objc_release(uVar9);

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(pcVar5);

  }

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




