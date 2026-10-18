// FUN_000c7ee4 @0xc7ee4


void FUN_000c7ee4(undefined8 param_1)



{

  long lVar1;

  ulong uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e66a8);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  lVar1 = auVar3._0_8_;

  if (lVar1 == 0) {

    if ((DAT_003e7d19 & 1) == 0) {

      FUN_000c6fa8();

    }

    if (((DAT_003e7d10 != '\x01') || ((DAT_003e7d18 & 1) == 0)) ||

       (uVar2 = FUN_000c8110(param_1), (uVar2 & 1) == 0)) goto LAB_000c7f8c;

    FUN_002a5060(param_1);

    auVar3 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_002a1da0(param_1,auVar3._8_8_,auVar3._0_8_);

  if (lVar1 == 0) {

    _objc_release(auVar3._0_8_);

  }

LAB_000c7f8c:

  _objc_release(lVar1);

  _objc_release(param_1);

  return;

}




