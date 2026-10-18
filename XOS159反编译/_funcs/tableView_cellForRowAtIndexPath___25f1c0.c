// tableView:cellForRowAtIndexPath: @0x25f1c0


/* Function Stack Size: 0x20 bytes */



ID XZYHomeDockCustomStyleListController::tableView_cellForRowAtIndexPath_

             (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  long lVar1;

  cfstringStruct *pcVar2;

  int iVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  cfstringStruct *pcVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  ID IVar11;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  

  _objc_retain(param_4);

  FUN_002943e0(param_3,extraout_x1,&cf_dockCustomStyleCell);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

    auVar12 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

    lVar4 = FUN_00296ec0(auVar12._0_8_,auVar12._8_8_,1,&cf_dockCustomStyleCell);

  }

  FUN_0024d85c();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_00293860();

  if (lVar6 == 0) {

    FUN_002a50e0(lVar4);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar12._0_8_,auVar12._8_8_,&cf_fe_IN7h_);

    _objc_release(auVar12._0_8_);

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a50e0(lVar4);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(auVar12._0_8_,auVar12._8_8_,uVar9);

    _objc_release(auVar12._0_8_);

    _objc_release(uVar9);

    FUN_002944a0(lVar4);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar12._0_8_,auVar12._8_8_,&::cf___);

    _objc_release(auVar12._0_8_);

    FUN_0029c800(lVar4,extraout_x1_01,0);

    FUN_002a12c0(lVar4,extraout_x1_02,0);

  }

  else {

    auVar12 = FUN_0029bae0(param_4);

    FUN_00299500(uVar5,auVar12._8_8_,auVar12._0_8_);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar12._0_8_;

    FUN_00299540(uVar9,auVar12._8_8_,&cf_name);

    pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    FUN_002a50e0(lVar4);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    pcVar2 = &cf__g_TT;

    if (pcVar7 != (cfstringStruct *)0x0) {

      pcVar2 = pcVar7;

    }

    FUN_002a1d60(auVar12._0_8_,auVar12._8_8_,pcVar2);

    _objc_release(auVar12._0_8_);

    _objc_release(pcVar7);

    FUN_00297c40(&_OBJC_CLASS___UIColor);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a50e0(lVar4);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(auVar12._0_8_,auVar12._8_8_,uVar8);

    _objc_release(auVar12._0_8_);

    _objc_release(uVar8);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    lVar6 = FUN_00297480(auVar12._0_8_,auVar12._8_8_,&cf_xzyHomeBottomBarStyleMode);

    auVar13 = FUN_0029bae0(param_4);

    FUN_00299540(uVar9,auVar13._8_8_,&cf_type);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    iVar3 = FUN_00297820(auVar14._0_8_,auVar14._8_8_,&cf_html);

    pcVar2 = &cf_HTML_CSS;

    if (iVar3 == 0) {

      pcVar2 = &cf_JS;

    }

    _objc_retain(pcVar2);

    _objc_release(auVar14._0_8_);

    FUN_00294800(param_1,extraout_x1_00,uVar9);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00294820(param_1,auVar14._8_8_,uVar9);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    auVar15 = FUN_00297fa0();

    if (auVar15._0_8_ == 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar15._8_8_,&::cf__);

      auVar15 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar15._8_8_,&::cf__);

      auVar15 = _objc_retainAutoreleasedReturnValue();

    }

    lVar1 = auVar13._0_8_ + 100;

    uVar10 = auVar15._0_8_;

    if (lVar6 == lVar1) {

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar15._8_8_,&cf__O_u_N);

      uVar10 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_002944a0(lVar4);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar13._0_8_,auVar13._8_8_,uVar10);

    _objc_release(auVar13._0_8_);

    if (lVar6 == lVar1) {

      _objc_release(uVar10);

    }

    FUN_002a4b80(&_OBJC_CLASS___UIColor);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(lVar4);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(auVar13._0_8_,auVar13._8_8_,uVar10);

    _objc_release(auVar13._0_8_);

    _objc_release(uVar10);

    FUN_0029c800(lVar4,extraout_x1_03,1);

    FUN_002a12c0(lVar4,extraout_x1_04,3);

    _objc_release(auVar15._0_8_);

    _objc_release(uVar8);

    _objc_release(auVar14._0_8_);

    _objc_release(pcVar2);

    _objc_release(auVar12._0_8_);

    _objc_release(uVar9);

  }

  _objc_release(uVar5);

  _objc_release(param_4);

  IVar11 = _objc_autoreleaseReturnValue(lVar4);

  return IVar11;

}




