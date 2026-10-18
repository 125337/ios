// FUN_00027f34 @0x27f34


void FUN_00027f34(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_002974a0();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  uVar4 = uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU);

  if (0x31 < (long)uVar4) {

    uVar4 = 0x32;

  }

  FUN_0029efa0(*(undefined8 *)(param_1 + 0x28),extraout_x1,uVar4,*(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_0029b140(*(undefined8 *)(param_1 + 0x38));

  return;

}




