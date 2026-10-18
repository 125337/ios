// FUN_000c3b4c @0xc3b4c


void FUN_000c3b4c(undefined8 param_1)



{

  byte *pbVar1;

  byte *pbVar2;

  undefined1 auVar3 [16];

  byte bVar4;

  int iVar5;

  int iVar6;

  ulong uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  undefined8 extraout_x1;

  undefined1 auVar12 [16];

  

  (*DAT_003e7bd8)();

  uVar7 = FUN_000a8840(param_1);

  if (((uVar7 & 1) != 0) || (iVar5 = FUN_000a89d8(), iVar5 == 0)) {

    return;

  }

  FUN_000828e0();

  FUN_002959c0(param_1);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6280(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(uVar9,PTR_LOOP_003e5ce0);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  bVar4 = FUN_002924e0();

  _objc_release(uVar10);

  uVar7 = _objc_opt_respondsToSelector(uVar9,"isSender");

  if ((uVar7 & 1) == 0) {

    iVar5 = 0;

  }

  else {

    iVar5 = FUN_00297a80(uVar9);

  }

  auVar12 = _objc_opt_respondsToSelector(uVar9,"messageWrap");

  if ((auVar12._0_8_ & 1) == 0) {

    auVar3._8_8_ = 0;

    auVar3._0_8_ = auVar12._8_8_;

    auVar12 = auVar3 << 0x40;

  }

  else {

    FUN_00298ce0(uVar9);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    lVar11 = auVar12._0_8_;

    if (lVar11 != 0) {

      iVar6 = FUN_000a8a64(lVar11);

      auVar12._8_8_ = extraout_x1;

      auVar12._0_8_ = lVar11;

      goto LAB_000c3c60;

    }

  }

  iVar6 = 0;

LAB_000c3c60:

  pbVar1 = &DAT_003e7a29;

  pbVar2 = &DAT_003e7a28;

  if (iVar5 == 0) {

    pbVar1 = &DAT_003e7a2b;

    pbVar2 = &DAT_003e7a2a;

  }

  if (iVar6 == 0) {

    pbVar2 = pbVar1;

  }

  FUN_0029e8a0(uVar8,auVar12._8_8_,(bVar4 | *pbVar2) & 1);

  _objc_release(auVar12._0_8_);

  _objc_release(uVar9);

  _objc_release(uVar8);

  return;

}




