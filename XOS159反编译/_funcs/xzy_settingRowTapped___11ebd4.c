// xzy_settingRowTapped: @0x11ebd4


/* Function Stack Size: 0x18 bytes */



void XZYHomeNPPickerVC::xzy_settingRowTapped_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  _objc_retain(param_3);

  FUN_002a6220(param_3);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_002a4e60();

  _objc_release(uVar1);

  if (lVar2 < 0x66) {

    if (lVar2 == 100) {

      FUN_002a6820(param_1);

    }

    else if (lVar2 == 0x65) {

      FUN_002a67e0(param_1);

    }

  }

  else {

    if (lVar2 == 0x66) {

      FUN_002a4f80(param_1);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      uVar1 = auVar4._0_8_;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar4._8_8_,&cf_xzyHomeNP____OffsetX);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar4._0_8_;

      FUN_002a6800(param_1,auVar4._8_8_,&cf_X,uVar3);

    }

    else {

      if (lVar2 != 0x67) goto LAB_0011ed10;

      FUN_002a4f80(param_1);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      uVar1 = auVar4._0_8_;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar4._8_8_,&cf_xzyHomeNP____OffsetY);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar4._0_8_;

      FUN_002a6800(param_1,auVar4._8_8_,&cf_Y,uVar3);

    }

    _objc_release(uVar3);

    _objc_release(uVar1);

  }

LAB_0011ed10:

  _objc_release(param_3);

  return;

}




