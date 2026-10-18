// FUN_000b9e0c @0xb9e0c


void FUN_000b9e0c(long param_1)



{

  int iVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  

  lVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  if (lVar2 != 0) {

    FUN_002a6520(lVar2);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar3 != 0) {

      _objc_getAssociatedObject(lVar2,PTR_LOOP_003e65e8);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      lVar3 = FUN_002a5a20();

      lVar6 = *(long *)(param_1 + 0x30);

      _objc_release(uVar4);

      if (((lVar3 == lVar6) &&

          (iVar1 = FUN_000b4368(lVar2,*(undefined8 *)(param_1 + 0x20),

                                *(undefined4 *)(param_1 + 0x38)), iVar1 != 0)) &&

         (uVar5 = FUN_000b83fc(lVar2), (uVar5 & 1) == 0)) {

        _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6308,0,1);

        _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6328,0,1);

        FUN_0029ff40(lVar2);

        FUN_00297ee0(lVar2);

        FUN_000b7b78(lVar2);

      }

    }

  }

  _objc_release(lVar2);

  return;

}




