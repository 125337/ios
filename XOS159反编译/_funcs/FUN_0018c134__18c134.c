// FUN_0018c134 @0x18c134


void FUN_0018c134(void)



{

  undefined8 *puVar1;

  undefined8 uVar2;

  uint uVar3;

  long lVar4;

  long lVar5;

  

  uVar3 = FUN_001331c4();

  if (DAT_003e8dba != '\x01' || DAT_003e8e18 != uVar3) {

    DAT_003e8dba = 1;

    DAT_003e8e18 = (byte)uVar3;

    puVar1 = &DAT_003e8d78;

    if (uVar3 == 0) {

      puVar1 = &DAT_003e8d70;

    }

    FUN_0018c2d4(*puVar1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) {

      FUN_00292400(&_OBJC_CLASS___UIColor);

      lVar5 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar4);

      lVar5 = lVar4;

    }

    uVar2 = DAT_003e8da0;

    DAT_003e8da0 = lVar5;

    _objc_release(uVar2);

    _objc_release(lVar4);

    puVar1 = &DAT_003e8d88;

    if (uVar3 == 0) {

      puVar1 = &DAT_003e8d80;

    }

    FUN_0018c2d4(*puVar1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) {

      FUN_00292400(&_OBJC_CLASS___UIColor);

      lVar5 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar4);

      lVar5 = lVar4;

    }

    uVar2 = DAT_003e8da8;

    DAT_003e8da8 = lVar5;

    _objc_release(uVar2);

    _objc_release(lVar4);

    puVar1 = &DAT_003e8d98;

    if (uVar3 == 0) {

      puVar1 = &DAT_003e8d90;

    }

    FUN_0018c2d4(*puVar1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) {

      FUN_00292400(&_OBJC_CLASS___UIColor);

      lVar5 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar4);

      lVar5 = lVar4;

    }

    uVar2 = DAT_003e8db0;

    DAT_003e8db0 = lVar5;

    _objc_release(uVar2);

    _objc_release(lVar4);

    return;

  }

  return;

}




