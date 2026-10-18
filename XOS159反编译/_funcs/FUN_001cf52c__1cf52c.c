// FUN_001cf52c @0x1cf52c


undefined8 FUN_001cf52c(undefined8 param_1)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  _objc_retain();

  auVar2 = FUN_00297fa0(param_1);

  if (auVar2._0_8_ == 0) {

    uVar1 = 0;

  }

  else {

    uVar1 = FUN_00293560(DAT_003ea9d8,auVar2._8_8_,param_1);

  }

  _objc_release(param_1);

  return uVar1;

}




