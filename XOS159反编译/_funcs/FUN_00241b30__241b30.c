// FUN_00241b30 @0x241b30


void FUN_00241b30(undefined8 param_1,undefined8 param_2,long param_3)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  

  _objc_retain(param_3);

  (*DAT_003eb1d0)(param_1,param_2,param_3);

  if (param_3 == 0) {

    lVar1 = 0;

  }

  else {

    lVar1 = FUN_002a5fc0(param_3);

  }

  FUN_002a5680(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_002a5fc0();

  _objc_release(uVar2);

  if (lVar1 != lVar3) {

    FUN_001331b8();

    FUN_0029b240(DAT_003eb188);

    FUN_00241444();

    uVar2 = DAT_003eb1a0;

    DAT_003eb1a0 = 0;

    _objc_release(uVar2);

    uVar2 = DAT_003eb1a8;

    DAT_003eb1a8 = 0;

    _objc_release(uVar2);

    DAT_003eb1cc = 0;

    FUN_0023d46c(param_1);

  }

  _objc_release(param_3);

  return;

}




