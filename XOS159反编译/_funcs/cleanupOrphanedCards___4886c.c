// cleanupOrphanedCards: @0x4886c


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::cleanupOrphanedCards_(ID param_1,SEL param_2,ID param_3)



{

  byte bVar1;

  uint uVar2;

  int iVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar9;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  long lVar13;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  uint local_20c;

  byte local_1f1;

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

  _objc_retain(param_3);

  uVar4 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar5 = _objc_opt_isKindOfClass(param_3,uVar4);

  if ((uVar5 & 1) == 0) goto LAB_00048c30;

  FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  uStack_180 = 0;

  lStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  local_1a0 = (long *)0x0;

  _objc_retain(param_3);

  lVar6 = FUN_00293880(param_3,extraout_x1,&local_1b0,auStack_f0,0x10);

  if (lVar6 != 0) {

    lVar10 = *local_1a0;

    do {

      lVar13 = 0;

      do {

        if (*local_1a0 != lVar10) {

          _objc_enumerationMutation(param_3);

        }

        uVar12 = *(undefined8 *)(lStack_1a8 + lVar13 * 8);

        uVar7 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

        auVar14 = _objc_opt_isKindOfClass(uVar12,uVar7);

        uVar7 = auVar14._8_8_;

        if ((auVar14._0_8_ & 1) != 0) {

          FUN_00299540(uVar12,uVar7,&cf_bubble_name);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          uVar12 = _objc_opt_class(&_OBJC_CLASS___NSString);

          uVar5 = _objc_opt_isKindOfClass(uVar7,uVar12);

          if (((uVar5 & 1) != 0) && (auVar14 = FUN_00297fa0(uVar7), auVar14._0_8_ != 0)) {

            FUN_00291240(uVar4,auVar14._8_8_,uVar7);

          }

          _objc_release(uVar7);

          uVar7 = extraout_x1_00;

        }

        lVar13 = lVar13 + 1;

      } while (lVar6 != lVar13);

      lVar6 = FUN_00293880(param_3,uVar7,&local_1b0,auStack_f0,0x10);

    } while (lVar6 != 0);

  }

  _objc_release(param_3);

  lVar6 = FUN_00293860(uVar4);

  if (lVar6 != 0) {

    _NSSearchPathForDirectoriesInDomains(9,1,1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00295440();

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(auVar14._0_8_,auVar14._8_8_,&cf_CoverRes_Cards);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    uVar8 = auVar15._0_8_;

    auVar15 = FUN_00295160(uVar8,auVar15._8_8_,uVar12);

    if ((auVar15._0_8_ & 1) != 0) {

      FUN_00293660(uVar8,auVar15._8_8_,uVar12,0);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      if (lVar6 != 0) {

        uStack_1c8 = 0;

        local_1d0 = 0;

        uStack_1b8 = 0;

        uStack_1c0 = 0;

        lStack_1e8 = 0;

        local_1f0 = 0;

        uStack_1d8 = 0;

        local_1e0 = (long *)0x0;

        _objc_retain(lVar6);

        auVar15 = FUN_00293880(lVar6,extraout_x1_01,&local_1f0,auStack_170,0x10);

        lVar10 = lVar6;

        if (auVar15._0_8_ != 0) {

          local_20c = 0;

          lVar10 = *local_1e0;

          do {

            uVar9 = auVar15._8_8_;

            lVar13 = 0;

            do {

              if (*local_1e0 != lVar10) {

                _objc_enumerationMutation(lVar6);

                uVar9 = extraout_x1_02;

              }

              uVar11 = *(undefined8 *)(lStack_1e8 + lVar13 * 8);

              auVar16 = FUN_00295f60(uVar11,uVar9,&cf__);

              uVar9 = auVar16._8_8_;

              if ((auVar16._0_8_ & 1) == 0) {

                FUN_002a4460(uVar12,uVar9,uVar11);

                auVar16 = _objc_retainAutoreleasedReturnValue();

                uVar9 = auVar16._0_8_;

                local_1f1 = 0;

                bVar1 = FUN_00295180(uVar8,auVar16._8_8_,uVar9,&local_1f1);

                if ((bVar1 & local_1f1 & 1) != 0) {

                  FUN_002a4460(uVar9,extraout_x1_03,&cf_theme_xos);

                  auVar16 = _objc_retainAutoreleasedReturnValue();

                  auVar17 = FUN_00295160(uVar8,auVar16._8_8_,auVar16._0_8_);

                  if (((auVar17._0_8_ & 1) != 0) &&

                     (auVar17 = FUN_00293560(uVar4,auVar17._8_8_,uVar11), (auVar17._0_8_ & 1) == 0))

                  {

                    uVar2 = FUN_0029b3c0(uVar8,auVar17._8_8_,uVar9,0);

                    local_20c = uVar2 | local_20c;

                  }

                  _objc_release(auVar16._0_8_);

                }

                _objc_release(uVar9);

                uVar9 = extraout_x1_04;

              }

              lVar13 = lVar13 + 1;

            } while (auVar15._0_8_ != lVar13);

            auVar15 = FUN_00293880(lVar6,uVar9,&local_1f0,auStack_170,0x10);

          } while (auVar15._0_8_ != 0);

          _objc_release(lVar6);

          if (((local_20c & 1) == 0) || (iVar3 = FUN_0017e04c(), iVar3 == 0)) goto LAB_00048c00;

          FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          lVar10 = auVar15._0_8_;

          FUN_0029a120(lVar10,auVar15._8_8_,&cf_CadisHeaderNeedsRebuild,0);

        }

        _objc_release(lVar10);

      }

LAB_00048c00:

      _objc_release(lVar6);

    }

    _objc_release(uVar8);

    _objc_release(uVar12);

    _objc_release(auVar14._0_8_);

    _objc_release(uVar7);

  }

  _objc_release(uVar4);

LAB_00048c30:

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




