// FUN_0008e59c @0x8e59c


void FUN_0008e59c(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  

  lVar2 = *(long *)(param_1 + 0x28);

  if (lVar2 != 0) {

    FUN_002a44a0(&cf_mp3_file___,param_2,*(undefined8 *)(param_1 + 0x20));

    uVar1 = _objc_retainAutoreleasedReturnValue();

    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,0);

    _objc_release(uVar1);

    return;

  }

  return;

}




