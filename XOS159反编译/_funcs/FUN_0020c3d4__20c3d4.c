// FUN_0020c3d4 @0x20c3d4


void FUN_0020c3d4(undefined8 param_1,cfstringStruct *param_2)



{

  cfstringStruct *pcVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  lVar3 = FUN_00297fa0(param_1);

  if (lVar3 != 0) {

    if (DAT_003ea9b0 == 0) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      lVar3 = DAT_003ea9b0;

      DAT_003ea9b0 = lVar4;

      _objc_release(lVar3);

    }

    FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf___;

    if (param_2 != (cfstringStruct *)0x0) {

      pcVar1 = param_2;

    }

    FUN_002a45c0(pcVar1,auVar7._8_8_,auVar7._0_8_);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar7._0_8_);

    auVar7 = FUN_00297fa0(uVar5);

    if (auVar7._0_8_ == 0) {

      FUN_0029b4a0(DAT_003ea9b0,auVar7._8_8_,param_1);

    }

    else {

      FUN_00297da0(uVar5);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      auVar7 = FUN_00297fa0();

      uVar2 = uVar5;

      if (auVar7._0_8_ != 0) {

        uVar2 = uVar6;

      }

      FUN_002a00a0(DAT_003ea9b0,auVar7._8_8_,uVar2,param_1);

      _objc_release(uVar6);

    }

    FUN_0020c330();

    FUN_0020c558(param_1);

    _objc_release(uVar5);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




