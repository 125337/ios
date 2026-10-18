// FUN_001c4c74 @0x1c4c74


void FUN_001c4c74(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4)



{

  long lVar1;

  cfstringStruct *pcVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  cfstringStruct *pcVar8;

  undefined8 uVar9;

  ulong uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  double dVar11;

  double dVar12;

  double dVar13;

  double dVar14;

  double dVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  undefined1 auVar19 [16];

  undefined *local_d8;

  undefined8 local_d0;

  code *local_c8;

  undefined *puStack_c0;

  long local_b8;

  long local_b0;

  undefined8 local_a8;

  undefined8 uStack_a0;

  long local_98;

  

  local_98 = *(long *)PTR____stack_chk_guard_00388738;

  if (DAT_003ea900 != 0 && DAT_003ea908 != 0) {

    FUN_002a6520();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    lVar1 = DAT_003ea8f8;

    if (lVar3 != 0) {

      lVar1 = lVar3;

    }

    _objc_retain(lVar1);

    _objc_release(lVar3);

    if (lVar1 != 0) {

      FUN_002925a0(lVar1);

      dVar17 = param_3;

      dVar16 = param_4;

      dVar11 = (double)FUN_0029bb60(lVar1);

      dVar12 = DAT_003e70d8;

      dVar15 = dVar17;

      if ((DAT_003e70e0 & 1) == 0) {

        FUN_002a4aa0(DAT_003e70c8,&_OBJC_CLASS___UIFont);

        auVar19 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_002924a0();

        auVar19 = _objc_retainAutoreleasedReturnValue();

      }

      uVar4 = auVar19._0_8_;

      FUN_0029e520(DAT_003ea908,auVar19._8_8_,uVar4);

      lVar3 = DAT_003ea918;

      if (DAT_003ea918 == 0) {

        FUN_001c6ed8(PTR_cf__1A1A1A_003e70b8);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if (lVar3 == 0) {

          FUN_00292400(&_OBJC_CLASS___UIColor);

          lVar5 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          _objc_retain(lVar3);

          lVar5 = lVar3;

        }

        _objc_release(lVar3);

        FUN_001c6ed8(PTR_cf__F5F5F5_003e70c0);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if (lVar3 == 0) {

          FUN_002a64a0(&_OBJC_CLASS___UIColor);

          lVar6 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          _objc_retain(lVar3);

          lVar6 = lVar3;

        }

        _objc_release(lVar3);

        local_d8 = PTR___NSConcreteStackBlock_003886f0;

        local_d0 = 0xc2000000;

        local_c8 = FUN_001c8fc0;

        puStack_c0 = &DAT_0038df90;

        local_b8 = lVar6;

        _objc_retain(lVar5);

        local_b0 = lVar5;

        _objc_retain(lVar6);

        FUN_00293000(&_OBJC_CLASS___UIColor,extraout_x1_00,&local_d8);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        lVar3 = DAT_003ea918;

        DAT_003ea918 = lVar7;

        _objc_release(lVar3);

        _objc_release(local_b0);

        _objc_release(local_b8);

        lVar3 = DAT_003ea918;

        _objc_retain(DAT_003ea918);

        _objc_release(lVar6);

        _objc_release(lVar5);

        uVar9 = extraout_x1_01;

      }

      else {

        _objc_retain(DAT_003ea918);

        uVar9 = extraout_x1;

      }

      FUN_002a1da0(DAT_003ea908,uVar9,lVar3);

      _objc_release(lVar3);

      if (DAT_003e70e1 == '\x01') {

        FUN_00293060(0,0x3fd47ae147ae147b,&_OBJC_CLASS___UIColor);

        auVar19 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1460(DAT_003ea908,auVar19._8_8_,auVar19._0_8_);

        _objc_release(auVar19._0_8_);

        FUN_002a1480(0,0x3fe0000000000000,DAT_003ea908);

      }

      else {

        FUN_002a1460(DAT_003ea908,extraout_x1_02,0);

      }

      FUN_002a5020(DAT_003ea908);

      auVar19 = _objc_retainAutoreleasedReturnValue();

      pcVar8 = auVar19._0_8_;

      local_a8 = *(undefined8 *)PTR__NSFontAttributeName_00388358;

      uStack_a0 = uVar4;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar19._8_8_,&uStack_a0,&local_a8,1);

      auVar19 = _objc_retainAutoreleasedReturnValue();

      dVar12 = param_3 * dVar12;

      if (dVar12 <= 120.0) {

        dVar12 = 120.0;

      }

      dVar12 = dVar12 + -32.0;

      pcVar2 = &cf___;

      if (pcVar8 != (cfstringStruct *)0x0) {

        pcVar2 = pcVar8;

      }

      FUN_00292580(dVar12,0x7fefffffffffffff,pcVar2,auVar19._8_8_,1,auVar19._0_8_,0);

      _objc_release(auVar19._0_8_);

      _objc_release(pcVar8);

      if ((double)((float)(int)dVar15 + 1.0) <= dVar12) {

        dVar12 = (double)((float)(int)dVar15 + 1.0);

      }

      dVar13 = (double)FUN_00298040(uVar4);

      dVar15 = (double)(float)(int)dVar16;

      if ((double)(float)(int)dVar16 <= dVar13 + 2.0) {

        dVar15 = dVar13 + 2.0;

      }

      FUN_00295c00(DAT_003ea900);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      dVar14 = (double)FUN_002916a0();

      dVar16 = DAT_003e70d0;

      _objc_release(uVar9);

      dVar13 = DAT_003e70d0;

      FUN_00295c00(DAT_003ea900);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cb60(dVar13);

      _objc_release(uVar9);

      dVar13 = DAT_003e70d0;

      FUN_00295c00(DAT_003ea900);

      auVar19 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e8a0(auVar19._0_8_,auVar19._8_8_,dVar13 <= 0.0);

      _objc_release(auVar19._0_8_);

      FUN_00297e40(DAT_003ea900);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      dVar18 = (dVar15 + 16.0) * 0.5;

      dVar13 = 16.0;

      if (dVar18 <= 16.0) {

        dVar13 = dVar18;

      }

      FUN_0029d820(dVar13);

      _objc_release(uVar9);

      if (DAT_003ea928 == 1) {

        dVar11 = param_4 * 0.5;

      }

      else {

        if (DAT_003ea928 == 0) {

          dVar11 = dVar11 + dVar18;

          dVar17 = 8.0;

        }

        else {

          dVar11 = (param_4 - dVar17) - dVar18;

          dVar17 = -12.0;

        }

        dVar11 = dVar11 + dVar17;

      }

      FUN_0029e5e0(param_3 * 0.5 + (dVar12 + 32.0) * -0.5,(dVar11 + DAT_003ea930) - dVar18,

                   dVar12 + 32.0,dVar15 + 16.0,DAT_003ea900);

      FUN_0029e5e0(0x4030000000000000,0x4020000000000000,dVar12,dVar15,DAT_003ea908);

      FUN_0029ff40(DAT_003ea900);

      FUN_00297ee0(DAT_003ea900);

      if ((0.0 < dVar16 && dVar14 <= 0.0) &&

         (uVar10 = FUN_002978a0(DAT_003ea900), (uVar10 & 1) == 0)) {

        FUN_00295c00(DAT_003ea900);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_0029ac40();

        _objc_release(uVar9);

      }

      _objc_release(uVar4);

    }

    _objc_release(lVar1);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_98) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




