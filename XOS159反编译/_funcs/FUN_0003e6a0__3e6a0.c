// FUN_0003e6a0 @0x3e6a0


void FUN_0003e6a0(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  FUN_0029efa0(uVar1,auVar3._8_8_,param_2,*(undefined8 *)(param_1 + 0x20));

  FUN_002a4a40(uVar1);

  if (*(ulong *)(param_1 + 0x30) < 4) {

    *(undefined8 *)(&PTR_DAT_0038b998)[*(ulong *)(param_1 + 0x30)] = param_2;

  }

  DAT_003e74e0 = DAT_003e74e0 + 1;

  FUN_0003dcfc();

  if (*(long *)(param_1 + 0x28) != 0) {

    FUN_001941b8(param_2);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(*(undefined8 *)(param_1 + 0x28));

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar3._0_8_,auVar3._8_8_,uVar2);

    _objc_release(auVar3._0_8_);

    _objc_release(uVar2);

  }

  _objc_release(uVar1);

  return;

}




