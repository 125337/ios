// FUN_001272a4 @0x1272a4


void FUN_001272a4(void)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  byte bVar3;

  uint uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar10 [16];

  

  uVar4 = FUN_001331c4();

  uVar8 = DAT_003e8318;

  if (DAT_003e8430 == '\x01' && DAT_003e8491 == uVar4) {

    _objc_retain(DAT_003e8318);

  }

  else {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf_xzyNameplateImageNameDark;

    if (uVar4 == 0) {

      pcVar1 = &cf_xzyNameplateImageNameLight;

    }

    _objc_retain(pcVar1);

    FUN_002a45e0(uVar5,extraout_x1,pcVar1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    lVar7 = FUN_00297fa0();

    bVar3 = (byte)uVar4;

    if (lVar7 == 0) {

      pcVar2 = &cf_xzyNameplateImageNameLight;

      if (uVar4 == 0) {

        pcVar2 = &cf_xzyNameplateImageNameDark;

      }

      _objc_retain(pcVar2);

      FUN_002a45e0(uVar5,extraout_x1_00,pcVar2);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      lVar7 = FUN_00297fa0();

      _objc_release(uVar8);

      uVar8 = DAT_003e8318;

      if (lVar7 == 0) {

        FUN_002a45e0(uVar5,extraout_x1_01,&cf_xzyNameplateImageName);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        auVar10 = FUN_00297fa0();

        uVar8 = DAT_003e8318;

        if (auVar10._0_8_ == 0) {

          DAT_003e8318 = 0;

          _objc_release(uVar8);

          uVar8 = 0;

          DAT_003e8430 = '\x01';

          DAT_003e8491 = bVar3;

        }

        else {

          FUN_002a0060(uVar5,auVar10._8_8_,uVar9,&cf_xzyNameplateImageNameLight);

          FUN_002a0060(uVar5,extraout_x1_02,uVar9,&cf_xzyNameplateImageNameDark);

          FUN_0029b4a0(uVar5,extraout_x1_03,&cf_xzyNameplateImageName);

          _objc_retain(uVar9);

          uVar8 = DAT_003e8318;

          DAT_003e8318 = uVar9;

          _objc_release(uVar8);

          DAT_003e8430 = '\x01';

          DAT_003e8491 = bVar3;

          _objc_retain(uVar9);

          uVar8 = uVar9;

        }

        _objc_release(uVar9);

      }

      else {

        DAT_003e8318 = 0;

        _objc_release(uVar8);

        uVar8 = 0;

        DAT_003e8430 = '\x01';

        DAT_003e8491 = bVar3;

      }

      _objc_release(pcVar2);

    }

    else {

      _objc_retain(uVar6);

      uVar8 = DAT_003e8318;

      DAT_003e8318 = uVar6;

      _objc_release(uVar8);

      DAT_003e8430 = '\x01';

      DAT_003e8491 = bVar3;

      _objc_retain(uVar6);

      uVar8 = uVar6;

    }

    _objc_release(uVar6);

    _objc_release(pcVar1);

    _objc_release(uVar5);

  }

  _objc_autoreleaseReturnValue(uVar8);

  return;

}




