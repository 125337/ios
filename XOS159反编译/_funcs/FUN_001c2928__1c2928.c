// FUN_001c2928 @0x1c2928


void FUN_001c2928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 undefined8 param_5,undefined8 param_6)



{

  _objc_retain();

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  _objc_retain(param_6);

  FUN_001bffdc(0x4000000000000000);

  if (DAT_003ea8a8 != (code *)0x0) {

    (*DAT_003ea8a8)(param_1,param_2,param_3,param_4,param_5,param_6);

  }

  _objc_release(param_6);

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_1);

  return;

}




