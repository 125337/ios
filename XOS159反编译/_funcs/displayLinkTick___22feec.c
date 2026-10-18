// displayLinkTick: @0x22feec


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

/* Function Stack Size: 0x18 bytes */



void XZYHighRefreshDriver::displayLinkTick_(ID param_1,SEL param_2,ID param_3)



{

  char cVar1;

  bool bVar2;

  bool bVar3;

  long lVar4;

  ulong uVar5;

  uint uVar6;

  double dVar7;

  double dVar8;

  double dVar9;

  undefined1 auVar10 [16];

  char local_72;

  char local_71;

  

  _objc_retain(param_3);

  _DAT_003eb0f0 = _DAT_003eb0f0 + 1;

  _objc_retain(param_3);

  if ((DAT_003eb0e9 & 1) == 0) {

    DAT_003eb140 = 0;

    DAT_003eb138 = 0.0;

    DAT_003eb148 = 0;

    DAT_003eb150 = '\0';

    DAT_003e7248 = 0xffffffffffffffff;

    DAT_003eb151 = 0;

    DAT_003eb130 = 0.0;

    goto LAB_00230160;

  }

  dVar7 = (double)FUN_002a52e0(param_3);

  if (dVar7 <= 0.0) {

    dVar7 = (double)_CACurrentMediaTime();

  }

  else {

    dVar7 = (double)FUN_002a52e0(param_3);

  }

  if (DAT_003eb0d0 == 0) {

LAB_0022ffd0:

    bVar2 = false;

    bVar3 = false;

    if (0.0 < DAT_003eb130) {

      bVar2 = false;

      bVar3 = true;

      if (!NAN(dVar7 - DAT_003eb130)) {

        bVar2 = dVar7 - DAT_003eb130 < 0.5;

        bVar3 = false;

      }

    }

    if (bVar2 == bVar3) {

      FUN_0022ef28();

    }

  }

  else {

    FUN_002a6520(DAT_003eb0c8);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 == 0) goto LAB_0022ffd0;

  }

  if (DAT_003eb0d0 == 0) goto LAB_00230160;

  if (DAT_003eb138 <= 0.0) {

    DAT_003eb140 = 0;

    local_71 = '\0';

    DAT_003eb138 = dVar7;

    DAT_003eb148 = FUN_00230f38(&local_71);

    if (local_71 == '\0') {

      DAT_003eb148 = 0;

    }

    DAT_003eb150 = local_71;

    goto LAB_00230160;

  }

  DAT_003eb140 = DAT_003eb140 + 1;

  dVar8 = dVar7 - DAT_003eb138;

  if (dVar8 < 0.5) goto LAB_00230160;

  local_72 = '\0';

  uVar5 = FUN_00230f38(&local_72);

  cVar1 = local_72;

  if (local_72 == '\x01') {

    dVar9 = 0.0;

    if (DAT_003eb150 == '\x01') {

      lVar4 = 0;

      if (DAT_003eb148 <= uVar5) {

        lVar4 = uVar5 - DAT_003eb148;

      }

      uVar6 = 0;

      if (DAT_003eb148 <= uVar5 && uVar5 - DAT_003eb148 != 0) {

        uVar6 = (uint)DAT_003eb151;

      }

      dVar9 = (double)(lVar4 - (ulong)uVar6);

      goto LAB_002300c0;

    }

  }

  else {

    uVar5 = 0;

    dVar9 = (double)NEON_ucvtf(DAT_003eb140);

LAB_002300c0:

    dVar9 = dVar9 / dVar8;

  }

  DAT_003eb151 = 0;

  DAT_003eb150 = local_72;

  DAT_003eb148 = uVar5;

  auVar10 = FUN_00230eb8();

  dVar8 = (double)auVar10._0_8_;

  if (dVar9 <= (double)auVar10._0_8_) {

    dVar8 = dVar9;

  }

  uVar5 = (long)(dVar8 + 0.5) & ((long)(dVar8 + 0.5) >> 0x3f ^ 0xffffffffffffffffU);

  if (uVar5 != DAT_003e7248) {

    DAT_003e7248 = uVar5;

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar10._8_8_,&cf__ldFPS);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(DAT_003eb0d0,auVar10._8_8_,auVar10._0_8_);

    _objc_release(auVar10._0_8_);

    if (cVar1 != '\0') {

      DAT_003eb151 = 1;

    }

    FUN_00230a74();

  }

  DAT_003eb140 = 0;

  DAT_003eb138 = dVar7;

LAB_00230160:

  _objc_release(param_3);

  if ((_DAT_003eb0f0 & 0x7f) == 0) {

    FUN_0022fde4(param_3);

    FUN_0022fa5c();

    FUN_0022ef28();

  }

  _objc_release(param_3);

  return;

}




