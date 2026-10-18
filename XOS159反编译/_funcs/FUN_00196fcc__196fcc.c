// FUN_00196fcc @0x196fcc


void FUN_00196fcc(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  ulong uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  long lVar13;

  long lVar14;

  undefined1 auVar15 [16];

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  long lStack_1a8;

  long *local_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  local_1a0 = (long *)0x0;

  uStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  uStack_180 = 0;

  FUN_00293440();

  auVar15 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar15._0_8_;

  lVar3 = FUN_00293880(uVar2,auVar15._8_8_,&local_1b0,auStack_f0,0x10);

  if (lVar3 != 0) {

    lVar9 = *local_1a0;

    do {

      lVar14 = 0;

      do {

        if (*local_1a0 != lVar9) {

          _objc_enumerationMutation(uVar2);

        }

        uVar11 = *(undefined8 *)(lStack_1a8 + lVar14 * 8);

        uVar4 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

        auVar15 = _objc_opt_isKindOfClass(uVar11,uVar4);

        uVar4 = auVar15._8_8_;

        if (((auVar15._0_8_ & 1) != 0) &&

           (auVar15 = FUN_00290f40(uVar11), uVar4 = auVar15._8_8_, auVar15._0_8_ != -1)) {

          uStack_1c8 = 0;

          local_1d0 = 0;

          uStack_1b8 = 0;

          uStack_1c0 = 0;

          lStack_1e8 = 0;

          local_1f0 = 0;

          uStack_1d8 = 0;

          local_1e0 = (long *)0x0;

          FUN_002a6560(uVar11);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          uVar4 = auVar15._0_8_;

          lVar5 = FUN_00293880(uVar4,auVar15._8_8_,&local_1f0,auStack_170,0x10);

          if (lVar5 != 0) {

            lVar13 = *local_1e0;

            do {

              lVar10 = 0;

              do {

                if (*local_1e0 != lVar13) {

                  _objc_enumerationMutation(uVar4);

                }

                uVar12 = *(undefined8 *)(lStack_1e8 + lVar10 * 8);

                auVar15 = FUN_002978a0(uVar12);

                uVar11 = auVar15._8_8_;

                if ((auVar15._0_8_ & 1) == 0) {

                  FUN_00291dc0(&_OBJC_CLASS___NSMutableArray,uVar11,uVar12);

                  uVar11 = _objc_retainAutoreleasedReturnValue();

                  while (lVar6 = FUN_00293860(uVar11), lVar6 != 0) {

                    FUN_00297d80(uVar11);

                    uVar12 = _objc_retainAutoreleasedReturnValue();

                    FUN_0029b3e0(uVar11);

                    uVar7 = _objc_opt_class(&_OBJC_CLASS___UITableView);

                    uVar8 = _objc_opt_isKindOfClass(uVar12,uVar7);

                    if ((uVar8 & 1) != 0) {

                      FUN_0019f3b8(uVar12);

                    }

                    FUN_002a4840(uVar12);

                    auVar15 = _objc_retainAutoreleasedReturnValue();

                    FUN_00291260(uVar11,auVar15._8_8_,auVar15._0_8_);

                    _objc_release(auVar15._0_8_);

                    _objc_release(uVar12);

                  }

                  _objc_release(uVar11);

                  uVar11 = extraout_x1;

                }

                lVar10 = lVar10 + 1;

              } while (lVar10 != lVar5);

              lVar5 = FUN_00293880(uVar4,uVar11,&local_1f0,auStack_170,0x10);

            } while (lVar5 != 0);

          }

          _objc_release(uVar4);

          uVar4 = extraout_x1_00;

        }

        lVar14 = lVar14 + 1;

      } while (lVar14 != lVar3);

      lVar3 = FUN_00293880(uVar2,uVar4,&local_1b0,auStack_f0,0x10);

    } while (lVar3 != 0);

  }

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




