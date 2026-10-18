// FUN_000c5c1c @0xc5c1c


void FUN_000c5c1c(void)



{

  uint uVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  

  uVar1 = FUN_001331c4();

  if (DAT_003e7753 != uVar1) {

    FUN_00007f9c();

  }

  uVar7 = DAT_003e7578;

  if (DAT_003e7752 == '\x01') {

    _objc_retain(DAT_003e7578);

  }

  else {

    DAT_003e7752 = '\x01';

    DAT_003e7578 = 0;

    _objc_release(uVar7);

    FUN_000a1fe0();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) {

      uVar7 = 0;

    }

    else {

      FUN_000a25c4(lVar3);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      lVar5 = FUN_00297fa0();

      if (lVar5 == 0) {

        uVar7 = 0;

      }

      else {

        FUN_000a2518();

        auVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4460(auVar8._0_8_,auVar8._8_8_,uVar4);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar8._0_8_);

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        iVar2 = FUN_00295160(auVar8._0_8_,auVar8._8_8_,uVar6);

        _objc_release(auVar8._0_8_);

        if (iVar2 == 0) {

          uVar7 = 0;

        }

        else {

          _objc_retain(uVar6);

          uVar7 = DAT_003e7578;

          DAT_003e7578 = uVar6;

          _objc_release(uVar7);

          _objc_retain(uVar6);

          uVar7 = uVar6;

        }

        _objc_release(uVar6);

      }

      _objc_release(uVar4);

    }

    _objc_release(lVar3);

  }

  _objc_autoreleaseReturnValue(uVar7);

  return;

}




