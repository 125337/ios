// FUN_001e77e8 @0x1e77e8


void FUN_001e77e8(undefined8 param_1)



{

  long lVar1;

  long lVar2;

  undefined8 extraout_x1;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  _objc_retain();

  auVar4 = FUN_00297fa0(param_1);

  uVar3 = auVar4._8_8_;

  if (auVar4._0_8_ != 0) {

    if (DAT_003eaa28 == 0) {

      FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      lVar1 = DAT_003eaa28;

      DAT_003eaa28 = lVar2;

      _objc_release(lVar1);

      uVar3 = extraout_x1;

    }

    FUN_00291240(DAT_003eaa28,uVar3,param_1);

  }

  _objc_release(param_1);

  return;

}




