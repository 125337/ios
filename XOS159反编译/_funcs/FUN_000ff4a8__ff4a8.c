// FUN_000ff4a8 @0xff4a8


void FUN_000ff4a8(void)



{

  undefined8 uVar1;

  char *pcVar2;

  char *pcVar3;

  byte bVar4;

  int iVar5;

  long lVar6;

  ulong uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 uVar11;

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  

  if (DAT_003eb410 == '\x01') {

    if ((char)DAT_003e68b8 < '\0') {

      if (DAT_003e7fa8 == 0) {

        DAT_003e7fa8 = _NSClassFromString(&cf_LGLiquidGlassSettings);

        DAT_003e7fb0 = "sharedSettings";

        DAT_003e7fb8 = "enabled";

        if (DAT_003e7fa8 == 0) goto LAB_000ff5a4;

      }

      pcVar3 = DAT_003e7fb8;

      pcVar2 = DAT_003e7fb0;

      lVar8 = DAT_003e7fa8;

      uVar7 = _objc_opt_respondsToSelector(DAT_003e7fa8,DAT_003e7fb0);

      if ((uVar7 & 1) != 0) {

        _objc_msgSend(lVar8,pcVar2);

        lVar8 = _objc_retainAutoreleasedReturnValue();

        if ((lVar8 == 0) || (uVar7 = _objc_opt_respondsToSelector(lVar8,pcVar3), (uVar7 & 1) == 0))

        {

          _objc_release(lVar8);

        }

        else {

          bVar4 = _objc_msgSend(lVar8,pcVar3);

          DAT_003e68b8 = bVar4;

          _objc_release(lVar8);

          if ((bVar4 & 1) != 0) goto LAB_000ff690;

        }

      }

    }

    else if (DAT_003e68b8 == 1) goto LAB_000ff690;

LAB_000ff5a4:

    if ((DAT_003eb3a8 != 0) && (lVar6 = FUN_00297fa0(), lVar8 = DAT_003eb3a8, lVar6 != 0)) {

      _objc_retain(DAT_003eb3a8);

      auVar12 = FUN_00297fa0(DAT_003e7ed0);

      uVar11 = auVar12._8_8_;

      lVar6 = lVar8;

      if (auVar12._0_8_ != 0) {

        FUN_002a4680(&_OBJC_CLASS___NSString,uVar11,&cf____sub___);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar8);

        uVar11 = extraout_x1;

      }

      uVar7 = FUN_00297820(lVar6,uVar11,DAT_003e7f18);

      if ((uVar7 & 1) == 0) {

        _objc_retain(lVar6);

        lVar8 = DAT_003e7f18;

        DAT_003e7f18 = lVar6;

        _objc_release(lVar8);

        FUN_00101b0c();

      }

      uVar11 = DAT_003e7f20;

      if (DAT_003e7fa4 == 1) {

        _objc_retain(DAT_003e7f20);

      }

      else {

        _NSSearchPathForDirectoriesInDomains(9,1,1);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_00295440();

        auVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar12._8_8_,&cf_CoverRes_Bubbles___);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4460(auVar12._0_8_,auVar13._8_8_,auVar13._0_8_);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar13._0_8_);

        _objc_release(auVar12._0_8_);

        auVar12 = FUN_00297fa0(DAT_003e7ed0);

        if (auVar12._0_8_ == 0) {

LAB_000ff7e0:

          FUN_00101bd0(uVar10);

          _objc_retain(uVar10);

          uVar11 = DAT_003e7f20;

          DAT_003e7f20 = uVar10;

          _objc_release(uVar11);

          DAT_003e7fa4 = 1;

          _objc_retain(uVar10);

          uVar11 = uVar10;

        }

        else {

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar12._8_8_,&cf_sub___);

          auVar12 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4460(uVar10,auVar12._8_8_,auVar12._0_8_);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar12._0_8_);

          FUN_00294240(&_OBJC_CLASS___NSFileManager);

          auVar12 = _objc_retainAutoreleasedReturnValue();

          iVar5 = FUN_00295160(auVar12._0_8_,auVar12._8_8_,uVar11);

          _objc_release(auVar12._0_8_);

          if (iVar5 == 0) {

            _objc_release(uVar11);

            goto LAB_000ff7e0;

          }

          FUN_00101bd0(uVar11);

          _objc_retain(uVar11);

          uVar1 = DAT_003e7f20;

          DAT_003e7f20 = uVar11;

          _objc_release(uVar1);

          DAT_003e7fa4 = 1;

        }

        _objc_release(uVar10);

        _objc_release(uVar9);

      }

      _objc_release(lVar6);

      goto LAB_000ff694;

    }

    if (((DAT_003e7fa4 & 1) != 0) || (lVar8 = FUN_00297fa0(DAT_003e7f18), lVar8 != 0)) {

      lVar8 = DAT_003e7f18;

      DAT_003e7f18 = 0;

      _objc_release(lVar8);

      FUN_00101b0c();

    }

  }

LAB_000ff690:

  uVar11 = 0;

LAB_000ff694:

  _objc_autoreleaseReturnValue(uVar11);

  return;

}




