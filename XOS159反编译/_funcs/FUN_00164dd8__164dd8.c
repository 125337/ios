// FUN_00164dd8 @0x164dd8


void FUN_00164dd8(double param_1,long param_2)



{

  double dVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  ulong uVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  float fVar8;

  float fVar9;

  double dVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  double dVar13;

  double dVar14;

  double dVar15;

  double dVar16;

  double dVar17;

  undefined1 auVar18 [16];

  undefined8 local_c0;

  undefined8 uStack_b8;

  undefined8 uStack_b0;

  undefined8 uStack_a8;

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 local_90;

  undefined8 uStack_88;

  undefined8 uStack_80;

  undefined8 uStack_78;

  undefined8 local_70;

  undefined8 uStack_68;

  

  _objc_retain();

  if (param_2 == 0) {

    lVar2 = 0;

    goto LAB_001650ac;

  }

  FUN_00155de0();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

LAB_00164f94:

    dVar17 = (double)FUN_00147ed8();

  }

  else {

    FUN_00155eb4(lVar2);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar18._8_8_;

    lVar3 = auVar18._0_8_;

    if (lVar3 == 0) {

LAB_00164edc:

      FUN_00299540(lVar2,uVar5,&cf_contentScale);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      uVar5 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

      uVar6 = _objc_opt_isKindOfClass(lVar7,uVar5);

      if ((uVar6 & 1) == 0) {

        uVar5 = _objc_opt_class(&_OBJC_CLASS___NSString);

        uVar6 = _objc_opt_isKindOfClass(lVar7,uVar5);

        if ((uVar6 & 1) == 0) {

          _objc_release(lVar7);

          _objc_release(lVar3);

          goto LAB_00164f94;

        }

      }

      fVar8 = (float)FUN_00295480(lVar7);

    }

    else {

      FUN_00299540(lVar3,uVar5,&cf_Q___>e);

      auVar18 = _objc_retainAutoreleasedReturnValue();

      lVar4 = auVar18._0_8_;

      if (lVar4 == 0) {

        FUN_00299540(lVar3,auVar18._8_8_,&cf_contentScale);

        lVar7 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        _objc_retain(lVar4);

        lVar7 = lVar4;

      }

      _objc_release(lVar4);

      uVar5 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

      uVar6 = _objc_opt_isKindOfClass(lVar7,uVar5);

      if ((uVar6 & 1) == 0) {

        uVar5 = _objc_opt_class(&_OBJC_CLASS___NSString);

        uVar6 = _objc_opt_isKindOfClass(lVar7,uVar5);

        if ((uVar6 & 1) == 0) {

          _objc_release(lVar7);

          uVar5 = extraout_x1;

          goto LAB_00164edc;

        }

      }

      fVar8 = (float)FUN_00295480(lVar7);

    }

    dVar17 = 1.0;

    if (0.0 < fVar8) {

      fVar9 = 50.0;

      if (50.0 < fVar8) {

        fVar9 = fVar8;

      }

      dVar17 = 150.0;

      if ((double)fVar9 <= 150.0) {

        dVar17 = (double)fVar9;

      }

      dVar17 = dVar17 / 100.0;

    }

    _objc_release(lVar7);

    _objc_release(lVar3);

  }

  _objc_release(lVar2);

  if (0.001 <= ABS(dVar17 + -1.0)) {

    dVar10 = (double)FUN_00136804();

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar12 = 0;

    dVar13 = param_1;

    dVar14 = dVar10;

    lVar2 = FUN_00296b80(0,0);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(lVar2,auVar18._8_8_,auVar18._0_8_);

    _objc_release(auVar18._0_8_);

    FUN_0029d4a0(lVar2,extraout_x1_00,1);

    uVar11 = FUN_002925a0(param_2);

    dVar16 = (double)NEON_fminnm(dVar13,dVar14);

    uVar5 = 0;

    if (0.0 < dVar16) {

      uVar5 = uVar11;

    }

    dVar15 = dVar10;

    dVar1 = param_1;

    uVar11 = 0;

    if (0.0 < dVar16) {

      dVar15 = dVar14;

      dVar1 = dVar13;

      uVar11 = uVar12;

    }

    FUN_0029d140(uVar5,uVar11,dVar1,dVar15,param_2);

    FUN_0029d320(param_1 * 0.5,dVar10 * 0.5,param_2);

    _CGAffineTransformMakeScale(&local_90,dVar17,dVar17);

    uStack_b8 = uStack_88;

    local_c0 = local_90;

    uStack_a8 = uStack_78;

    uStack_b0 = uStack_80;

    uStack_98 = uStack_68;

    local_a0 = local_70;

    FUN_002a21c0(param_2,extraout_x1_01,&local_c0);

    FUN_00291380(lVar2,extraout_x1_02,param_2);

  }

  else {

    _objc_retain(param_2);

    lVar2 = param_2;

  }

LAB_001650ac:

  _objc_release(param_2);

  _objc_autoreleaseReturnValue(lVar2);

  return;

}




