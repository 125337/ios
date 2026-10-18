// FUN_0018ec28 @0x18ec28


void FUN_0018ec28(long param_1)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  uint uVar5;

  uint uVar6;

  uint uVar7;

  double dVar8;

  undefined1 auVar9 [16];

  uint local_34;

  

  _objc_retain();

  if ((param_1 == 0) || (auVar9 = FUN_00297fa0(param_1), auVar9._0_8_ == 0)) {

    uVar4 = 0;

  }

  else {

    FUN_002a4560(param_1,auVar9._8_8_,&cf__,&cf___);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    auVar9 = FUN_00297fa0();

    uVar4 = auVar9._8_8_;

    if ((auVar9._0_8_ == 6) ||

       (auVar9 = FUN_00297fa0(uVar1), uVar4 = auVar9._8_8_, auVar9._0_8_ == 8)) {

      local_34 = 0;

      FUN_0029be20(&_OBJC_CLASS___NSScanner,uVar4,uVar1);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar2 = FUN_0029bde0(auVar9._0_8_,auVar9._8_8_,&local_34);

      if ((uVar2 & 1) == 0) {

        uVar4 = 0;

      }

      else {

        lVar3 = FUN_00297fa0(uVar1);

        if (lVar3 == 6) {

          uVar6 = local_34 >> 0x10 & 0xff;

          dVar8 = 1.0;

          uVar5 = local_34;

          uVar7 = local_34 >> 8;

        }

        else {

          uVar6 = local_34 >> 0x18;

          uVar7 = local_34 >> 0x10;

          dVar8 = (double)(local_34 & 0xff) / 255.0;

          uVar5 = local_34 >> 8;

        }

        FUN_00293040((double)uVar6 / 255.0,(double)(uVar7 & 0xff) / 255.0,

                     (double)(uVar5 & 0xff) / 255.0,dVar8,&_OBJC_CLASS___UIColor);

        uVar4 = _objc_retainAutoreleasedReturnValue();

      }

      _objc_release(auVar9._0_8_);

    }

    else {

      uVar4 = 0;

    }

    _objc_release(uVar1);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}




