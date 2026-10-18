// FUN_000c7a50 @0xc7a50


void FUN_000c7a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 undefined8 param_5)



{

  ulong uVar1;

  undefined8 uVar2;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  uVar1 = FUN_000c9f70(param_3);

  if ((uVar1 & 1) == 0) {

    (*DAT_003e7ce8)(param_1,param_2,param_3,param_4,param_5);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    uVar2 = 0;

  }

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




