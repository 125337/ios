// FUN_000aed10 @0xaed10


void FUN_000aed10(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5,

                 long param_6)



{

  int iVar1;

  undefined *puVar2;

  int iVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  dispatch_time_t dVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  bool bVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  long lVar13;

  undefined8 uVar14;

  double dVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  double dVar19;

  undefined1 auVar20 [16];

  undefined1 auVar21 [16];

  undefined *local_1d0;

  undefined8 local_1c8;

  code *local_1c0;

  undefined *puStack_1b8;

  undefined1 auStack_1b0 [8];

  undefined8 local_1a8;

  undefined8 local_1a0;

  long lStack_198;

  long *local_190;

  undefined8 uStack_188;

  undefined8 local_180;

  undefined8 uStack_178;

  undefined8 uStack_170;

  undefined8 uStack_168;

  undefined1 auStack_158 [8];

  undefined *local_150;

  undefined8 local_148;

  code *local_140;

  undefined *puStack_138;

  long local_130;

  long local_128;

  undefined1 auStack_120 [128];

  long local_a0;

  

  local_a0 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_6);

  if (param_5 == 0) goto LAB_000af204;

  uVar14 = FUN_002935e0(param_5);

  dVar19 = param_2;

  dVar15 = (double)FUN_002935a0(param_5);

  FUN_00293600(param_5);

  FUN_002925a0(param_5);

  dVar18 = param_4;

  FUN_002935a0(param_5);

  dVar17 = param_3;

  iVar3 = FUN_000af718(param_5);

  param_3 = (dVar19 - param_4) + param_3;

  dVar19 = -dVar15;

  if (-dVar15 <= param_3) {

    dVar19 = param_3;

  }

  dVar15 = 120.0;

  iVar1 = iVar3;

  if (dVar19 - param_2 <= 120.0) {

    iVar1 = 1;

  }

  FUN_002967c0(param_5);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  lVar5 = FUN_00293860();

  dVar19 = 0.0;

  if (lVar5 == 0) {

    lVar5 = 0;

LAB_000aee54:

    bVar9 = false;

    uVar11 = 0;

    lVar13 = 0;

  }

  else {

    FUN_00295440(uVar4);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    lVar5 = auVar20._0_8_;

    if (lVar5 == 0) goto LAB_000aee54;

    FUN_0029ae00(param_5,auVar20._8_8_,lVar5);

    dVar19 = param_2 - dVar15;

    if (param_6 == 0) {

LAB_000aee40:

      uVar11 = 0;

LAB_000aee44:

      lVar13 = 0;

    }

    else {

      auVar20 = FUN_0029c020(lVar5);

      if (auVar20._0_8_ != 0) goto LAB_000aee40;

      FUN_002a6080(param_6,auVar20._8_8_,&cf_m_arrMessageNodeData);

      uVar11 = _objc_retainAutoreleasedReturnValue();

      lVar13 = FUN_0029bae0(lVar5);

      lVar7 = FUN_00293860(uVar11);

      if (lVar7 <= lVar13) goto LAB_000aee44;

      auVar20 = FUN_0029bae0(lVar5);

      FUN_00299500(uVar11,auVar20._8_8_,auVar20._0_8_);

      lVar13 = _objc_retainAutoreleasedReturnValue();

    }

    bVar9 = true;

  }

  local_150 = PTR___NSConcreteStackBlock_003886f0;

  local_148 = 0xc2000000;

  local_140 = FUN_000af804;

  puStack_138 = &DAT_00388d50;

  _objc_retain(param_5);

  local_130 = param_5;

  _objc_retain(lVar5);

  local_128 = lVar5;

  FUN_00299ce0(&_OBJC_CLASS___UIView,extraout_x1,&local_150);

  if (iVar1 == 0) {

    if (bVar9) {

      _objc_retain(lVar5);

      lVar7 = lVar5;

      if (lVar13 != 0) {

        FUN_002a6080(param_6,extraout_x1_00,&cf_m_arrMessageNodeData);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        auVar21 = FUN_00296720(auVar20._0_8_,auVar20._8_8_,lVar13);

        if (auVar21._0_8_ != 0x7fffffffffffffff) {

          FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar21._8_8_,auVar21._0_8_,0);

          lVar7 = _objc_retainAutoreleasedReturnValue();

          _objc_release(lVar5);

        }

        _objc_release(auVar20._0_8_);

      }

      lVar10 = FUN_0029c020(lVar7);

      lVar12 = FUN_00299340(param_5);

      if (lVar10 < lVar12) {

        lVar10 = FUN_0029bae0(lVar7);

        auVar20 = FUN_0029c020(lVar7);

        auVar20 = FUN_00299320(param_5,auVar20._8_8_,auVar20._0_8_);

        if (lVar10 < auVar20._0_8_) {

          FUN_0029ae00(param_5,auVar20._8_8_,lVar7);

          dVar17 = dVar15;

          FUN_00293600(param_5);

          FUN_002925a0(param_5);

          dVar17 = dVar17 - dVar18;

          if (dVar17 <= 0.0) {

            dVar17 = 0.0;

          }

          dVar18 = dVar19 + dVar15;

          if (dVar17 <= dVar19 + dVar15) {

            dVar18 = dVar17;

          }

          FUN_002935e0(param_5);

          if (dVar18 <= 0.0) {

            dVar18 = 0.0;

          }

          if (0.5 < ABS(dVar18 - dVar17)) {

            FUN_0029d6e0(uVar14,param_5);

          }

        }

      }

      _objc_release(lVar7);

    }

    else {

      FUN_002935e0(param_5);

      if (0.5 < ABS(dVar15 - param_2)) {

        FUN_0029d6e0(uVar14,param_2,param_5);

      }

    }

  }

  else {

    FUN_00297ee0(param_5);

    dVar16 = (double)FUN_002935a0(param_5);

    FUN_00293600(param_5);

    FUN_002925a0(param_5);

    FUN_002935a0(param_5);

    dVar17 = (dVar15 - dVar18) + dVar17;

    dVar19 = -dVar16;

    if (-dVar16 <= dVar17) {

      dVar19 = dVar17;

    }

    FUN_0029d6e0(uVar14,dVar19,param_5);

    if (iVar3 == 0) {

      uVar14 = FUN_000af840(param_5);

    }

    else {

      _objc_getAssociatedObject(param_5,PTR_LOOP_003e63f0);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      uVar14 = FUN_002a5a20();

      _objc_release(uVar6);

    }

    _objc_initWeak(auStack_158,param_5);

    uStack_178 = 0;

    local_180 = 0;

    uStack_168 = 0;

    uStack_170 = 0;

    lStack_198 = 0;

    local_1a0 = 0;

    uStack_188 = 0;

    local_190 = (long *)0x0;

    lVar7 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdeb8,extraout_x1_01,&local_1a0,

                         auStack_120,0x10);

    puVar2 = PTR___dispatch_main_q_00388740;

    if (lVar7 != 0) {

      lVar10 = *local_190;

      do {

        lVar12 = 0;

        do {

          if (*local_190 != lVar10) {

            _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdeb8);

          }

          dVar19 = (double)FUN_00294860(*(undefined8 *)(lStack_198 + lVar12 * 8));

          dVar8 = _dispatch_time(0,(long)(dVar19 * 1000000000.0));

          local_1d0 = PTR___NSConcreteStackBlock_003886f0;

          local_1c8 = 0xc2000000;

          local_1c0 = FUN_000af910;

          puStack_1b8 = &DAT_0038afc0;

          _objc_copyWeak(auStack_1b0,auStack_158);

          local_1a8 = uVar14;

          _dispatch_after(dVar8,puVar2,&local_1d0);

          _objc_destroyWeak(auStack_1b0);

          lVar12 = lVar12 + 1;

        } while (lVar7 != lVar12);

        lVar7 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdeb8,extraout_x1_02,&local_1a0,

                             auStack_120,0x10);

      } while (lVar7 != 0);

    }

    _objc_destroyWeak(auStack_158);

  }

  _objc_release(local_128);

  _objc_release(local_130);

  _objc_release(uVar11);

  _objc_release(lVar13);

  _objc_release(lVar5);

  _objc_release(uVar4);

LAB_000af204:

  _objc_release(param_6);

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_a0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




