// FUN_0027a550 @0x27a550


undefined8

FUN_0027a550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

            long param_5,undefined8 param_6)



{

  double dVar1;

  undefined8 uVar2;

  double dVar3;

  

  if (*(char *)(param_5 + 0x20) == '\x01') {

    _objc_retain(param_6);

    dVar1 = (double)_CGRectGetWidth(param_1,param_2,param_3,param_4);

    uVar2 = FUN_002925a0(param_6);

    _objc_release(param_6);

    dVar3 = (double)_CGRectGetWidth(uVar2,param_2,param_3,param_4);

    uVar2 = 2;

    if (dVar1 <= dVar3 + 0.5) {

      uVar2 = 1;

    }

    return uVar2;

  }

  return 0;

}




