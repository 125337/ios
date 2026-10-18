// FUN_001ccc68 @0x1ccc68


void FUN_001ccc68(long param_1)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar1);

  auVar2 = FUN_00297fa0(uVar1);

  if (auVar2._0_8_ != 0 && DAT_003eaa08 != 0) {

    FUN_0029b4a0(DAT_003eaa08,auVar2._8_8_,uVar1);

    FUN_0020bca8();

    DAT_003eaab4 = DAT_003eaab4 + 1;

  }

  _objc_release(uVar1);

  FUN_001c9388();

  return;

}




