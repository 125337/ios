// FUN_000b2180 @0xb2180


bool FUN_000b2180(long param_1,double *param_2,byte *param_3)



{

  byte *pbVar1;

  byte *pbVar2;

  double *pdVar3;

  byte bVar4;

  byte bVar5;

  int iVar6;

  uint uVar7;

  uint uVar8;

  ulong uVar9;

  undefined8 uVar10;

  long lVar11;

  undefined8 uVar12;

  bool bVar13;

  int iVar14;

  double dVar15;

  double dVar16;

  

  _objc_retain();

  if ((param_1 == 0) || (uVar9 = FUN_000a89d8(), (uVar9 & 1) == 0)) {

    bVar13 = false;

    goto LAB_000b2358;

  }

  FUN_000828e0();

  FUN_000839f4(param_1);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_000856e8();

  lVar11 = _objc_retainAutoreleasedReturnValue();

  if (lVar11 == 0) {

LAB_000b2228:

    bVar13 = false;

  }

  else {

    iVar6 = FUN_00298760(lVar11);

    _objc_release(lVar11);

    if (iVar6 != 0x22) goto LAB_000b2228;

    uVar9 = _objc_opt_respondsToSelector(uVar10,"isSender");

    if ((uVar9 & 1) == 0) {

      uVar12 = 0;

    }

    else {

      uVar12 = FUN_00297a80(uVar10);

    }

    FUN_000856e8(uVar10);

    lVar11 = _objc_retainAutoreleasedReturnValue();

    if (lVar11 == 0) {

      iVar6 = 0;

    }

    else {

      iVar6 = FUN_000a8a64(lVar11);

    }

    iVar14 = (int)uVar12;

    pbVar2 = &DAT_003e7a28;

    if (iVar14 == 0) {

      pbVar2 = &DAT_003e7a2a;

    }

    pbVar1 = &DAT_003e7a29;

    if (iVar14 == 0) {

      pbVar1 = &DAT_003e7a2b;

    }

    if (iVar6 == 0) {

      pbVar2 = pbVar1;

    }

    bVar4 = *pbVar2;

    uVar7 = FUN_000048dc(uVar10);

    uVar8 = FUN_00004f4c(uVar10);

    if (((uVar7 | uVar8 ^ 0xffffffff) & 1) == 0) {

      bVar5 = FUN_00192218(uVar12);

      bVar5 = bVar5 ^ 1;

    }

    else {

      bVar5 = 0;

    }

    pdVar3 = (double *)&DAT_003e7b28;

    if (iVar14 == 0) {

      pdVar3 = (double *)&DAT_003e7b30;

    }

    dVar15 = *pdVar3;

    if (((bVar5 | bVar4) & 1) == 0) {

      dVar15 = *pdVar3 + -46.0;

    }

    dVar16 = dVar15;

    if (iVar14 == 0) {

      dVar16 = -dVar15;

    }

    *param_2 = dVar16;

    *param_3 = ((bVar5 | bVar4 | ABS(dVar15) <= 0.001) ^ 0xff) & 1;

    bVar13 = 0.001 < ABS(dVar15);

    _objc_release(lVar11);

  }

  _objc_release(uVar10);

LAB_000b2358:

  _objc_release(param_1);

  return bVar13;

}




