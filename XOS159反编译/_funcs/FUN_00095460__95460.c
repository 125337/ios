// FUN_00095460 @0x95460


void FUN_00095460(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_3);

  (*DAT_003e77a8)(param_1,param_2,param_3);

  if ((DAT_003e74b9 == '\x01') && ((DAT_003e74d8 & 1) != 0)) {

    FUN_002a5680(param_1);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_00295f20(auVar2._0_8_,auVar2._8_8_,param_3);

    _objc_release(auVar2._0_8_);

    if (iVar1 != 0) {

      FUN_001331b8();

      FUN_00007f9c();

    }

  }

  _objc_release(param_3);

  return;

}




