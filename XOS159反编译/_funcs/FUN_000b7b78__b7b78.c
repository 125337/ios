// FUN_000b7b78 @0xb7b78


void FUN_000b7b78(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4)



{

  undefined *puVar1;

  int iVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined8 extraout_x1;

  undefined8 uVar10;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar11;

  undefined8 uVar12;

  long lVar13;

  float fVar14;

  float fVar15;

  double dVar16;

  double dVar17;

  undefined1 auVar18 [16];

  undefined8 local_210;

  long lStack_208;

  long *local_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  undefined8 uStack_1e8;

  undefined8 uStack_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  long lStack_1c8;

  long *local_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 uStack_1a0;

  undefined8 uStack_198;

  undefined1 auStack_190 [128];

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  FUN_0008459c(param_4);

  FUN_000b953c(param_4);

  _objc_retain(param_4);

  FUN_000a98e4(param_4);

  FUN_002254e4(param_4);

  _objc_release(param_4);

  _objc_retain(param_4);

  if (param_4 == 0) goto LAB_000b7efc;

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIView);

  uVar4 = _objc_opt_isKindOfClass(param_4,uVar3);

  if ((uVar4 & 1) != 0) {

    _objc_retain(param_4);

    FUN_000839f4(param_4);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_000856e8();

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 == 0) {

      _objc_release(uVar3);

    }

    else {

      iVar2 = FUN_00298760(lVar5);

      _objc_release(lVar5);

      _objc_release(uVar3);

      if (iVar2 == 0x22) {

        _objc_getAssociatedObject(param_4,PTR_LOOP_003e62f8);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 != 0) {

          fVar14 = (float)FUN_00295480();

          dVar17 = (double)fVar14;

          _objc_retain(param_4);

          if (ABS(dVar17) <= 0.001) {

            _objc_release(param_4);

          }

          else {

            uStack_1a8 = 0;

            local_1b0 = 0;

            uStack_198 = 0;

            uStack_1a0 = 0;

            lStack_1c8 = 0;

            local_1d0 = 0;

            uStack_1b8 = 0;

            local_1c0 = (long *)0x0;

            FUN_002a4840(param_4);

            auVar18 = _objc_retainAutoreleasedReturnValue();

            uVar3 = auVar18._0_8_;

            lVar6 = FUN_00293880(uVar3,auVar18._8_8_,&local_1d0,auStack_110,0x10);

            if (lVar6 != 0) {

              lVar11 = *local_1c0;

              do {

                lVar13 = 0;

                do {

                  if (*local_1c0 != lVar11) {

                    _objc_enumerationMutation(uVar3);

                  }

                  uVar12 = *(undefined8 *)(lStack_1c8 + lVar13 * 8);

                  auVar18 = FUN_002a4e60(uVar12);

                  uVar10 = auVar18._8_8_;

                  uVar4 = auVar18._0_8_ - 0x135257b;

                  if (3 < uVar4 || uVar4 == 2) {

                    _objc_getAssociatedObject(uVar12,PTR_LOOP_003e6460);

                    lVar7 = _objc_retainAutoreleasedReturnValue();

                    _objc_getAssociatedObject(uVar12,PTR_LOOP_003e6468);

                    lVar8 = _objc_retainAutoreleasedReturnValue();

                    if (lVar7 != 0 && lVar8 != 0) {

                      fVar14 = (float)FUN_00295480(lVar7);

                      fVar15 = (float)FUN_00295480(lVar8);

                      if (ABS((double)fVar15 - (dVar17 + (double)fVar14)) <= 0.75) {

                        dVar16 = (double)FUN_00295600(uVar12);

                        fVar14 = (float)FUN_00295480(lVar8);

                        if (ABS(dVar16 - (double)fVar14) <= 0.75) {

                          _objc_release(lVar8);

                          _objc_release(lVar7);

                          _objc_release(uVar3);

                          _objc_release(param_4);

                          lStack_208 = 0;

                          local_210 = 0;

                          uStack_1f8 = 0;

                          local_200 = (long *)0x0;

                          uStack_1e8 = 0;

                          local_1f0 = 0;

                          uStack_1d8 = 0;

                          uStack_1e0 = 0;

                          FUN_002a4840(param_4);

                          auVar18 = _objc_retainAutoreleasedReturnValue();

                          uVar3 = auVar18._0_8_;

                          lVar6 = FUN_00293880(uVar3,auVar18._8_8_,&local_210,auStack_190,0x10);

                          if (lVar6 == 0) goto LAB_000b8174;

                          lVar11 = *local_200;

                          goto LAB_000b7fd0;

                        }

                      }

                    }

                    _objc_release(lVar8);

                    _objc_release(lVar7);

                    uVar10 = extraout_x1;

                  }

                  lVar13 = lVar13 + 1;

                } while (lVar6 != lVar13);

                lVar6 = FUN_00293880(uVar3,uVar10,&local_1d0,auStack_110,0x10);

              } while (lVar6 != 0);

            }

            _objc_release(uVar3);

            _objc_release(param_4);

          }

        }

        goto LAB_000b8180;

      }

    }

    _objc_release(param_4);

  }

  _objc_release(param_4);

  goto LAB_000b7e28;

