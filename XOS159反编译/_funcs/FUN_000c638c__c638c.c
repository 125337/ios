// FUN_000c638c @0xc638c


void FUN_000c638c(long param_1)



{

  long lVar1;

  long lVar2;

  ulong uVar3;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    _objc_setAssociatedObject(lVar1,&DAT_003e7bf2,0,1);

    FUN_002a6520(lVar1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if ((lVar2 != 0) &&

       (uVar3 = _objc_opt_respondsToSelector(lVar1,"setupAvatarCoverMask"), (uVar3 & 1) != 0)) {

      FUN_002a2920(lVar1);

    }

  }

  _objc_release(lVar1);

  return;

}




