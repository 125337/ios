// FUN_000b528c @0xb528c


void FUN_000b528c(long param_1)



{

  int iVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  

  lVar2 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar2 != 0) {

    _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6598,0,1);

  }

  lVar3 = _objc_loadWeakRetained(param_1 + 0x28);

  if (lVar3 != 0) {

    FUN_002a6220(lVar3);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6520();

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar4);

    if (lVar5 != 0) {

      FUN_00295b80(lVar3);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if ((((lVar5 != 0) && (uVar6 = FUN_00297780(lVar5), (uVar6 & 1) == 0)) &&

          (uVar6 = FUN_00297b40(lVar5), (uVar6 & 1) == 0)) &&

         ((uVar6 = FUN_002976e0(lVar5), (uVar6 & 1) == 0 &&

          (iVar1 = FUN_000a6724(lVar3,lVar5), iVar1 != 0)))) {

        FUN_000a6870(lVar5);

      }

      _objc_release(lVar5);

    }

  }

  _objc_release(lVar3);

  _objc_release(lVar2);

  return;

}




