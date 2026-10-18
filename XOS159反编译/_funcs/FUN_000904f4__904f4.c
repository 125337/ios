// FUN_000904f4 @0x904f4


void FUN_000904f4(void)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  iVar2 = FUN_001331c4();

  pcVar1 = &cf_selectedCoverImageNameDark;

  if (iVar2 == 0) {

    pcVar1 = &cf_selectedCoverImageNameLight;

  }

  FUN_002a45e0(uVar3,extraout_x1,pcVar1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  auVar8 = FUN_00297fa0();

  if (auVar8._0_8_ == 0) {

    pcVar1 = &cf_selectedCoverImageNameLight;

    if (iVar2 == 0) {

      pcVar1 = &cf_selectedCoverImageNameDark;

    }

    FUN_002a45e0(uVar3,auVar8._8_8_,pcVar1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    lVar6 = FUN_00297fa0();

    _objc_release(uVar5);

    if (lVar6 == 0) {

      FUN_002a45e0(uVar3,extraout_x1_00,&cf_selectedCoverImageName);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      auVar8 = FUN_00297fa0();

      if (auVar8._0_8_ == 0) {

        uVar7 = 0;

      }

      else {

        FUN_002a0060(uVar3,auVar8._8_8_,uVar5,&cf_selectedCoverImageNameLight);

        FUN_002a0060(uVar3,extraout_x1_01,uVar5,&cf_selectedCoverImageNameDark);

        FUN_0029b4a0(uVar3,extraout_x1_02,&cf_selectedCoverImageName);

        FUN_002a4a40(uVar3);

        _objc_retain(uVar5);

        uVar7 = uVar5;

      }

      _objc_release(uVar5);

    }

    else {

      uVar7 = 0;

    }

  }

  else {

    _objc_retain(uVar4);

    uVar7 = uVar4;

  }

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_autoreleaseReturnValue(uVar7);

  return;

}




