// FUN_00093f74 @0x93f74


void FUN_00093f74(void)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  

  uVar7 = DAT_003e7570;

  if (DAT_003e7751 == '\x01') {

    _objc_retain(DAT_003e7570);

  }

  else {

    FUN_000a1fe0();

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 == 0) {

      uVar7 = 0;

    }

    else {

      FUN_000a2144(lVar2);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      lVar4 = FUN_00297fa0();

      if (lVar4 == 0) {

        uVar7 = 0;

      }

      else {

        FUN_000a2518();

        auVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4460(auVar8._0_8_,auVar8._8_8_,uVar3);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar8._0_8_);

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        iVar1 = FUN_00295160(auVar8._0_8_,auVar8._8_8_,uVar5);

        _objc_release(auVar8._0_8_);

        if (iVar1 == 0) {

          uVar7 = 0;

          uVar6 = uVar5;

        }

        else {

          DAT_003e7751 = '\x01';

          _objc_retain(uVar5);

          uVar6 = DAT_003e7570;

          uVar7 = uVar5;

          DAT_003e7570 = uVar5;

        }

        _objc_release(uVar6);

      }

      _objc_release(uVar3);

    }

    _objc_release(lVar2);

  }

  _objc_autoreleaseReturnValue(uVar7);

  return;

}




