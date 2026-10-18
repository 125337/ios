// FUN_000b921c @0xb921c


ulong FUN_000b921c(undefined8 param_1)



{

  ulong uVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  byte local_49;

  double local_48;

  

  _objc_retain();

  FUN_000839f4(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    uVar6 = 0;

  }

  else {

    _objc_getAssociatedObject(lVar3,PTR_LOOP_003e5cc8);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_002924e0();

    _objc_release(uVar4);

    uVar6 = 3;

    if (iVar2 == 0) {

      uVar6 = 1;

    }

    _objc_getAssociatedObject(lVar3,PTR_LOOP_003e5cc0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_002924e0();

    _objc_release(uVar4);

    uVar1 = uVar6 | 4;

    if (iVar2 == 0) {

      uVar1 = uVar6;

    }

    _objc_getAssociatedObject(lVar3,PTR_LOOP_003e6478);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_002924e0();

    _objc_release(uVar4);

    uVar6 = uVar1 | 8;

    if (iVar2 == 0) {

      uVar6 = uVar1;

    }

    _objc_getAssociatedObject(lVar3,PTR_LOOP_003e5ce0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_002924e0();

    _objc_release(uVar4);

    uVar1 = uVar6 | 0x10;

    if (iVar2 == 0) {

      uVar1 = uVar6;

    }

    _objc_getAssociatedObject(lVar3,PTR_LOOP_003e5cd0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_002924e0();

    _objc_release(uVar4);

    uVar6 = uVar1 | 0x20;

    if (iVar2 == 0) {

      uVar6 = uVar1;

    }

    _objc_getAssociatedObject(lVar3,PTR_LOOP_003e6480);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_002924e0();

    _objc_release(uVar4);

    uVar1 = uVar6 | 0x1000000;

    if (iVar2 == 0) {

      uVar1 = uVar6;

    }

    _objc_getAssociatedObject(lVar3,PTR_LOOP_003e6498);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    iVar2 = FUN_002924e0();

    _objc_release(uVar4);

    uVar6 = uVar1 | 0x2000000;

    if (iVar2 == 0) {

      uVar6 = uVar1;

    }

    _objc_getAssociatedObject(lVar3,PTR_LOOP_003e64b0);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar5 = FUN_00297fa0();

    if (lVar5 != 0) {

      lVar5 = FUN_00295fe0(uVar4);

      uVar6 = lVar5 * 0x9e3779b1 ^ uVar6;

    }

    _objc_getAssociatedObject(lVar3,PTR_LOOP_003e64a0);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 != 0) {

      iVar2 = FUN_002924e0(lVar5);

      uVar1 = 0x40000000;

      if (iVar2 == 0) {

        uVar1 = 0x20000000;

      }

      uVar6 = uVar1 ^ uVar6;

    }

    local_48 = 0.0;

    local_49 = 0;

    FUN_000b2180(param_1,&local_48,&local_49);

    uVar6 = ((long)(local_48 * 4.0) & 0xffffU) << 8 ^ uVar6 | (ulong)local_49 << 6;

    _objc_release(lVar5);

    _objc_release(uVar4);

  }

  _objc_release(lVar3);

  _objc_release(param_1);

  return uVar6;

}




