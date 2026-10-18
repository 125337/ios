// FUN_00237460 @0x237460


void FUN_00237460(undefined8 param_1,long param_2)



{

  long lVar1;

  undefined8 extraout_x1;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  auVar4 = FUN_00297fa0(param_1);

  uVar2 = auVar4._8_8_;

  if (auVar4._0_8_ != 0) {

    if (DAT_003eb188 == 0) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar1 = _objc_retainAutoreleasedReturnValue();

      lVar3 = DAT_003eb188;

      DAT_003eb188 = lVar1;

      _objc_release(lVar3);

      uVar2 = extraout_x1;

    }

    lVar3 = param_2;

    if (param_2 == 0) {

      FUN_002992c0(&_OBJC_CLASS___NSNull);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      uVar2 = auVar4._8_8_;

      lVar3 = auVar4._0_8_;

    }

    FUN_002a00a0(DAT_003eb188,uVar2,lVar3,param_1);

    if (param_2 == 0) {

      _objc_release(lVar3);

    }

  }

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




