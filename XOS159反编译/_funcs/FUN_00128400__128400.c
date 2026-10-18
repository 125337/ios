// FUN_00128400 @0x128400


void FUN_00128400(undefined8 param_1,undefined8 param_2)



{

  int iVar1;

  undefined8 uVar2;

  

  FUN_0011efd4();

  if ((DAT_003e83d0 & 1) != 0) {

    FUN_00121fa8(param_1);

    DAT_003e8508 = 1;

    (*DAT_003e84e8)(param_1,param_2);

    DAT_003e8508 = 0;

    FUN_0011b8dc(param_1);

    return;

  }

  _objc_getAssociatedObject(param_1,&DAT_003e844a);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924e0();

  _objc_release(uVar2);

  if (iVar1 != 0) {

    FUN_0011b700(param_1);

    DAT_003e8508 = 1;

    (*DAT_003e84e8)(param_1,param_2);

    DAT_003e8508 = 0;

    FUN_00122230(param_1);

    _objc_setAssociatedObject(param_1,&DAT_003e844a,0,1);

    return;

  }

  DAT_003e8508 = 1;

  (*DAT_003e84e8)(param_1,param_2);

  DAT_003e8508 = 0;

  return;

}




