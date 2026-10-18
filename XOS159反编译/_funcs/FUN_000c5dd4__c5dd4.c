// FUN_000c5dd4 @0xc5dd4


void FUN_000c5dd4(void)



{

  undefined8 uVar1;

  uint uVar2;

  int iVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  

  uVar2 = FUN_001331c4();

  if (DAT_003e7753 != uVar2) {

    FUN_00007f9c();

  }

  uVar5 = DAT_003e7568;

  if (DAT_003e7750 == '\x01') {

    _objc_retain(DAT_003e7568);

    goto LAB_000c5f60;

  }

  DAT_003e7750 = '\x01';

  DAT_003e7568 = 0;

  _objc_release(uVar5);

  FUN_00082e7c();

  uVar1 = DAT_003e7550;

  _objc_retain(DAT_003e7550);

  lVar4 = FUN_00297fa0(uVar1);

  if (lVar4 == 0) {

LAB_000c5ed0:

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar8._0_8_;

    FUN_002a45e0(uVar7,auVar8._8_8_,&cf_selectedCoverImageNameLight);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    auVar8 = FUN_00297fa0();

    if (auVar8._0_8_ == 0) {

      FUN_002a45e0(uVar7,auVar8._8_8_,&cf_selectedCoverImageNameDark);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      lVar4 = FUN_00297fa0();

      _objc_release(uVar6);

      _objc_release(uVar5);

      if (lVar4 == 0) {

        FUN_000a1cd8();

        uVar6 = _objc_retainAutoreleasedReturnValue();

        uVar5 = DAT_003e7568;

        DAT_003e7568 = uVar6;

        _objc_release(uVar5);

        uVar5 = DAT_003e7568;

        _objc_retain(DAT_003e7568);

        goto LAB_000c5f50;

      }

    }

    else {

      _objc_release(uVar5);

    }

    uVar5 = 0;

  }

  else {

    FUN_000a1c2c();

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(auVar8._0_8_,auVar8._8_8_,uVar1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar8._0_8_);

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    iVar3 = FUN_00295160(auVar8._0_8_,auVar8._8_8_,uVar5);

    _objc_release(auVar8._0_8_);

    if (iVar3 == 0) {

      _objc_release(uVar5);

      goto LAB_000c5ed0;

    }

    _objc_retain(uVar5);

    uVar7 = DAT_003e7568;

    DAT_003e7568 = uVar5;

  }

LAB_000c5f50:

  _objc_release(uVar7);

  _objc_release(uVar1);

LAB_000c5f60:

  _objc_autoreleaseReturnValue(uVar5);

  return;

}




