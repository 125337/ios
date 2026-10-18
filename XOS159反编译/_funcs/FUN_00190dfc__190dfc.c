// FUN_00190dfc @0x190dfc


void FUN_00190dfc(undefined8 param_1,long param_2,ulong param_3)



{

  bool bVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  

  _objc_retain();

  if (param_2 != 0) {

    bVar1 = param_3 < 10;

    if (9 < (long)param_3) {

      FUN_001aaf74();

      uVar2 = _objc_retainAutoreleasedReturnValue();

      lVar3 = FUN_00293860();

      bVar1 = (long)(param_3 - 10) < lVar3;

      _objc_release(uVar2);

    }

    lVar3 = DAT_003e9538;

    if (!bVar1) {

      param_3 = 0;

    }

    lVar4 = DAT_003e9538;

    if (DAT_003e9538 == 0) {

      FUN_00295d00(&_OBJC_CLASS___UIColor);

      lVar4 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0018f404(param_1,param_2,param_3,lVar4);

    if (lVar3 == 0) {

      _objc_release(lVar4);

    }

  }

  _objc_release(param_2);

  return;

}




