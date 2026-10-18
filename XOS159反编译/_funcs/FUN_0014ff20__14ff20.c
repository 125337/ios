// FUN_0014ff20 @0x14ff20


void FUN_0014ff20(long param_1)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  cfstringStruct *pcVar6;

  undefined8 uVar7;

  undefined8 uVar8;

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

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  undefined8 uVar9;

  float fVar10;

  double dVar11;

  double dVar12;

  double dVar13;

  double dVar14;

  double dVar15;

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  undefined8 local_a8;

  undefined8 local_a0;

  long local_98;

  

  local_98 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002990e0();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) {

    FUN_002990c0(lVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 != 0) {

      FUN_002a5520(lVar3);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar5 == param_1) {

        FUN_0029d4a0(lVar4,extraout_x1,0);

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_002a45e0(auVar16._0_8_,auVar16._8_8_,&cf_xzyHomeCardTitle);

        pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

        pcVar1 = &cf___;

        if (pcVar6 != (cfstringStruct *)0x0) {

          pcVar1 = pcVar6;

        }

        _objc_retain(pcVar1);

        _objc_release(pcVar6);

        _objc_release(auVar16._0_8_);

        auVar16 = FUN_00297fa0(pcVar1);

        if (auVar16._0_8_ == 0) {

          FUN_00158e58(lVar4);

        }

        else {

          FUN_002a62a0(lVar4,auVar16._8_8_,&DAT_00002442);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          if (auVar16._0_8_ == 0) {

            _objc_alloc(&_OBJC_CLASS___UIView);

            puVar2 = PTR__CGRectZero_00388bf0;

            auVar16 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                                   *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                                   *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                                   *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

            uVar7 = auVar16._0_8_;

            FUN_002a1c80(uVar7,auVar16._8_8_,&DAT_00002442);

            FUN_002a23c0(uVar7,extraout_x1_00,1);

            FUN_0029d4a0(uVar7,extraout_x1_01,0);

            _objc_alloc(&_OBJC_CLASS___UILabel);

            auVar16 = FUN_00296b80(*(undefined8 *)puVar2,*(undefined8 *)(puVar2 + 8),

                                   *(undefined8 *)(puVar2 + 0x10),*(undefined8 *)(puVar2 + 0x18));

            uVar8 = auVar16._0_8_;

            FUN_002a1c80(uVar8,auVar16._8_8_,&DAT_00002441);

            FUN_002a1d80(uVar8,extraout_x1_02,0);

            FUN_0029ffc0(uVar8,extraout_x1_03,1);

            FUN_002a23c0(uVar8,extraout_x1_04,0);

            FUN_00291380(uVar7,extraout_x1_05,uVar8);

            FUN_00292660(&_OBJC_CLASS___UIButton,extraout_x1_06,0);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            uVar9 = auVar16._0_8_;

            FUN_002a1c80(uVar9,auVar16._8_8_,&DAT_00002443);

            FUN_00292dc0(&_OBJC_CLASS___UIColor);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_0029cf60(uVar9,auVar16._8_8_,auVar16._0_8_);

            _objc_release(auVar16._0_8_);

            FUN_0029c760(uVar9,extraout_x1_07,&cf__Nuhn_);

            FUN_002913c0(uVar9,extraout_x1_08,param_1,"xzy_homeTitleButtonTapped:",0x40);

            FUN_00291380(uVar7,extraout_x1_09,uVar9);

            FUN_00291380(lVar4,extraout_x1_10,uVar7);

            _objc_release(uVar9);

            _objc_release(uVar8);

            auVar16._8_8_ = extraout_x1_11;

            auVar16._0_8_ = uVar7;

          }

          uVar9 = auVar16._0_8_;

          FUN_002a62a0(uVar9,auVar16._8_8_,&DAT_00002441);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          uVar7 = auVar16._0_8_;

          FUN_002a62a0(uVar9,auVar16._8_8_,&DAT_00002443);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          fVar10 = (float)FUN_00295460(auVar16._0_8_,auVar16._8_8_,&cf_xzyHomeCardTitleSize);

          _objc_release(auVar16._0_8_);

          if (((NAN(fVar10)) || (dVar14 = (double)fVar10, ABS(dVar14) == INFINITY)) ||

             (fVar10 < 8.0)) {

            dVar14 = 20.0;

          }

          FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          fVar10 = (float)FUN_00295460(auVar16._0_8_,auVar16._8_8_,&cf_xzyHomeCardTitleOffsetX);

          _objc_release(auVar16._0_8_);

          FUN_002a1d60(uVar7,extraout_x1_12,pcVar1);

          dVar15 = (double)NEON_fminnm(dVar14,0x4080000000000000);

          FUN_002a4ac0(dVar15,*(undefined8 *)PTR__UIFontWeightSemibold_00388430,

                       &_OBJC_CLASS___UIFont);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_0029e520(uVar7,auVar16._8_8_,auVar16._0_8_);

          _objc_release(auVar16._0_8_);

          FUN_00297c40(&_OBJC_CLASS___UIColor);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1da0(uVar7,auVar16._8_8_,auVar16._0_8_);

          _objc_release(auVar16._0_8_);

          FUN_0029e8a0(uVar7,extraout_x1_13,0);

          FUN_0029e8a0(uVar8,extraout_x1_14,0);

          FUN_002925a0(lVar4);

          dVar14 = (double)_CGRectGetHeight();

          FUN_002925a0(lVar4);

          dVar11 = (double)_CGRectGetMinX();

          FUN_002925a0(lVar4);

          dVar12 = (double)_CGRectGetWidth();

          local_a8 = *(undefined8 *)PTR__NSFontAttributeName_00388358;

          FUN_002954e0(uVar7);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          local_a0 = auVar16._0_8_;

          FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar16._8_8_,&local_a0,&local_a8,1);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          dVar13 = (double)FUN_002a3e20(pcVar1,auVar17._8_8_,auVar17._0_8_);

          _objc_release(auVar17._0_8_);

          _objc_release(auVar16._0_8_);

          dVar11 = dVar11 + 16.0 + (double)fVar10;

          dVar15 = (double)(long)(dVar15 + 8.0);

          if (dVar15 <= 44.0) {

            dVar15 = 44.0;

          }

          dVar12 = (dVar12 - dVar11) + -8.0;

          if (dVar12 <= 1.0) {

            dVar12 = 1.0;

          }

          if ((double)(long)dVar13 + 16.0 <= dVar12) {

            dVar12 = (double)(long)dVar13 + 16.0;

          }

          if (dVar12 <= 44.0) {

            dVar12 = 44.0;

          }

          FUN_0029e5e0(dVar11,(long)((dVar14 - dVar15) * 0.5),dVar12,uVar9);

          FUN_002925a0(uVar9);

          FUN_0029e5e0(uVar7);

          FUN_002925a0(uVar9);

          FUN_0029e5e0(uVar8);

          FUN_002925e0(lVar4,extraout_x1_15,uVar9);

          _objc_release(uVar8);

          _objc_release(uVar7);

          _objc_release(uVar9);

        }

        _objc_release(pcVar1);

      }

      else {

        FUN_00158e58(lVar4);

      }

    }

    _objc_release(lVar4);

  }

  _objc_release(lVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_98) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




