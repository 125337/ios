// FUN_0022a3bc @0x22a3bc


void FUN_0022a3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_1);

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e7230);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924e0();

  _objc_release(uVar2);

  if (iVar1 == 0) {

    (*DAT_003eb020)(param_1,param_2,param_3,param_4);

  }

  else {

    FUN_00291900(param_3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_0022e74c(param_1,uVar2);

    if ((uVar3 & 1) == 0) {

      FUN_0022eba8(param_1);

    }

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




