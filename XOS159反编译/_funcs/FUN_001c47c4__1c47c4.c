// FUN_001c47c4 @0x1c47c4


void FUN_001c47c4(void)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  

  FUN_001c487c();

  if ((DAT_003ea920 & 1) == 0) {

    if (DAT_003ea900 != 0) {

      FUN_0029e8a0(DAT_003ea900,extraout_x1,1);

      FUN_0029cb60(0,DAT_003ea900);

    }

    uVar2 = DAT_003ea910;

    DAT_003ea910 = 0;

    _objc_release(uVar2);

    return;

  }

  if ((DAT_003ea900 != 0) && (uVar1 = FUN_002978a0(), (uVar1 & 1) == 0)) {

    FUN_002a5020(DAT_003ea908);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = FUN_00297fa0();

    _objc_release(uVar2);

    if (lVar3 != 0) {

      FUN_001c4c74();

      return;

    }

  }

  return;

}




