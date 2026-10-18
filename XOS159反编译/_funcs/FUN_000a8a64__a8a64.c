// FUN_000a8a64 @0xa8a64


undefined8 FUN_000a8a64(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    uVar2 = 0;

  }

  else {

    FUN_00298680(param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_002985c0(param_1);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    auVar4 = FUN_00295fa0(uVar1,auVar3._8_8_,&cf__chatroom);

    if ((auVar4._0_8_ & 1) == 0) {

      uVar2 = FUN_00295fa0(auVar3._0_8_,auVar4._8_8_,&cf__chatroom);

    }

    else {

      uVar2 = 1;

    }

    _objc_release(auVar3._0_8_);

    _objc_release(uVar1);

  }

  _objc_release(param_1);

  return uVar2;

}




