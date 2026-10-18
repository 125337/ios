// FUN_00028768 @0x28768


void FUN_00028768(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_00295480(uVar3);

  FUN_0029e500(*(undefined8 *)(param_1 + 0x28),extraout_x1,*(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_0029b140(*(undefined8 *)(param_1 + 0x38));

  _objc_release(uVar3);

  return;

}




