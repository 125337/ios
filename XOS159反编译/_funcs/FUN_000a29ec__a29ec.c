// FUN_000a29ec @0xa29ec


void FUN_000a29ec(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  ulong uVar5;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  if (lVar1 != 0) {

    _objc_setAssociatedObject(lVar1,&DAT_003e79e8,0,1);

  }

  FUN_002a6520(lVar1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) {

    FUN_002a6520(uVar2);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(lVar3);

    if ((lVar4 != 0) &&

       (uVar5 = _objc_opt_respondsToSelector(uVar2,"setupAvatarCoverMask"), (uVar5 & 1) != 0)) {

      FUN_002a2920(uVar2);

    }

  }

  _objc_release(uVar2);

  _objc_release(lVar1);

  return;

}




