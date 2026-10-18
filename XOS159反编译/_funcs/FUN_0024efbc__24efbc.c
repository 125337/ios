// FUN_0024efbc @0x24efbc


void FUN_0024efbc(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4,

                 undefined8 param_5,undefined8 param_6)



{

  cfstringStruct *pcVar1;

  int iVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  ulong uVar9;

  long lVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  long lVar11;

  double dVar12;

  double dVar13;

  double dVar14;

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  

  _objc_retain(param_5);

  _objc_retain(param_6);

  FUN_0024da68(param_4);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  lVar3 = auVar15._0_8_;

  if (lVar3 == 0) goto LAB_0024f5e8;

  FUN_00299540(lVar3,auVar15._8_8_,&cf_code);

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  FUN_00299540(lVar3,extraout_x1,&cf_type);

  pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar4 = &cf_js;

  if (pcVar5 != (cfstringStruct *)0x0) {

    pcVar4 = pcVar5;

  }

  _objc_retain(pcVar4);

  _objc_release(pcVar5);

  _objc_setAssociatedObject(param_5,&PTR_cf_xzyDockJSCodeAssocKey_003e73b0,pcVar1,1);

  _objc_setAssociatedObject(param_5,"xzyDockStyleType",pcVar4,1);

  iVar2 = FUN_00297820(pcVar4,extraout_x1_00,&cf_html);

  if (iVar2 != 0) {

    FUN_002925a0(param_5);

    dVar12 = (double)_CGRectGetWidth();

    FUN_002925a0(param_5);

    dVar13 = (double)_CGRectGetHeight();

    if (dVar12 <= 0.0) {

      FUN_002925a0(param_6);

      dVar12 = (double)_CGRectGetWidth();

    }

    if (dVar12 <= 0.0) {

      FUN_002987e0(&_OBJC_CLASS___UIScreen);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002925a0();

      _objc_release(uVar6);

      dVar12 = param_3;

    }

    dVar14 = 80.0;

    if (DAT_003eb428 == '\0') {

      dVar14 = 98.0;

    }

    if (dVar13 <= 0.0) {

      dVar13 = dVar14;

    }

    dVar14 = (double)FUN_0024e9d0(lVar3);

    FUN_00297be0(param_6);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    lVar7 = FUN_00293860();

    _objc_release(uVar6);

    if (3 < lVar7) {

      lVar7 = 4;

    }

    FUN_002318f4(param_6);

    lVar8 = _objc_retainAutoreleasedReturnValue();

    if (lVar8 == 0) {

      uVar6 = 0;

    }

    else {

      uVar6 = FUN_0029c2c0();

    }

    auVar15 = FUN_002365b0();

    if (DAT_003eb328 == 0) {

LAB_0024f3ec:

      FUN_0024f700(dVar12,dVar13,dVar14,pcVar1,lVar7,uVar6,auVar15._0_8_,param_6);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      lVar11 = auVar16._0_8_;

      FUN_002a1c80(lVar11,auVar16._8_8_,0x185d8);

      FUN_00291380(param_5,extraout_x1_05,lVar11);

      FUN_00292dc0(&_OBJC_CLASS___UIColor);

      auVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(param_5,auVar16._8_8_,auVar16._0_8_);

      _objc_release(auVar16._0_8_);

      FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_06,uVar6);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,&PTR_cf_xzyDockLastSelIdxAssocKey_003e7378,uVar6,1);

      _objc_release(uVar6);

      FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_07,auVar15._0_8_);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,&PTR_cf_xzyDockLastDarkAssocKey_003e7380,uVar6,1);

      _objc_release(uVar6);

      FUN_002993a0(dVar12,&_OBJC_CLASS___NSNumber);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,&PTR_cf_xzyDockLastHTMLWAssocKey_003e73a0,uVar6,1);

      _objc_release(uVar6);

      FUN_002993a0(dVar13,&_OBJC_CLASS___NSNumber);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,&PTR_cf_xzyDockLastHTMLHAssocKey_003e73a8,uVar6,1);

      _objc_release(uVar6);

      FUN_002993a0(dVar14,&_OBJC_CLASS___NSNumber);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,&PTR_cf_xzyDockLastOverflowTopAssocKey_003e73c0,uVar6,1);

      _objc_release(uVar6);

      _objc_retain(lVar11);

      lVar7 = DAT_003eb328;

      DAT_003eb328 = lVar11;

      _objc_release(lVar7);

      lVar10 = FUN_002937a0(pcVar1);

      lVar7 = DAT_003eb330;

      DAT_003eb330 = lVar10;

      _objc_release(lVar7);

      DAT_003eb338 = auVar15[0];

      DAT_003eb340 = param_4;

      DAT_003eb348 = dVar14;

    }

    else {

      if ((DAT_003eb340 != param_4) || (DAT_003eb330 == 0)) {

LAB_0024f3c4:

        FUN_0029b340(DAT_003eb328);

        lVar11 = DAT_003eb328;

        DAT_003eb328 = 0;

        _objc_release(lVar11);

        lVar11 = DAT_003eb330;

        DAT_003eb330 = 0;

        _objc_release(lVar11);

        goto LAB_0024f3ec;

      }

      uVar9 = FUN_00297820(DAT_003eb330,auVar15._8_8_,pcVar1);

      lVar11 = DAT_003eb328;

      if (((uVar9 & 1) == 0) || (0.5 < ABS(DAT_003eb348 - dVar14))) {

        if (DAT_003eb328 == 0) goto LAB_0024f3ec;

        goto LAB_0024f3c4;

      }

      _objc_retain(DAT_003eb328);

      FUN_002a1c80(lVar11,extraout_x1_01,0x185d8);

      FUN_0029e5e0(0,-dVar14,dVar12,dVar14 + dVar13,lVar11);

      FUN_00291380(param_5,extraout_x1_02,lVar11);

      FUN_00292dc0(&_OBJC_CLASS___UIColor);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(param_5,auVar15._8_8_,auVar15._0_8_);

      _objc_release(auVar15._0_8_);

      FUN_00299400(&_OBJC_CLASS___NSNumber,extraout_x1_03,uVar6);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,&PTR_cf_xzyDockLastSelIdxAssocKey_003e7378,uVar6,1);

      _objc_release(uVar6);

      FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_04,DAT_003eb338);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,&PTR_cf_xzyDockLastDarkAssocKey_003e7380,uVar6,1);

      _objc_release(uVar6);

      FUN_002993a0(dVar12,&_OBJC_CLASS___NSNumber);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,&PTR_cf_xzyDockLastHTMLWAssocKey_003e73a0,uVar6,1);

      _objc_release(uVar6);

      FUN_002993a0(dVar13,&_OBJC_CLASS___NSNumber);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,&PTR_cf_xzyDockLastHTMLHAssocKey_003e73a8,uVar6,1);

      _objc_release(uVar6);

      FUN_002993a0(dVar14,&_OBJC_CLASS___NSNumber);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,&PTR_cf_xzyDockLastOverflowTopAssocKey_003e73c0,uVar6,1);

      _objc_release(uVar6);

    }

    _objc_release(lVar11);

    _objc_release(lVar8);

  }

  _objc_release(pcVar4);

  _objc_release(pcVar1);

LAB_0024f5e8:

  _objc_release(lVar3);

  _objc_release(param_6);

  _objc_release(param_5);

  return;

}




