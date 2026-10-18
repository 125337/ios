// FUN_001a2190 @0x1a2190


void FUN_001a2190(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,

                 double param_5,long param_6,uint param_7,int param_8,uint param_9,uint param_10)



{

  bool bVar1;

  ulong *puVar2;

  ulong *puVar3;

  long *plVar4;

  uint uVar5;

  undefined *puVar6;

  bool bVar7;

  long lVar8;

  undefined8 uVar9;

  long lVar10;

  long lVar11;

  ulong uVar12;

  long lVar13;

  long lVar14;

  ulong uVar15;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  ulong uVar16;

  float fVar17;

  double dVar18;

  double dVar19;

  double dVar20;

  double dVar21;

  undefined1 auVar22 [16];

  

  dVar21 = param_3;

  _objc_retain();

  _objc_getAssociatedObject(param_6,PTR_LOOP_003e6f20);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5680(param_6);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  lVar10 = FUN_002a5fc0();

  _objc_release(uVar9);

  puVar3 = &DAT_003e9550;

  if (param_7 == 0) {

    puVar3 = &DAT_003e9560;

  }

  puVar2 = &DAT_003e9548;

  if (param_7 == 0) {

    puVar2 = &DAT_003e9558;

  }

  if (lVar10 != 2) {

    puVar3 = puVar2;

  }

  if ((param_8 == 0) || (uVar16 = *puVar3, uVar16 == 7)) {

    if (lVar8 != 0) {

      FUN_0029e8a0(lVar8,extraout_x1,1);

    }

    goto LAB_001a2694;

  }

  _objc_retain(param_6);

  _objc_getAssociatedObject(param_6,PTR_LOOP_003e6f20);

  lVar10 = _objc_retainAutoreleasedReturnValue();

  if (lVar10 == 0) {

    auVar22 = _objc_alloc_init(&_OBJC_CLASS___UIView);

    lVar10 = auVar22._0_8_;

    FUN_002a1c80(lVar10,auVar22._8_8_,0x135257c);

    FUN_002a23c0(lVar10,extraout_x1_01,0);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(lVar10,auVar22._8_8_,auVar22._0_8_);

    _objc_release(auVar22._0_8_);

    FUN_0029d4a0(lVar10,extraout_x1_02,0);

    _objc_setAssociatedObject(param_6,PTR_LOOP_003e6f20,lVar10,1);

    uVar9 = extraout_x1_03;

LAB_001a234c:

    FUN_00291380(param_6,uVar9,lVar10);

  }

  else {

    FUN_002a4880(lVar10);

    lVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar9 = extraout_x1_00;

    if (lVar11 != param_6) goto LAB_001a234c;

  }

  _objc_release(param_6);

  FUN_0029e8a0(lVar10,extraout_x1_04,0);

  FUN_002925a0(param_6);

  dVar18 = dVar21;

  _objc_getAssociatedObject(param_6,PTR_LOOP_003e6ea8);

  lVar11 = _objc_retainAutoreleasedReturnValue();

  if (((lVar11 == 0) || (uVar12 = FUN_002978a0(lVar11), (uVar12 & 1) != 0)) ||

     (FUN_002925a0(lVar11), dVar18 <= 0.0)) {

    if ((param_7 & 1) == 0) {

      dVar21 = (double)_CGRectGetMaxX(param_1,param_2,param_3,param_4);

      dVar18 = param_5 + 16.0;

      dVar21 = dVar21 + 60.0;

      uVar9 = extraout_x1_07;

    }

    else {

      dVar18 = (double)_CGRectGetMinX(param_1,param_2,param_3,param_4);

      dVar21 = param_5 + dVar21 + -16.0;

      dVar18 = dVar18 + -60.0;

      uVar9 = extraout_x1_06;

    }

  }

  else {

    FUN_00295600(lVar11);

    if ((param_7 & 1) == 0) {

      dVar21 = (double)_CGRectGetMaxX();

      dVar18 = param_5 + 16.0;

      uVar9 = extraout_x1_09;

    }

    else {

      dVar18 = (double)_CGRectGetMinX();

      dVar21 = param_5 + dVar21 + -16.0;

      uVar9 = extraout_x1_05;

    }

  }

  if (DAT_003e9588 != 0) {

    dVar18 = dVar18 - (double)DAT_003e9588;

    dVar21 = dVar21 + (double)DAT_003e9588;

  }

  dVar21 = dVar21 - dVar18;

  if (1.0 <= dVar21) {

    plVar4 = &DAT_003e95b0;

    if (param_7 == 0) {

      plVar4 = &DAT_003e95b8;

    }

    uVar5 = param_10 | param_7 | param_9 ^ 1;

    if (*plVar4 == 1) {

      if ((uVar5 & 1) == 0) {

        dVar20 = (double)_CGRectGetMinY(param_1,param_2,param_3,param_4);

LAB_001a250c:

        dVar19 = 6.5;

        goto LAB_001a252c;

      }

      dVar19 = (double)_CGRectGetMinY(param_1,param_2,param_3,param_4);

      dVar20 = dVar19 + -6.5;

      if (param_7 == 0 && param_9 == 0) {

        dVar20 = dVar19 + -6.5 + -2.0;

      }

    }

    else {

      if ((uVar5 & 1) != 0) {

        dVar20 = (double)_CGRectGetMaxY(param_1,param_2,param_3,param_4);

        goto LAB_001a250c;

      }

      dVar20 = (double)_CGRectGetMaxY(param_1,param_2,param_3,param_4);

      dVar19 = -6.5;

LAB_001a252c:

      dVar20 = dVar20 + dVar19;

    }

    dVar19 = (double)FUN_00190cb0(uVar16);

    FUN_0029e5e0(dVar18,dVar20 + dVar19 * -0.5,dVar21,lVar10);

    _objc_getAssociatedObject(param_6,PTR_LOOP_003e6f28);

    lVar13 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_6,PTR_LOOP_003e6f30);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    uVar12 = uVar16 & 0xffffffff | (ulong)DAT_003e9540 << 0x20;

    if (lVar13 == 0) {

      bVar7 = false;

      if (lVar14 != 0) goto LAB_001a25c4;

LAB_001a25e4:

      FUN_0018f404(dVar21,lVar10,uVar16,DAT_003e9538);

      puVar6 = PTR_LOOP_003e6f28;

      FUN_002994a0(&_OBJC_CLASS___NSNumber,extraout_x1_08,uVar12);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_6,puVar6,uVar9,1);

      _objc_release(uVar9);

      puVar6 = PTR_LOOP_003e6f30;

      FUN_002993a0(dVar21,&_OBJC_CLASS___NSNumber);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_6,puVar6,uVar9,1);

      _objc_release(uVar9);

    }

    else {

      uVar15 = FUN_002a5a40(lVar13);

      bVar7 = uVar15 == uVar12;

      if (lVar14 == 0) goto LAB_001a25e4;

LAB_001a25c4:

      fVar17 = (float)FUN_00295480(lVar14);

      bVar1 = false;

      if (ABS((double)fVar17 - dVar21) < 2.0) {

        bVar1 = bVar7;

      }

      if (!bVar1) goto LAB_001a25e4;

    }

    _objc_release(lVar14);

    _objc_release(lVar13);

  }

  else {

    FUN_0029e8a0(lVar10,uVar9,1);

  }

  _objc_release(lVar11);

  _objc_release(lVar10);

LAB_001a2694:

  _objc_release(lVar8);

  _objc_release(param_6);

  return;

}




