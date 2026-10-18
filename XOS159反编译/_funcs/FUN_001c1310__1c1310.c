// FUN_001c1310 @0x1c1310


void FUN_001c1310(long param_1)



{

  long lVar1;

  int iVar2;

  long lVar3;

  ulong uVar4;

  undefined1 auVar5 [16];

  

  if ((*(long *)(param_1 + 0x20) == DAT_003e97b8) && (iVar2 = FUN_001c0f98(), iVar2 != 0)) {

    if (DAT_003e97a8 == 0) {

      auVar5 = _objc_alloc(&_OBJC_CLASS___UIImpactFeedbackGenerator);

      lVar3 = FUN_00296ea0(auVar5._0_8_,auVar5._8_8_,2);

      lVar1 = DAT_003e97a8;

      DAT_003e97a8 = lVar3;

      _objc_release(lVar1);

    }

    uVar4 = _objc_opt_respondsToSelector(DAT_003e97a8,"impactOccurredWithIntensity:");

    if ((uVar4 & 1) == 0) {

      FUN_00296680(DAT_003e97a8);

    }

    else {

      FUN_002966a0(*(undefined8 *)(param_1 + 0x28));

    }

    FUN_0029a1e0(DAT_003e97a8);

    return;

  }

  return;

}




