// FUN_0023d2c4 @0x23d2c4


byte FUN_0023d2c4(undefined8 param_1)



{

  byte bVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  

  _objc_retain();

  if (DAT_003e7298 < 100) {

    bVar1 = DAT_003eb268;

    if (DAT_003e7298 == 3) goto LAB_0023d3b0;

  }

  else {

    FUN_0023d02c(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 != 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf_____ld);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar5 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar5._0_8_;

      FUN_00299520(uVar4,auVar5._8_8_,uVar3);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 == 0) {

        bVar1 = 1;

      }

      else {

        bVar1 = FUN_002924c0(uVar4,extraout_x1_00,uVar3);

      }

      _objc_release(uVar4);

      _objc_release(uVar3);

      goto LAB_0023d3b0;

    }

  }

  bVar1 = 0;

LAB_0023d3b0:

  _objc_release(param_1);

  return bVar1 & 1;

}




