// FUN_001c289c @0x1c289c


void FUN_001c289c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  _objc_retain();

  _objc_retain(param_3);

  FUN_001bffdc(0x4000000000000000);

  if (DAT_003ea8a0 != (code *)0x0) {

    (*DAT_003ea8a0)(param_1,param_2,param_3,param_4);

  }

  _objc_release(param_3);

  _objc_release(param_1);

  return;

}




