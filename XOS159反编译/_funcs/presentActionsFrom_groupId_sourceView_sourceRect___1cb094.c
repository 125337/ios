// presentActionsFrom:groupId:sourceView:sourceRect: @0x1cb094


/* Function Stack Size: 0x48 bytes */



void XZYCLGDividerGestureTarget::presentActionsFrom_groupId_sourceView_sourceRect_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,CGRect param_6)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  int iVar3;

  int iVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar8;

  ID IVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  ulong extraout_x1;

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

  undefined8 extraout_x1_12;

  double dVar12;

  double dVar13;

  double dVar14;

  double dVar15;

  undefined1 auVar16 [16];

  undefined *local_240;

  undefined8 local_238;

  code *local_230;

  undefined *puStack_228;

  ID local_220;

  undefined *local_218;

  undefined8 local_210;

  code *local_208;

  undefined *puStack_200;

  ID local_1f8;

  undefined *local_1f0;

  undefined8 local_1e8;

  code *local_1e0;

  undefined *puStack_1d8;

  ID local_1d0;

  ID local_1c8;

  ID local_1c0;

  undefined *local_1b8;

  undefined8 local_1b0;

  code *local_1a8;

  undefined *puStack_1a0;

  ID local_198;

  undefined *local_190;

  undefined8 local_188;

  code *local_180;

  undefined *puStack_178;

  ID local_170;

  ID local_168;

  undefined *local_160;

  undefined8 local_158;

  code *local_150;

  undefined *puStack_148;

  ID local_140;

  ID local_138;

  ID local_130;

  undefined8 local_128;

  undefined *local_120;

  undefined8 local_118;

  code *local_110;

  undefined *puStack_108;

  ID local_100;

  ID local_f8;

  ID local_f0;

  undefined8 local_e8;

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  ID local_c0;

  ID local_b8;

  ID local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 uVar7;

  

  dVar14 = param_6.field1_0x10.field1_0x8;

  dVar15 = param_6.field1_0x10.field0_0x0;

  dVar13 = param_6.field0_0x0.field1_0x8;

  dVar12 = param_6.field0_0x0.field0_0x0;

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  if ((param_3 != 0) && (lVar5 = FUN_00297fa0(param_4), lVar5 != 0)) {

    FUN_001cb9dc(param_4);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_001cbaa4(param_4);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar16._0_8_;

    FUN_00299540(DAT_003eaa00,auVar16._8_8_,param_4);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_retain(param_4);

    uVar8 = _objc_opt_class(&_OBJC_CLASS___NSString);

    auVar16 = _objc_opt_isKindOfClass(param_4,uVar8);

    if ((auVar16._0_8_ & 1) == 0) {

      iVar3 = 0;

    }

    else {

      iVar3 = FUN_00295f60(param_4,auVar16._8_8_,&cf_c_);

    }

    _objc_release(param_4);

    if (lVar5 == 0) {

      auVar16._8_8_ = 0;

      auVar16._0_8_ = extraout_x1;

      auVar16 = auVar16 << 0x40;

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_T_);

      auVar16 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar16._8_8_,uVar6,auVar16._0_8_,0);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 != 0) {

      _objc_release(auVar16._0_8_);

    }

    puVar2 = PTR___NSConcreteStackBlock_003886f0;

    local_e0 = PTR___NSConcreteStackBlock_003886f0;

    local_d8 = 0xc2000000;

    local_d0 = FUN_001cbc64;

    puStack_c8 = &DAT_00389340;

    local_c0 = param_1;

    _objc_retain(param_3);

    local_b8 = param_3;

    _objc_retain(param_4);

    local_b0 = param_4;

    _objc_retain(uVar6);

    local_a8 = uVar6;

    _objc_retain(uVar7);

    local_a0 = uVar7;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf__TT,0,&local_e0);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar16._8_8_,auVar16._0_8_);

    _objc_release(auVar16._0_8_);

    local_120 = puVar2;

    local_118 = 0xc2000000;

    local_110 = FUN_001cbc78;

    puStack_108 = &DAT_00388cc0;

    local_100 = param_1;

    _objc_retain(param_3);

    local_f8 = param_3;

    _objc_retain(param_4);

    local_f0 = param_4;

    _objc_retain(uVar6);

    local_e8 = uVar6;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_n_Vh,0,&local_120);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar16._8_8_,auVar16._0_8_);

    _objc_release(auVar16._0_8_);

    local_160 = puVar2;

    local_158 = 0xc2000000;

    local_150 = FUN_001cbc88;

    puStack_148 = &DAT_00388cc0;

    local_140 = param_1;

    _objc_retain(param_3);

    local_138 = param_3;

    _objc_retain(param_4);

    local_130 = param_4;

    _objc_retain(uVar6);

    local_128 = uVar6;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_teY,0,&local_160);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar16._8_8_,auVar16._0_8_);

    _objc_release(auVar16._0_8_);

    local_190 = puVar2;

    local_188 = 0xc2000000;

    local_180 = FUN_001cbc98;

    puStack_178 = &DAT_00388d20;

    local_170 = param_1;

    _objc_retain(param_3);

    local_168 = param_3;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_teR_z_,0,&local_190);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar16._8_8_,auVar16._0_8_);

    _objc_release(auVar16._0_8_);

    iVar4 = FUN_001cbca4(param_4);

    pcVar1 = &cf_U_;

    if (iVar4 == 0) {

      pcVar1 = &cf_bSR_;

    }

    local_1b8 = puVar2;

    local_1b0 = 0xc2000000;

    local_1a8 = FUN_001cbd08;

    puStack_1a0 = &DAT_00388cf0;

    _objc_retain(param_4);

    local_198 = param_4;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,pcVar1,0,&local_1b8);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar16._8_8_,auVar16._0_8_);

    _objc_release(auVar16._0_8_);

    if (iVar3 == 0) {

      uVar10 = extraout_x1_05;

      if (lVar5 != 0) {

        local_240 = puVar2;

        local_238 = 0xc2000000;

        local_230 = FUN_001cc14c;

        puStack_228 = &DAT_00388cf0;

        _objc_retain(param_4);

        local_220 = param_4;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_09,&cf_b_YT,2,&local_240);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar8,auVar16._8_8_,auVar16._0_8_);

        _objc_release(auVar16._0_8_);

        _objc_release(local_220);

        uVar10 = extraout_x1_10;

      }

    }

    else {

      local_1f0 = puVar2;

      local_1e8 = 0xc2000000;

      local_1e0 = FUN_001cbdcc;

      puStack_1d8 = &DAT_00388c90;

      local_1d0 = param_1;

      _objc_retain(param_3);

      local_1c8 = param_3;

      _objc_retain(param_4);

      local_1c0 = param_4;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf__bXT,0,&local_1f0);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar8,auVar16._8_8_,auVar16._0_8_);

      _objc_release(auVar16._0_8_);

      local_218 = puVar2;

      local_210 = 0xc2000000;

      local_208 = FUN_001cbddc;

      puStack_200 = &DAT_00388cf0;

      _objc_retain(param_4);

      local_1f8 = param_4;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_07,&cf_Rd_INR_,2,&local_218);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar8,auVar16._8_8_,auVar16._0_8_);

      _objc_release(auVar16._0_8_);

      _objc_release(local_1f8);

      _objc_release(local_1c0);

      _objc_release(local_1c8);

      uVar10 = extraout_x1_08;

    }

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar10,&cf_Sm,1,0);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar16._8_8_,auVar16._0_8_);

    _objc_release(auVar16._0_8_);

    IVar9 = param_5;

    if (param_5 == 0) {

      FUN_002a6220(param_3);

      IVar9 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0029a0a0(uVar8);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    uVar10 = auVar16._0_8_;

    FUN_002a1740(uVar10,auVar16._8_8_,IVar9);

    _objc_release(uVar10);

    if (param_5 == 0) {

      _objc_release(IVar9);

      FUN_002a6220(param_3);

      IVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      dVar12 = (double)_CGRectGetMidX();

      FUN_002a6220(param_3);

      uVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      dVar13 = (double)_CGRectGetMidY();

      dVar14 = 1.0;

      dVar15 = 1.0;

    }

    FUN_0029a0a0(uVar8);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(dVar12,dVar13,dVar15,dVar14);

    _objc_release(uVar11);

    uVar11 = extraout_x1_11;

    if (param_5 == 0) {

      _objc_release(uVar10);

      _objc_release(IVar9);

      uVar11 = extraout_x1_12;

    }

    FUN_0029a500(param_3,uVar11,uVar8,1,0);

    _objc_release(local_198);

    _objc_release(local_168);

    _objc_release(local_128);

    _objc_release(local_130);

    _objc_release(local_138);

    _objc_release(local_e8);

    _objc_release(local_f0);

    _objc_release(local_f8);

    _objc_release(local_a0);

    _objc_release(local_a8);

    _objc_release(local_b0);

    _objc_release(local_b8);

    _objc_release(uVar8);

    _objc_release(uVar7);

    _objc_release(uVar6);

  }

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