LAB_000b7fd0:

  do {

    lVar13 = 0;

    do {

      if (*local_200 != lVar11) {

        _objc_enumerationMutation(uVar3);

      }

      lVar8 = *(long *)(lStack_208 + lVar13 * 8);

      _objc_retain(lVar8);

      lVar7 = lVar8;

      uVar10 = param_3;

      if ((lVar8 == 0) ||

         (lVar9 = FUN_002a4e60(lVar8), uVar10 = param_3,

         lVar9 - 0x1352577U < 6 || lVar9 == 0x135257e)) {

LAB_000b8018:

        _objc_release(lVar7);

        uVar12 = extraout_x1_00;

        param_3 = uVar10;

      }

      else {

        _objc_release(lVar8);

        _objc_getAssociatedObject(lVar8,PTR_LOOP_003e6460);

        auVar18 = _objc_retainAutoreleasedReturnValue();

        uVar12 = auVar18._8_8_;

        if (auVar18._0_8_ != 0) {

          _objc_getAssociatedObject(lVar8,PTR_LOOP_003e6468);

          lVar7 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          _objc_release(auVar18._0_8_);

          uVar12 = extraout_x1_01;

          if (lVar7 != 0) {

            dVar16 = (double)FUN_00295600(lVar8);

            puVar1 = PTR_LOOP_003e6460;

            uVar10 = param_3;

            FUN_002993a0(dVar16 - dVar17,&_OBJC_CLASS___NSNumber);

            uVar12 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(lVar8,puVar1,uVar12,1);

            _objc_release(uVar12);

            puVar1 = PTR_LOOP_003e6468;

            FUN_002993a0(dVar16,&_OBJC_CLASS___NSNumber);

            uVar12 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(lVar8,puVar1,uVar12,1);

            _objc_release(uVar12);

            puVar1 = PTR_LOOP_003e6470;

            FUN_002993a0(param_3,&_OBJC_CLASS___NSNumber);

            lVar7 = _objc_retainAutoreleasedReturnValue();

            _objc_setAssociatedObject(lVar8,puVar1,lVar7,1);

            goto LAB_000b8018;

          }

        }

      }

      lVar13 = lVar13 + 1;

    } while (lVar6 != lVar13);

    lVar6 = FUN_00293880(uVar3,uVar12,&local_210,auStack_190,0x10);

  } while (lVar6 != 0);

LAB_000b8174:

  _objc_release(uVar3);

LAB_000b8180:

  _objc_release(lVar5);

  _objc_release(param_4);

  _objc_release(param_4);

LAB_000b7e28:

  _objc_retain(param_4);

  uVar4 = _objc_opt_respondsToSelector(param_4,"viewModel");

  if ((uVar4 & 1) != 0) {

    FUN_002a6280(param_4);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 != 0) {

      _objc_getAssociatedObject(lVar5,PTR_LOOP_003e5cd0);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar4 = FUN_002924e0();

      _objc_release(uVar3);

      if (((uVar4 & 1) == 0) && (uVar4 = FUN_00004f4c(lVar5), (uVar4 & 1) != 0)) {

        uVar4 = _objc_opt_respondsToSelector(param_4,"updateQuickTransTipButtonPosition");

        if ((uVar4 & 1) != 0) {

          FUN_002a5d60(param_4);

        }

        uVar4 = _objc_opt_respondsToSelector(param_4,"updateResumePlayButtonPosition");

        if ((uVar4 & 1) != 0) {

          FUN_002a5d80(param_4);

        }

        uVar4 = _objc_opt_respondsToSelector(param_4,"updatePlayRateButtonPosition");

        if ((uVar4 & 1) != 0) {

          FUN_002a5cc0(param_4);

        }

        FUN_00224678(param_4);

      }

    }

    _objc_release(lVar5);

  }

LAB_000b7efc:

  _objc_release(param_4);

  FUN_000b953c(param_4);

  _objc_release(param_4);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




