// FUN_00132fe0 @0x132fe0


void FUN_00132fe0(long param_1)



{

  int iVar1;

  long lVar2;

  

  _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),PTR_LOOP_003e6af8,0,1);

  FUN_002a6520(*(undefined8 *)(param_1 + 0x20));

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if ((lVar2 != 0) && (iVar1 = FUN_0012ec24(), iVar1 != 0)) {

    FUN_00133054(*(undefined8 *)(param_1 + 0x20));

    FUN_0012f0a0(*(undefined8 *)(param_1 + 0x20),0);

    return;

  }

  return;

}




