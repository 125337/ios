// FUN_0012dd08 @0x12dd08


void FUN_0012dd08(undefined8 param_1)



{

  uint uVar1;

  long lVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  uint uVar5;

  uint uVar6;

  double dVar7;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  uint local_54;

  

  _objc_retain();

  auVar8 = FUN_00297fa0(param_1);

  uVar4 = auVar8._8_8_;

  if (auVar8._0_8_ == 0) {

    lVar3 = 0;

  }

  else {

    if (DAT_003e85e0 == 0) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      lVar3 = DAT_003e85e0;

      DAT_003e85e0 = lVar2;

      _objc_release(lVar3);

      uVar4 = extraout_x1;

    }

    FUN_00299520(DAT_003e85e0,uVar4,param_1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    lVar2 = auVar8._0_8_;

    if (lVar2 == 0) {

      FUN_002a4560(param_1,auVar8._8_8_,&cf__,&cf___);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar8._0_8_;

      local_54 = 0;

      FUN_0029be20(&_OBJC_CLASS___NSScanner,auVar8._8_8_,uVar4);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_0029bde0(auVar8._0_8_,auVar8._8_8_,&local_54);

      lVar3 = FUN_00297fa0(uVar4);

      uVar6 = local_54 >> 8;

      if (lVar3 == 8) {

        uVar1 = local_54 >> 0x18;

        dVar7 = (double)(local_54 & 0xff) / 255.0;

        uVar5 = uVar6;

        uVar6 = local_54 >> 0x10;

      }

      else {

        uVar1 = local_54 >> 0x10 & 0xff;

        dVar7 = 1.0;

        uVar5 = local_54;

      }

      FUN_00293040((double)uVar1 / 255.0,(double)(uVar6 & 0xff) / 255.0,

                   (double)(uVar5 & 0xff) / 255.0,dVar7,&_OBJC_CLASS___UIColor);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      lVar3 = auVar9._0_8_;

      if (lVar3 != 0) {

        FUN_002a0060(DAT_003e85e0,auVar9._8_8_,lVar3,param_1);

      }

      _objc_release(auVar8._0_8_);

      _objc_release(uVar4);

    }

    else {

      _objc_retain(lVar2);

      lVar3 = lVar2;

    }

    _objc_release(lVar2);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar3);

  return;

}




