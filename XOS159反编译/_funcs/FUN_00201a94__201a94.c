// FUN_00201a94 @0x201a94


void FUN_00201a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  ulong uVar1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_3);

  (*DAT_003eabe8)(param_1,param_2,param_3);

  if ((DAT_003eaa30 == '\x01') && ((DAT_003ead50 & 1) == 0)) {

    FUN_002a5680(param_1);

    auVar2 = _objc_retainAutoreleasedReturnValue();

    uVar1 = FUN_00295f20(auVar2._0_8_,auVar2._8_8_,param_3);

    _objc_release(auVar2._0_8_);

    if ((uVar1 & 1) != 0) {

      FUN_0020c558(0);

      FUN_001ec0b4();

    }

  }

  _objc_release(param_3);

  return;

}




