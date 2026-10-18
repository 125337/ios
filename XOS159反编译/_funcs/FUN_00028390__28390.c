// FUN_00028390 @0x28390


void FUN_00028390(long param_1,undefined8 param_2,undefined8 param_3)



{

  undefined1 auVar1 [16];

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  auVar1 = FUN_00297fa0(param_2);

  if (auVar1._0_8_ == 0) {

    FUN_0029b4a0(*(undefined8 *)(param_1 + 0x20),auVar1._8_8_,*(undefined8 *)(param_1 + 0x28));

  }

  else {

    FUN_002a0060(*(undefined8 *)(param_1 + 0x20),auVar1._8_8_,param_2);

  }

  auVar1 = FUN_00297fa0(param_3);

  if (auVar1._0_8_ == 0) {

    FUN_0029b4a0(*(undefined8 *)(param_1 + 0x20),auVar1._8_8_,*(undefined8 *)(param_1 + 0x30));

  }

  else {

    FUN_002a0060(*(undefined8 *)(param_1 + 0x20),auVar1._8_8_,param_3);

  }

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x20));

  FUN_0029b140(*(undefined8 *)(param_1 + 0x38));

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




