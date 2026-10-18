// FUN_001836f8 @0x1836f8


void FUN_001836f8(void)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar4 [16];

  

  if (DAT_003e8a58 == 0) {

    _objc_alloc(&_OBJC_CLASS___UIView);

    lVar1 = FUN_00296b80(0,0,0x3ff0000000000000,0x3ff0000000000000);

    lVar3 = DAT_003e8a58;

    DAT_003e8a58 = lVar1;

    _objc_release(lVar3);

    FUN_0029e8a0(DAT_003e8a58,extraout_x1,1);

    FUN_002a23c0(DAT_003e8a58,extraout_x1_00,0);

    FUN_00297e40(DAT_003e8a58);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a2860(0xc0c3880000000000);

    _objc_release(uVar2);

  }

  FUN_002a4880(DAT_003e8a58);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 != 0) {

    return;

  }

  FUN_00182fa0();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  lVar3 = auVar4._0_8_;

  if (lVar3 != 0) {

    FUN_00291380(lVar3,auVar4._8_8_,DAT_003e8a58);

  }

  _objc_release(lVar3);

  return;

}




