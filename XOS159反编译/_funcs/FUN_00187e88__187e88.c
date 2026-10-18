// FUN_00187e88 @0x187e88


long FUN_00187e88(void)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined1 auVar4 [16];

  

  lVar1 = (*DAT_003e8d28)();

  FUN_00187694();

  if (((lVar1 != 0) && ((DAT_003e8d31 & 1) != 0)) && ((DAT_003e8d35 & 1) != 0)) {

    _objc_retain(lVar1);

    uVar3 = DAT_003e6e18;

    FUN_00297e40(lVar1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(uVar3);

    _objc_release(uVar2);

    FUN_00297e40(lVar1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0e0(0x4004000000000000);

    _objc_release(uVar3);

    FUN_00188558(1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar2 = FUN_00290a20();

    FUN_00297e40(lVar1);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0a0(auVar4._0_8_,auVar4._8_8_,uVar2);

    _objc_release(auVar4._0_8_);

    _objc_release(uVar3);

    FUN_0029d4a0(lVar1,extraout_x1,1);

    _objc_release(lVar1);

  }

  return lVar1;

}




