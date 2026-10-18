// FUN_000b5964 @0xb5964


void FUN_000b5964(undefined1 param_1 [16],double param_2,long param_3)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  long lVar5;

  

  lVar1 = _objc_loadWeakRetained(param_3 + 0x20);

  if (lVar1 != 0) {

    FUN_002a6220(lVar1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6520();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar2);

    if (((lVar3 != 0) && ((DAT_003e7a2e & 1) == 0)) && ((DAT_003e7a2f & 1) == 0)) {

      FUN_00295b80(lVar1);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

        uVar4 = _objc_opt_isKindOfClass(lVar3,uVar2);

        if ((uVar4 & 1) != 0) {

          FUN_002935e0(lVar3);

          lVar5 = _objc_loadWeakRetained(param_3 + 0x28);

          if (((lVar5 == 0) || (lVar3 != lVar5)) || (*(double *)(param_3 + 0x30) - param_2 <= 50.0))

          {

            FUN_000a6870(lVar3);

          }

          _objc_release(lVar5);

        }

      }

      _objc_release(lVar3);

    }

  }

  _objc_release(lVar1);

  return;

}




