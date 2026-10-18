// FUN_00222e50 @0x222e50


void FUN_00222e50(long param_1)



{

  int iVar1;

  long lVar2;

  long lVar3;

  

  lVar2 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar2 != 0) {

    _objc_getAssociatedObject(lVar2,&DAT_003eae52);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if ((lVar3 != 0) && (iVar1 = FUN_00294ea0(lVar3), iVar1 != 0)) {

      FUN_00222ee8(lVar2,0);

    }

    _objc_release(lVar3);

  }

  _objc_release(lVar2);

  return;

}




