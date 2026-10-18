// tableView:cellForRowAtIndexPath: @0x17f5e0


/* Function Stack Size: 0x20 bytes */



ID CadisCustomStyleListViewController::tableView_cellForRowAtIndexPath_

             (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  cfstringStruct *pcVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  cfstringStruct *pcVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  ID IVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  

  _objc_retain(param_4);

  FUN_002943e0(param_3,extraout_x1,&cf_cell);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    auVar11 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

    lVar3 = FUN_00296ec0(auVar11._0_8_,auVar11._8_8_,1,&cf_cell);

  }

  FUN_00167d7c();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  lVar5 = FUN_00293860();

  if (lVar5 == 0) {

    FUN_002a50e0(lVar3);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar11._0_8_,auVar11._8_8_,&cf_fe_IN7h_);

    _objc_release(auVar11._0_8_);

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a50e0(lVar3);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(auVar11._0_8_,auVar11._8_8_,uVar9);

    _objc_release(auVar11._0_8_);

    _objc_release(uVar9);

    FUN_002944a0(lVar3);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar11._0_8_,auVar11._8_8_,&::cf___);

    _objc_release(auVar11._0_8_);

    FUN_0029c800(lVar3,extraout_x1_03,0);

    FUN_002a12c0(lVar3,extraout_x1_04,0);

  }

  else {

    auVar11 = FUN_0029bae0(param_4);

    FUN_00299500(uVar4,auVar11._8_8_,auVar11._0_8_);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar11._0_8_;

    FUN_00299540(uVar9,auVar11._8_8_,&cf_name);

    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    FUN_002a50e0(lVar3);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf__g_TT;

    if (pcVar6 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar6;

    }

    FUN_002a1d60(auVar11._0_8_,auVar11._8_8_,pcVar1);

    _objc_release(auVar11._0_8_);

    _objc_release(pcVar6);

    FUN_00297c40(&_OBJC_CLASS___UIColor);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a50e0(lVar3);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(auVar11._0_8_,auVar11._8_8_,uVar7);

    _objc_release(auVar11._0_8_);

    _objc_release(uVar7);

    lVar8 = FUN_00138258();

    auVar11 = FUN_0029bae0(param_4);

    FUN_00299540(uVar9,auVar11._8_8_,&cf_type);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_00297820(auVar12._0_8_,auVar12._8_8_,&cf_html);

    lVar5 = auVar11._0_8_ + 10;

    pcVar1 = &cf_HTML_CSS;

    if (iVar2 == 0) {

      pcVar1 = &cf_JS;

    }

    _objc_retain(pcVar1);

    _objc_release(auVar12._0_8_);

    pcVar6 = pcVar1;

    if (lVar8 == lVar5) {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf__O_u_N);

      pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    }

    FUN_002944a0(lVar3);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar11._0_8_,auVar11._8_8_,pcVar6);

    _objc_release(auVar11._0_8_);

    if (lVar8 == lVar5) {

      _objc_release(pcVar6);

    }

    FUN_002a4b80(&_OBJC_CLASS___UIColor);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(lVar3);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(auVar11._0_8_,auVar11._8_8_,uVar7);

    _objc_release(auVar11._0_8_);

    _objc_release(uVar7);

    FUN_0029c800(lVar3,extraout_x1_01,1);

    FUN_002a12c0(lVar3,extraout_x1_02,3);

    _objc_release(pcVar1);

    _objc_release(uVar9);

  }

  _objc_release(uVar4);

  _objc_release(param_4);

  IVar10 = _objc_autoreleaseReturnValue(lVar3);

  return IVar10;

}




