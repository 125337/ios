// FUN_001bc984 @0x1bc984


void FUN_001bc984(undefined8 param_1,undefined8 param_2,long param_3)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  

  _objc_retain(param_3);

  (*DAT_003e9750)(param_1,param_2,param_3);

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

    FUN_001bc5b8();

  }

  _objc_release(param_3);

  return;

}




