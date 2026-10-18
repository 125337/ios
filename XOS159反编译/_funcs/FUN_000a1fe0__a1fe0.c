// FUN_000a1fe0 @0xa1fe0


void FUN_000a1fe0(void)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  

  if ((DAT_003e79b8 & 1) == 0) {

    DAT_003e79b8 = 1;

    lVar2 = _objc_getClass("CContactMgr");

    lVar3 = _objc_getClass("MMServiceCenter");

    if ((lVar2 != 0) && (lVar3 != 0)) {

      FUN_00294200();

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00295b60(auVar8._0_8_,auVar8._8_8_,lVar2);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar8._0_8_);

      FUN_00295b20(uVar4);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002986c0();

      uVar6 = _objc_retainAutoreleasedReturnValue();

      uVar7 = FUN_002937a0();

      uVar1 = DAT_003e7588;

      DAT_003e7588 = uVar7;

      _objc_release(uVar1);

      _objc_release(uVar6);

      _objc_release(uVar5);

      _objc_release(uVar4);

    }

  }

  uVar1 = DAT_003e7588;

  _objc_retain(DAT_003e7588);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




