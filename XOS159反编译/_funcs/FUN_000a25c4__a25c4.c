// FUN_000a25c4 @0xa25c4


void FUN_000a25c4(undefined8 param_1)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  cfstringStruct *pcVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  

  _objc_retain();

  FUN_00082e7c();

  FUN_001331c4();

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_____d);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar9._0_8_;

  FUN_00299540(DAT_003e7560,auVar9._8_8_,uVar3);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  pcVar4 = auVar9._0_8_;

  if (pcVar4 == (cfstringStruct *)0x0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_001331c4();

    if (iVar2 == 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf_peerCover____Light);

      auVar9 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf_peerCover____Dark);

      auVar9 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_002a45e0(uVar5,auVar9._8_8_,auVar9._0_8_);

    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    if ((pcVar6 == (cfstringStruct *)0x0) ||

       (auVar10 = FUN_00297fa0(pcVar6), uVar7 = auVar10._8_8_, auVar10._0_8_ == 0)) {

      iVar2 = FUN_001331c4();

      if (iVar2 == 0) {

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf_peerCover____Dark);

        auVar10 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf_peerCover____Light);

        auVar10 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_002a45e0(uVar5,auVar10._8_8_,auVar10._0_8_);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      lVar8 = FUN_00297fa0();

      _objc_release(uVar7);

      if (lVar8 != 0) {

        _objc_release(pcVar6);

        pcVar6 = (cfstringStruct *)0x0;

      }

      _objc_release(auVar10._0_8_);

      uVar7 = extraout_x1_02;

    }

    pcVar1 = &cf___;

    if (pcVar6 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar6;

    }

    FUN_002a00a0(DAT_003e7560,uVar7,pcVar1,uVar3);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar5);

  }

  else {

    iVar2 = FUN_00297820(pcVar4,auVar9._8_8_,&cf___);

    pcVar6 = (cfstringStruct *)0x0;

    if (iVar2 == 0) {

      pcVar6 = pcVar4;

    }

    _objc_retain(pcVar6);

  }

  _objc_release(pcVar4);

  _objc_release(uVar3);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar6);

  return;

}




