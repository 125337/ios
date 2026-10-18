// showDownloadResult:message:button: @0x560b0


/* Function Stack Size: 0x24 bytes */



void _0x2f19de29::showDownloadResult_message_button_

               (ID param_1,SEL param_2,bool param_3,ID param_4,ID param_5)



{

  cfstringStruct *pcVar1;

  bool bVar2;

  uint uVar3;

  undefined8 uVar4;

  cfstringStruct *pcVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  ulong uVar8;

  undefined8 uVar9;

  long lVar10;

  undefined8 uVar11;

  ID IVar12;

  ID IVar13;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  cfstringStruct *pcVar14;

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined1 auVar19 [16];

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  long local_68;

  

  _objc_retain(param_4);

  _objc_retain(param_5);

  FUN_0029e0c0(param_5,extraout_x1,1);

  _objc_getAssociatedObject(param_5,"bubbleData");

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar15._0_8_;

  FUN_00299540(uVar4,auVar15._8_8_,&cf_bubble_name);

  pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &::cf___;

  if (pcVar5 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar5;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar5);

  FUN_00299540(uVar4,extraout_x1_00,&cf_is_card);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_002924e0();

  _objc_release(uVar6);

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  auVar15 = _objc_retainAutoreleasedReturnValue();

  pcVar5 = &cf_CoverRes_Cards;

  if (uVar3 == 0) {

    pcVar5 = &cf_CoverRes_Bubbles;

  }

  FUN_002a4460(auVar15._0_8_,auVar15._8_8_,pcVar5);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar16._0_8_,auVar16._8_8_,pcVar1);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar17._0_8_,auVar17._8_8_,&cf_theme_xos);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  auVar18 = FUN_00297fa0(pcVar1);

  uVar9 = auVar18._8_8_;

  if (auVar18._0_8_ == 0) {

    pcVar5 = &cf_N_;

    pcVar14 = &cf_N_;

    if ((uVar3 & 1) == 0) goto LAB_00056368;

    bVar2 = false;

LAB_000563c8:

    FUN_002a1f80(param_5,uVar9,pcVar5,0);

    if (bVar2) {

      FUN_002a4b80();

      auVar18 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_002a4a80(&_OBJC_CLASS___UIColor);

      auVar18 = _objc_retainAutoreleasedReturnValue();

    }

    uVar9 = auVar18._0_8_;

    FUN_0029cf60(param_5,auVar18._8_8_,uVar9);

  }

  else {

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    uVar8 = FUN_00295160(auVar18._0_8_,auVar18._8_8_,uVar7);

    _objc_release(auVar18._0_8_);

    uVar9 = extraout_x1_01;

    if ((uVar3 & 1) != 0) {

      if ((uVar8 & 1) == 0) {

        bVar2 = false;

        pcVar5 = &cf_N_;

        goto LAB_000563c8;

      }

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf_aSGr_);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      lVar10 = FUN_00138258();

      if (lVar10 < 10) {

LAB_000563b4:

        _objc_release(uVar9);

        uVar9 = extraout_x1_04;

      }

      else {

        FUN_00167d7c();

        uVar11 = _objc_retainAutoreleasedReturnValue();

        auVar18 = FUN_00293860();

        if (auVar18._0_8_ <= lVar10 + -10) {

          _objc_release(uVar11);

          goto LAB_000563b4;

        }

        FUN_00299500(uVar11,auVar18._8_8_,lVar10 + -10);

        auVar18 = _objc_retainAutoreleasedReturnValue();

        FUN_00299540(auVar18._0_8_,auVar18._8_8_,&cf_name);

        auVar19 = _objc_retainAutoreleasedReturnValue();

        uVar3 = FUN_00297820(auVar19._0_8_,auVar19._8_8_,uVar9);

        _objc_release(auVar19._0_8_);

        _objc_release(auVar18._0_8_);

        _objc_release(uVar11);

        _objc_release(uVar9);

        uVar9 = extraout_x1_02;

        if ((uVar3 & 1) != 0) {

          FUN_002a1f80(param_5,extraout_x1_02,&cf_ck_W_O_u,0);

          FUN_002a4b60(&_OBJC_CLASS___UIColor);

          auVar18 = _objc_retainAutoreleasedReturnValue();

          FUN_0029cf60(param_5,auVar18._8_8_,auVar18._0_8_);

          _objc_release(auVar18._0_8_);

          FUN_0029e0c0(param_5,extraout_x1_03,0);

          goto LAB_0005641c;

        }

      }

      pcVar5 = &cf___u0ReS;

      bVar2 = true;

      goto LAB_000563c8;

    }

    pcVar14 = &cf_fbcll;

    if ((uVar8 & 1) == 0) {

      pcVar14 = &cf_N_;

    }

LAB_00056368:

    FUN_002a1f80(param_5,uVar9,pcVar14,0);

    FUN_002a4a80(&_OBJC_CLASS___UIColor);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    uVar9 = auVar18._0_8_;

    FUN_0029cf60(param_5,auVar18._8_8_,uVar9);

  }

  _objc_release(uVar9);

LAB_0005641c:

  _objc_getAssociatedObject(param_5,"downloadVC");

  auVar18 = _objc_retainAutoreleasedReturnValue();

  IVar12 = auVar18._0_8_;

  if (IVar12 == 0) {

    auVar19._8_8_ = 0;

    auVar19._0_8_ = auVar18._8_8_;

    auVar18 = auVar19 << 0x40;

  }

  else {

    _objc_getAssociatedObject(IVar12,"bubbleCollectionView");

    auVar18 = _objc_retainAutoreleasedReturnValue();

    lVar10 = auVar18._0_8_;

    if (lVar10 != 0) {

      local_88 = PTR___NSConcreteStackBlock_003886f0;

      local_80 = 0xc2000000;

      local_78 = FUN_00056774;

      puStack_70 = &DAT_00388e60;

      _objc_retain(lVar10);

      local_68 = lVar10;

      FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1_05,&local_88);

      _objc_release(local_68);

      auVar18._8_8_ = extraout_x1_06;

      auVar18._0_8_ = lVar10;

    }

  }

  pcVar5 = &cf_N_bR;

  if (param_3 == 0) {

    pcVar5 = &cf_N_1Y_;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar18._8_8_,pcVar5,param_4,1);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  uVar9 = auVar19._0_8_;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar19._8_8_,&cf_nx_,0,0);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar9,auVar19._8_8_,auVar19._0_8_);

  _objc_release(auVar19._0_8_);

  if (IVar12 != 0) {

    param_1 = IVar12;

  }

  _objc_retain(param_1);

  if (param_1 != 0) {

    while( true ) {

      FUN_0029a560(param_1);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar10 == 0) break;

      FUN_0029a560(param_1);

      IVar13 = _objc_retainAutoreleasedReturnValue();

      _objc_release(param_1);

      param_1 = IVar13;

    }

    FUN_0029a500(param_1,extraout_x1_07,uVar9,1,0);

  }

  _objc_release(param_1);

  _objc_release(uVar9);

  _objc_release(auVar18._0_8_);

  _objc_release(IVar12);

  _objc_release(uVar7);

  _objc_release(auVar17._0_8_);

  _objc_release(auVar16._0_8_);

  _objc_release(auVar15._0_8_);

  _objc_release(uVar6);

  _objc_release(pcVar1);

  _objc_release(uVar4);

  _objc_release(param_5);

  _objc_release(param_4);

  return;

}




