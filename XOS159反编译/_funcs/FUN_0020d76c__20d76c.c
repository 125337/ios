// FUN_0020d76c @0x20d76c


void FUN_0020d76c(void)



{

  uint uVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  uint uVar6;

  uint uVar7;

  double dVar8;

  undefined1 auVar9 [16];

  uint local_34;

  

  FUN_0020d8a8();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar9 = FUN_00297fa0();

  if (auVar9._0_8_ != 0) {

    local_34 = 0;

    FUN_0029be20(&_OBJC_CLASS___NSScanner,auVar9._8_8_,uVar2);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_0029bde0(auVar9._0_8_,auVar9._8_8_,&local_34);

    _objc_release(auVar9._0_8_);

    if ((uVar3 & 1) != 0) {

      lVar4 = FUN_00297fa0(uVar2);

      uVar7 = local_34 >> 8;

      if (lVar4 == 8) {

        uVar1 = local_34 >> 0x18;

        dVar8 = (double)(local_34 & 0xff) / 255.0;

        uVar6 = uVar7;

        uVar7 = local_34 >> 0x10;

      }

      else {

        uVar1 = local_34 >> 0x10 & 0xff;

        dVar8 = 1.0;

        uVar6 = local_34;

      }

      FUN_00293040((double)uVar1 / 255.0,(double)(uVar7 & 0xff) / 255.0,

                   (double)(uVar6 & 0xff) / 255.0,dVar8,&_OBJC_CLASS___UIColor);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      goto LAB_0020d860;

    }

  }

  uVar5 = 0;

LAB_0020d860:

  _objc_release(uVar2);

  _objc_autoreleaseReturnValue(uVar5);

  return;

}




