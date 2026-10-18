// FUN_000b30dc @0xb30dc


bool FUN_000b30dc(long param_1,long param_2)



{

  ulong uVar1;

  long lVar2;

  undefined8 extraout_x1;

  long lVar3;

  bool bVar4;

  double dVar5;

  

  _objc_retain();

  _objc_retain(param_2);

  bVar4 = false;

  if (((param_1 != param_2) && (param_1 != 0)) && (param_2 != 0)) {

    uVar1 = FUN_00297700(param_1,extraout_x1,param_2);

    if ((uVar1 & 1) == 0) {

      bVar4 = false;

    }

    else {

      _objc_retain(param_1);

      lVar3 = param_1;

      do {

        uVar1 = FUN_002978a0(lVar3);

        if (((uVar1 & 1) != 0) || (dVar5 = (double)FUN_002916a0(lVar3), dVar5 <= 0.01)) {

          bVar4 = false;

          lVar2 = lVar3;

          goto LAB_000b31b4;

        }

        FUN_002a4880(lVar3);

        lVar2 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar3);

      } while ((lVar2 != 0) && (lVar3 = lVar2, lVar2 != param_2));

      if ((lVar2 == param_2) && (uVar1 = FUN_002978a0(param_2), (uVar1 & 1) == 0)) {

        dVar5 = (double)FUN_002916a0(param_2);

        bVar4 = 0.01 < dVar5;

      }

      else {

        bVar4 = false;

      }

LAB_000b31b4:

      _objc_release(lVar2);

    }

  }

  _objc_release(param_2);

  _objc_release(param_1);

  return bVar4;

}




