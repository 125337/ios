// FUN_0028c91c @0x28c91c


void FUN_0028c91c(undefined8 param_1,ulong param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  

  FUN_002918e0(&_OBJC_CLASS___CASpringAnimation,param_2,param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = 0;

  uVar3 = 0;

  if (param_2 < 4) {

    uVar2 = *(undefined8 *)(&DAT_0030ef70 + param_2 * 8);

    uVar3 = *(undefined8 *)(&DAT_0030ef50 + param_2 * 8);

  }

  FUN_0029f980(0x3ff0000000000000,uVar1);

  FUN_002a19e0(uVar2,uVar1);

  FUN_0029dae0(uVar3,uVar1);

  FUN_002a2900(uVar1);

  FUN_0029de80(uVar1);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




