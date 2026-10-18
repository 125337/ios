// FUN_0022da28 @0x22da28


void FUN_0022da28(long param_1)



{

  ulong uVar1;

  long lVar2;

  long lVar3;

  

  _objc_retain();

  if (((DAT_003eaf98 == '\x01') && ((DAT_003eafb0 & 1) != 0)) &&

     (uVar1 = FUN_00084e3c(), (uVar1 & 1) == 0)) {

    _objc_retain(param_1);

    if (param_1 != 0) {

      FUN_002a4880(param_1);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      while (lVar2 != 0) {

        uVar1 = _objc_opt_respondsToSelector(lVar2,"viewModel");

        if ((uVar1 & 1) != 0) {

          _objc_release(param_1);

          FUN_00225690(lVar2,param_1);

          goto LAB_0022dad0;

        }

        FUN_002a4880(lVar2);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar2);

        lVar2 = lVar3;

      }

    }

    _objc_release(param_1);

    lVar2 = 0;

LAB_0022dad0:

    _objc_release(lVar2);

  }

  _objc_release(param_1);

  return;

}




