// FUN_0001caf4 @0x1caf4


void FUN_0001caf4(long param_1)



{

  uint uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  uint uVar5;

  uint uVar6;

  double dVar7;

  undefined1 auVar8 [16];

  uint local_34;

  

  _objc_retain();

  if ((param_1 == 0) || (auVar8 = FUN_00297fa0(param_1), auVar8._0_8_ == 0)) {

    uVar4 = 0;

  }

  else {

    FUN_002a4560(param_1,auVar8._8_8_,&cf__,&cf___);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    auVar8 = FUN_00297fa0();

    uVar4 = auVar8._8_8_;

    if ((auVar8._0_8_ == 6) ||

       (auVar8 = FUN_00297fa0(uVar2), uVar4 = auVar8._8_8_, auVar8._0_8_ == 8)) {

      local_34 = 0;

      FUN_0029be20(&_OBJC_CLASS___NSScanner,uVar4,uVar2);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_0029bde0(auVar8._0_8_,auVar8._8_8_,&local_34);

      _objc_release(auVar8._0_8_);

      lVar3 = FUN_00297fa0(uVar2);

      uVar6 = local_34 >> 8;

      if (lVar3 == 8) {

        uVar1 = local_34 >> 0x18;

        dVar7 = (double)(local_34 & 0xff) / 255.0;

        uVar5 = uVar6;

        uVar6 = local_34 >> 0x10;

      }

      else {

        uVar1 = local_34 >> 0x10 & 0xff;

        dVar7 = 1.0;

        uVar5 = local_34;

      }

      FUN_00293040((double)uVar1 / 255.0,(double)(uVar6 & 0xff) / 255.0,

                   (double)(uVar5 & 0xff) / 255.0,dVar7,&_OBJC_CLASS___UIColor);

      uVar4 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      uVar4 = 0;

    }

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}




