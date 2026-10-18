// FUN_0020daa0 @0x20daa0


void FUN_0020daa0(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  

  FUN_0020dae4(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);

  uVar2 = *(undefined8 *)(lVar3 + 0x28);

  *(undefined8 *)(lVar3 + 0x28) = uVar1;

  _objc_release(uVar2);

  return;

}




