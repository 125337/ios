// aabEditor_preview @0x1b07f4


/* Function Stack Size: 0x10 bytes */



void AABCustomDashStyleEditorViewController::aabEditor_preview(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  cfstringStruct *pcVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  ulong uVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  double dVar11;

  double dVar12;

  double dVar13;

  double in_d2;

  double in_d3;

  double dVar14;

  undefined1 auVar15 [16];

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined8 uStack_90;

  undefined8 uStack_88;

  undefined8 local_80;

  undefined8 uStack_78;

  

  iVar2 = FUN_0029a840();

  if (iVar2 != 0) {

    FUN_00290d40(param_1);

    return;

  }

  dVar11 = (double)_CACurrentMediaTime();

  dVar12 = (double)FUN_00297dc0(param_1);

  if (dVar11 - dVar12 < 0.3) {

    return;

  }

  FUN_0029f2c0(dVar11,param_1);

  FUN_00290d00(param_1);

  FUN_00292ec0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &::cf___;

  if (pcVar4 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar4;

  }

  _objc_retain(pcVar1);

  _objc_release(pcVar4);

  _objc_release(uVar3);

  FUN_0029a780(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  dVar11 = in_d2;

  _objc_release(uVar3);

  FUN_0029a780(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  _objc_release(uVar3);

  if (in_d2 < 1.0) {

    FUN_002a6220(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    _objc_release(uVar3);

    in_d2 = dVar11;

  }

  dVar11 = 240.0;

  if (1.0 <= in_d3) {

    dVar11 = in_d3;

  }

  dVar12 = 200.0;

  if (1.0 <= in_d2 + -32.0) {

    dVar12 = in_d2 + -32.0;

  }

  FUN_001b0da4(pcVar1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  lVar5 = auVar15._0_8_;

  if (lVar5 == 0) {

    dVar13 = (double)FUN_001abc7c(pcVar1);

    dVar14 = 1.0;

    if (1.0 <= dVar13) {

      dVar14 = dVar13;

    }

    lVar6 = FUN_00298060(param_1);

    if (lVar6 == 2) {

      dVar12 = 60.0;

      if (60.0 <= dVar11 * 0.7) {

        dVar12 = dVar11 * 0.7;

      }

      dVar13 = 8.0;

      if (4.0 <= dVar14) {

        dVar13 = dVar14;

      }

      FUN_0029a860(param_1);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

      local_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

      uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

      local_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

      FUN_002a21c0(auVar15._0_8_,auVar15._8_8_,&local_a0);

      _objc_release(auVar15._0_8_);

      FUN_0029a860(param_1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e5e0((in_d2 - dVar13) * 0.5,(dVar11 - dVar12) * 0.5,dVar13,dVar12);

      _objc_release(uVar3);

      FUN_0029a860(param_1);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00297c40(&_OBJC_CLASS___UIColor);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_retain(lVar6);

      _objc_retain(pcVar1);

      _objc_retain(lVar7);

      if (lVar6 == 0) {

LAB_001b0c64:

        uVar9 = 0;

      }

      else {

        auVar15 = FUN_00297fa0(pcVar1);

        if (auVar15._0_8_ == 0) goto LAB_001b0c64;

        FUN_00299380(&_OBJC_CLASS___NSNumber,auVar15._8_8_,1);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        FUN_001ab5d4(dVar12,pcVar1,&local_a0,uVar3);

        lVar8 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar3);

        uVar3 = local_a0;

        if (lVar8 == 0) {

          uVar9 = 0;

        }

        else if (lVar7 == 0) {

          FUN_00295d00(&_OBJC_CLASS___UIColor);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          uVar9 = FUN_001ac2b0(dVar12,uVar3,lVar6,lVar8,uVar10,1);

          _objc_release(uVar10);

        }

        else {

          uVar9 = FUN_001ac2b0(dVar12,local_a0,lVar6,lVar8,lVar7,1);

        }

        _objc_release(lVar8);

      }

      _objc_release(lVar7);

      _objc_release(pcVar1);

      _objc_release(lVar6);

    }

    else {

      FUN_0029a860(param_1);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

      local_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

      uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

      local_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

      FUN_002a21c0(auVar15._0_8_,auVar15._8_8_,&local_a0);

      _objc_release(auVar15._0_8_);

      FUN_0029a860(param_1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e5e0(0x4030000000000000,(dVar11 - dVar14) * 0.5,dVar12,dVar14);

      _objc_release(uVar3);

      FUN_0029a860(param_1);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00297c40(&_OBJC_CLASS___UIColor);

      lVar7 = _objc_retainAutoreleasedReturnValue();

      uVar9 = FUN_001ab49c(dVar12,lVar6,pcVar1,&local_a0,lVar7);

    }

    _objc_release(lVar7);

    _objc_release(lVar6);

    FUN_00292ec0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b860();

    _objc_release(uVar3);

    FUN_0029e860(param_1,extraout_x1_00,1);

    FUN_0029f2e0(param_1,extraout_x1_01,uVar9);

    if ((uVar9 & 1) != 0) goto LAB_001b0d68;

    FUN_0029a7a0(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,&cf_NxeQ);

    _objc_release(auVar15._0_8_);

    FUN_0029a7a0(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar15._0_8_;

    FUN_0029e8a0(uVar3,auVar15._8_8_,0);

  }

  else {

    FUN_0029e860(param_1,auVar15._8_8_,1);

    FUN_0029f2e0(param_1,extraout_x1,0);

    FUN_0029a7a0(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,lVar5);

    _objc_release(auVar15._0_8_);

    FUN_0029a7a0(param_1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e8a0(auVar15._0_8_,auVar15._8_8_,0);

    _objc_release(auVar15._0_8_);

    FUN_00292ec0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b860();

  }

  _objc_release(uVar3);

LAB_001b0d68:

  FUN_00290d20(param_1);

  _objc_release(lVar5);

  _objc_release(pcVar1);

  return;

}




