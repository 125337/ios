// FUN_000bc82c @0xbc82c


void FUN_000bc82c(long param_1)



{

  int iVar1;

  long lVar2;

  long lVar3;

  

  lVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  if (lVar2 != 0) {

    _objc_setAssociatedObject(lVar2,PTR_LOOP_003e65c0,0,1);

    FUN_002a6520(lVar2);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if ((lVar3 != 0) &&

       (iVar1 = FUN_000b4368(lVar2,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30)),

       iVar1 != 0)) {

      _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6308,0,1);

      _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6328,0,1);

      FUN_000b6e80(lVar2);

    }

  }

  _objc_release(lVar2);

  return;

}




