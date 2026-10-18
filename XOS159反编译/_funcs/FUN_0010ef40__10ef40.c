// FUN_0010ef40 @0x10ef40


undefined8 FUN_0010ef40(undefined8 param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain();

  lVar1 = FUN_00297fa0(param_1);

  if (lVar1 == 0) {

    uVar2 = 0;

  }

  else {

    if (DAT_003e8278 != -1) {

      FUN_0028f300();

    }

    lVar1 = DAT_003e8270;

    uVar2 = 0;

    if (DAT_003e8270 != 0) {

      auVar3 = FUN_00297fa0(param_1);

      uVar2 = FUN_002992e0(lVar1,auVar3._8_8_,param_1,0,0,auVar3._0_8_);

    }

  }

  _objc_release(param_1);

  return uVar2;

}




