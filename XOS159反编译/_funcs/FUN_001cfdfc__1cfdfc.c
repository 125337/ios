// FUN_001cfdfc @0x1cfdfc


void FUN_001cfdfc(undefined8 param_1,cfstringStruct *param_2)



{

  cfstringStruct *pcVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  lVar2 = FUN_00297fa0(param_1);

  if (lVar2 != 0) {

    if (DAT_003ea9c0 == 0) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      lVar2 = DAT_003ea9c0;

      DAT_003ea9c0 = lVar3;

      _objc_release(lVar2);

    }

    FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf___;

    if (param_2 != (cfstringStruct *)0x0) {

      pcVar1 = param_2;

    }

    FUN_002a45c0(pcVar1,auVar5._8_8_,auVar5._0_8_);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar5._0_8_);

    auVar5 = FUN_00297fa0(uVar4);

    if (auVar5._0_8_ == 0) {

      FUN_0029b4a0(DAT_003ea9c0,auVar5._8_8_,param_1);

    }

    else {

      FUN_002a00a0(DAT_003ea9c0,auVar5._8_8_,uVar4,param_1);

    }

    FUN_0020bdf0();

    FUN_0020c558(param_1);

    _objc_release(uVar4);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




