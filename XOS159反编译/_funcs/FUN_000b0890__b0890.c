// FUN_000b0890 @0xb0890


void FUN_000b0890(double param_1,double param_2,double param_3,double param_4,double param_5,

                 double param_6,double param_7,double param_8,long param_9,int param_10)



{

  bool bVar1;

  ulong *puVar2;

  ulong *puVar3;

  undefined *puVar4;

  bool bVar5;

  int iVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  ulong uVar11;

  long lVar12;

  long lVar13;

  ulong uVar14;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  ulong uVar15;

  float fVar16;

  double dVar17;

  double dVar18;

  undefined1 auVar19 [16];

  

  _objc_retain();

  _objc_getAssociatedObject(param_9,PTR_LOOP_003e6348);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  if ((DAT_003e74dd & 1) == 0) {

    if (lVar7 == 0) goto LAB_000b0cf0;

    auVar19 = FUN_002978a0(lVar7);

  }

  else {

    if ((0.0 < param_7) && (0.0 < param_8)) {

      FUN_002a5680(param_9);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      lVar9 = FUN_002a5fc0();

      _objc_release(uVar8);

      puVar3 = &DAT_003e74f0;

      if (param_10 == 0) {

        puVar3 = &DAT_003e7500;

      }

      puVar2 = &DAT_003e74e8;

      if (param_10 == 0) {

        puVar2 = &DAT_003e74f8;

      }

      if (lVar9 != 2) {

        puVar3 = puVar2;

      }

      if (DAT_003e7510 != 1) {

        param_3 = param_7 + -12.0;

      }

      param_3 = param_3 + (double)(DAT_003e7520 + DAT_003e7518);

      if (param_3 < 8.0) {

        if (lVar7 != 0) {

          auVar19 = FUN_002978a0(lVar7);

          if ((auVar19._0_8_ & 1) == 0) {

            FUN_0029e8a0(lVar7,auVar19._8_8_,1);

          }

        }

        goto LAB_000b0cf0;

      }

      uVar15 = *puVar3;

      dVar17 = (double)FUN_00190f00(uVar15);

      dVar18 = 1.0;

      if (0.5 <= dVar17) {

        dVar18 = dVar17;

      }

      _objc_retain(lVar7);

      lVar9 = lVar7;

      if (lVar7 == 0) {

        auVar19 = _objc_alloc_init(&_OBJC_CLASS___UIView);

        lVar9 = auVar19._0_8_;

        FUN_002a23c0(lVar9,auVar19._8_8_,0);

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        auVar19 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(lVar9,auVar19._8_8_,auVar19._0_8_);

        _objc_release(auVar19._0_8_);

        FUN_0029d4a0(lVar9,extraout_x1,0);

        _objc_setAssociatedObject(param_9,PTR_LOOP_003e6348,lVar9,1);

      }

      FUN_002a4880(lVar9);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar10 != param_9) {

        FUN_00291380(param_9,extraout_x1_00,lVar9);

      }

      iVar6 = FUN_002978a0(lVar9);

      if (iVar6 != 0) {

        FUN_0029e8a0(lVar9,extraout_x1_01,0);

      }

      FUN_00297e40(lVar9);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_002a2860(0x3ff0000000000000);

      _objc_release(uVar8);

      lVar12 = DAT_003e7518;

      lVar10 = DAT_003e7510;

      iVar6 = FUN_002249d4(param_9);

      FUN_00295600(lVar9);

      if (lVar10 != 1) {

        param_1 = param_5 + 6.0;

      }

      dVar17 = param_4 + param_6 + 6.0 + 3.0;

      if (iVar6 == 0) {

        dVar17 = param_2 + -3.0;

      }

      uVar11 = _CGRectEqualToRect();

      if ((uVar11 & 1) == 0) {

        FUN_00292180(&_OBJC_CLASS___CATransaction);

        FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_02,1);

        FUN_0029e5e0(param_1 - (double)lVar12,dVar17 + dVar18 * -0.5,param_3,dVar18,lVar9);

        FUN_002930a0(&_OBJC_CLASS___CATransaction);

      }

      _objc_getAssociatedObject(param_9,PTR_LOOP_003e6430);

      lVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_getAssociatedObject(param_9,PTR_LOOP_003e6438);

      lVar12 = _objc_retainAutoreleasedReturnValue();

      lVar13 = FUN_00190df0();

      uVar11 = (ulong)(uint)(DAT_003e74e0 << 0x10) | lVar13 << 0x20 | uVar15 & 0xffff;

      if (lVar10 == 0) {

        bVar5 = false;

        if (lVar12 != 0) goto LAB_000b0c34;

LAB_000b0c54:

        FUN_00190dfc(param_3,lVar9,uVar15);

        puVar4 = PTR_LOOP_003e6430;

        FUN_002994a0(&_OBJC_CLASS___NSNumber,extraout_x1_03,uVar11);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_9,puVar4,uVar8,1);

        _objc_release(uVar8);

        puVar4 = PTR_LOOP_003e6438;

        FUN_002993a0(param_3,&_OBJC_CLASS___NSNumber);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(param_9,puVar4,uVar8,1);

        _objc_release(uVar8);

      }

      else {

        uVar14 = FUN_002a5a40(lVar10);

        bVar5 = uVar14 == uVar11;

        if (lVar12 == 0) goto LAB_000b0c54;

LAB_000b0c34:

        fVar16 = (float)FUN_00295480(lVar12);

        bVar1 = false;

        if (ABS((double)fVar16 - param_3) < 2.0) {

          bVar1 = bVar5;

        }

        if (!bVar1) goto LAB_000b0c54;

      }

      _objc_release(lVar12);

      _objc_release(lVar10);

      _objc_release(lVar9);

      goto LAB_000b0cf0;

    }

    if (lVar7 == 0) goto LAB_000b0cf0;

    auVar19 = FUN_002978a0(lVar7);

  }

  if ((auVar19._0_8_ & 1) == 0) {

    FUN_0029e8a0(lVar7,auVar19._8_8_,1);

  }

LAB_000b0cf0:

  _objc_release(lVar7);

  _objc_release(param_9);

  return;

}




