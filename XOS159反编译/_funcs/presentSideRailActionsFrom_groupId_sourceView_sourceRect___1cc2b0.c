// presentSideRailActionsFrom:groupId:sourceView:sourceRect: @0x1cc2b0


/* Function Stack Size: 0x48 bytes */



void XZYCLGDividerGestureTarget::presentSideRailActionsFrom_groupId_sourceView_sourceRect_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,CGRect param_6)



{

  undefined8 uVar1;

  undefined *puVar2;

  bool bVar3;

  int iVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  ID IVar9;

  undefined8 uVar10;

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

  cfstringStruct *pcVar11;

  undefined **ppuVar12;

  double dVar13;

  double dVar14;

  double dVar15;

  double dVar16;

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined *local_1e0;

  undefined8 local_1d8;

  code *local_1d0;

  undefined *puStack_1c8;

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

  

  dVar15 = param_6.field1_0x10.field1_0x8;

  dVar16 = param_6.field1_0x10.field0_0x0;

  dVar14 = param_6.field0_0x0.field1_0x8;

  dVar13 = param_6.field0_0x0.field0_0x0;

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  if ((param_3 != 0) && (lVar5 = FUN_00297fa0(param_4), lVar5 != 0)) {

    FUN_001ccaf0(param_4);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_001cbaa4(param_4);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_retain(param_4);

    auVar17 = FUN_00297fa0(param_4);

    bVar3 = false;

    if ((auVar17._0_8_ != 0) && (DAT_003eaa08 != 0)) {

      FUN_00299540(DAT_003eaa08,auVar17._8_8_,param_4);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      bVar3 = lVar5 != 0;

      _objc_release();

    }

    _objc_release(param_4);

    lVar5 = FUN_00297fa0(uVar6);

    uVar1 = uVar7;

    if (lVar5 != 0) {

      uVar1 = uVar6;

    }

    _objc_retain(uVar1);

    if (bVar3) {

      auVar17 = FUN_00297fa0(uVar6);

      if (auVar17._0_8_ == 0) {

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar17._8_8_,&cf_OhTy_NzzT_);

        auVar17 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar17._8_8_,&cf_T_);

        auVar17 = _objc_retainAutoreleasedReturnValue();

      }

    }

    else {

      auVar17._8_8_ = 0;

      auVar17._0_8_ = extraout_x1;

      auVar17 = auVar17 << 0x40;

    }

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar17._8_8_,uVar1,auVar17._0_8_,0);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    puVar2 = PTR___NSConcreteStackBlock_003886f0;

    ppuVar12 = &PTR_s_setTrackingHighlight__003e2000;

    local_e0 = PTR___NSConcreteStackBlock_003886f0;

    local_d8 = 0xc2000000;

    local_d0 = FUN_001ccbd4;

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

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

    local_120 = puVar2;

    local_118 = 0xc2000000;

    local_110 = FUN_001ccbe8;

    puStack_108 = &DAT_00388cc0;

    local_100 = param_1;

    _objc_retain(param_3);

    local_f8 = param_3;

    _objc_retain(param_4);

    local_f0 = param_4;

    _objc_retain(uVar6);

    local_e8 = uVar6;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_n_Vh,0,&local_120);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

    local_160 = puVar2;

    local_158 = 0xc2000000;

    local_150 = FUN_001ccbf8;

    puStack_148 = &DAT_00388cc0;

    local_140 = param_1;

    _objc_retain(param_3);

    local_138 = param_3;

    _objc_retain(param_4);

    local_130 = param_4;

    _objc_retain(uVar6);

    local_128 = uVar6;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_teY,0,&local_160);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

    local_190 = puVar2;

    local_188 = 0xc2000000;

    local_180 = FUN_001ccc08;

    puStack_178 = &DAT_00388d20;

    local_170 = param_1;

    _objc_retain(param_3);

    local_168 = param_3;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_teR_z_,0,&local_190);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

    pcVar11 = &cf_U_;

    if (DAT_003eaac8 == 6) {

      iVar4 = FUN_001cbca4(param_4);

      if (iVar4 == 0) {

        pcVar11 = &cf_6ewR_;

      }

    }

    local_1b8 = puVar2;

    local_1b0 = 0xc2000000;

    local_1a8 = FUN_001ccc14;

    puStack_1a0 = &DAT_00388cf0;

    _objc_retain(param_4);

    local_198 = param_4;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,pcVar11,0,&local_1b8);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

    local_1e0 = puVar2;

    local_1d8 = 0xc2000000;

    local_1d0 = FUN_001ccc68;

    puStack_1c8 = &DAT_00388cf0;

    _objc_retain(param_4);

    local_1c0 = param_4;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf_b_YT,2,&local_1e0);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf_Sm,1,0);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar8,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

    IVar9 = param_5;

    if (param_5 == 0) {

      FUN_002a6220(param_3);

      IVar9 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0029a0a0(uVar8);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar18._0_8_,auVar18._8_8_,IVar9);

    _objc_release(auVar18._0_8_);

    if (param_5 == 0) {

      _objc_release(IVar9);

      FUN_002a6220(param_3);

      ppuVar12 = (undefined **)_objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      dVar13 = (double)_CGRectGetMidX();

      FUN_002a6220(param_3);

      IVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      dVar14 = (double)_CGRectGetMidY();

      dVar15 = 1.0;

      dVar16 = 1.0;

    }

    FUN_0029a0a0(uVar8);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(dVar13,dVar14,dVar16,dVar15);

    _objc_release(uVar10);

    uVar10 = extraout_x1_07;

    if (param_5 == 0) {

      _objc_release(IVar9);

      _objc_release(ppuVar12);

      uVar10 = extraout_x1_08;

    }

    FUN_0029a500(param_3,uVar10,uVar8,1,0);

    _objc_release(local_1c0);

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

    _objc_release(auVar17._0_8_);

    _objc_release(uVar1);

    _objc_release(uVar7);

    _objc_release(uVar6);

  }

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




