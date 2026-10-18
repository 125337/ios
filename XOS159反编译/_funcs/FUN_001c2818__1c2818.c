// FUN_001c2818 @0x1c2818


void FUN_001c2818(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  _objc_retain();

  _objc_retain(param_3);

  FUN_001bffdc(0x4000000000000000);

  if (DAT_003ea898 != (code *)0x0) {

    (*DAT_003ea898)(param_1,param_2,param_3);

  }

  _objc_release(param_3);

  _objc_release(param_1);

  return;

}




