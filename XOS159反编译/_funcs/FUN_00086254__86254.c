// FUN_00086254 @0x86254


undefined8 FUN_00086254(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 local_38;

  

  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);

  local_38 = *(undefined8 *)(lVar4 + 0x28);

  uVar2 = FUN_000862b8(*(undefined8 *)(param_1 + 0x20),&local_38);

  uVar1 = local_38;

  _objc_retain(local_38);

  uVar3 = *(undefined8 *)(lVar4 + 0x28);

  *(undefined8 *)(lVar4 + 0x28) = uVar1;

  _objc_release(uVar3);

  return uVar2;

}




