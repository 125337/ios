// FUN_001510f4 @0x1510f4


void FUN_001510f4(undefined8 param_1)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  

  iVar1 = FUN_001482b0();

  if ((iVar1 != 0) && (iVar1 = FUN_00297b80(param_1), iVar1 != 0)) {

    FUN_002a6220(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6520();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar2);

    if ((lVar3 != 0) && (DAT_003e8828 != 0)) {

      FUN_002a4880();

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar3 != 0) {

        FUN_00139ff0();

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if ((lVar3 != 0) && (lVar4 = FUN_00293860(lVar3), lVar4 != 0)) {

          FUN_00159718();

          uVar2 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4b60(&_OBJC_CLASS___UIColor);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_00159784(DAT_003e8828,lVar3,uVar2,uVar5);

          _objc_release(uVar5);

          _objc_release(uVar2);

        }

        _objc_release(lVar3);

        return;

      }

    }

  }

  return;

}




