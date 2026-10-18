// FUN_001d6dec @0x1d6dec


undefined8 FUN_001d6dec(undefined8 param_1)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  _objc_retain();

  auVar2 = FUN_00297fa0(param_1);

  if ((auVar2._0_8_ == 0) || (DAT_003ea950 == 0)) {

    uVar1 = 0;

  }

  else {

    uVar1 = FUN_00293560(DAT_003ea950,auVar2._8_8_,param_1);

  }

  _objc_release(param_1);

  return uVar1;

}




