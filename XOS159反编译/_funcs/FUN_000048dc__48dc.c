// FUN_000048dc @0x48dc


ulong FUN_000048dc(long param_1)



{

  uint uVar1;

  undefined8 uVar2;

  long lVar3;

  ulong uVar4;

  byte local_31;

  

  _objc_retain();

  if (param_1 == 0) {

    uVar4 = 0;

  }

  else {

    FUN_000049c8(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(param_1);

    _objc_getAssociatedObject(uVar2,PTR_LOOP_003e5cd0);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) {

      local_31 = 0;

      uVar1 = FUN_00004aa4(uVar2,&local_31,0);

      uVar4 = (ulong)(uVar1 & local_31);

    }

    else {

      uVar4 = FUN_002924e0(lVar3);

    }

    _objc_release(lVar3);

    _objc_release(uVar2);

  }

  return uVar4;

}




