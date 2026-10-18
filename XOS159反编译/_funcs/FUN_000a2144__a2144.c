// FUN_000a2144 @0xa2144


void FUN_000a2144(undefined8 param_1)



{

  int iVar1;

  undefined8 uVar2;

  cfstringStruct *pcVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  cfstringStruct *pcVar6;

  undefined8 uVar7;

  long lVar8;

  cfstringStruct *pcVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  cfstringStruct *pcVar10;

  cfstringStruct *pcVar11;

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  

  _objc_retain();

  FUN_00082e7c();

  FUN_001331c4();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_____d);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar12._0_8_;

  FUN_00299540(DAT_003e7558,auVar12._8_8_,uVar2);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  pcVar3 = auVar12._0_8_;

  if (pcVar3 == (cfstringStruct *)0x0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_001331c4();

    if (iVar1 == 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf_personalCover____Light);

      uVar5 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf_personalCover____Dark);

      uVar5 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_002a45e0(uVar4);

    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar10 = pcVar6;

    if ((pcVar6 == (cfstringStruct *)0x0) ||

       (auVar12 = FUN_00297fa0(pcVar6), uVar7 = auVar12._8_8_, auVar12._0_8_ == 0)) {

      iVar1 = FUN_001331c4();

      if (iVar1 == 0) {

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf_personalCover____Dark);

        auVar12 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf_personalCover____Light);

        auVar12 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_002a45e0(uVar4,auVar12._8_8_,auVar12._0_8_);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      lVar8 = FUN_00297fa0();

      _objc_release(uVar7);

      if (lVar8 == 0) {

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_02,&cf_personalCover___);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        pcVar11 = auVar13._0_8_;

        FUN_002a45e0(uVar4,auVar13._8_8_,pcVar11);

        pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        auVar13 = FUN_00297fa0();

        if (auVar13._0_8_ != 0) {

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar13._8_8_,&cf_personalCover____Light);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar13._8_8_,&cf_personalCover____Dark);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_002a0060(uVar4,auVar14._8_8_,pcVar9,auVar13._0_8_);

          FUN_002a0060(uVar4,extraout_x1_03,pcVar9,auVar14._0_8_);

          FUN_0029b4a0(uVar4,extraout_x1_04,pcVar11);

          FUN_002a4a40(uVar4);

          _objc_retain(pcVar9);

          _objc_release(pcVar6);

          _objc_release(auVar14._0_8_);

          _objc_release(auVar13._0_8_);

          pcVar10 = pcVar9;

        }

        _objc_release(pcVar9);

      }

      else {

        pcVar10 = (cfstringStruct *)0x0;

        pcVar11 = pcVar6;

      }

      _objc_release(pcVar11);

      _objc_release(auVar12._0_8_);

      uVar7 = extraout_x1_05;

    }

    pcVar6 = &cf___;

    if (pcVar10 != (cfstringStruct *)0x0) {

      pcVar6 = pcVar10;

    }

    FUN_002a00a0(DAT_003e7558,uVar7,pcVar6,uVar2);

    _objc_release(uVar5);

    _objc_release(uVar4);

  }

  else {

    iVar1 = FUN_00297820(pcVar3,auVar12._8_8_,&cf___);

    pcVar10 = (cfstringStruct *)0x0;

    if (iVar1 == 0) {

      pcVar10 = pcVar3;

    }

    _objc_retain(pcVar10);

  }

  _objc_release(pcVar3);

  _objc_release(uVar2);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar10);

  return;

}




