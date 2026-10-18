// FUN_00217f1c @0x217f1c


void FUN_00217f1c(undefined *param_1)



{

  byte bVar1;

  uint uVar2;

  uint uVar3;

  int iVar4;

  undefined8 uVar5;

  long lVar6;

  undefined *puVar7;

  long lVar8;

  undefined *puVar9;

  ulong uVar10;

  long lVar11;

  undefined *puVar12;

  undefined *puVar13;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar14;

  long lVar15;

  undefined1 auVar16 [16];

  undefined8 local_200;

  long lStack_1f8;

  long *local_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 uStack_1d8;

  undefined8 uStack_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1c0;

  long lStack_1b8;

  long *local_1b0;

  undefined8 uStack_1a8;

  undefined8 local_1a0;

  undefined8 uStack_198;

  undefined8 uStack_190;

  undefined8 uStack_188;

  undefined1 auStack_178 [128];

  undefined *local_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  bVar1 = DAT_003ead50;

  if ((param_1 != (undefined *)0x0) && ((DAT_003ead50 & DAT_003ead51 & 1) == 0)) {

    _objc_getAssociatedObject(param_1,&DAT_003eaeec);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar2 = FUN_002924e0();

    _objc_release(uVar5);

    _objc_getAssociatedObject(param_1,&DAT_003eaeed);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002924e0();

    _objc_release(uVar5);

    if (((uVar2 | uVar3) & 1) != 0) {

      _objc_getAssociatedObject(param_1,&DAT_003eaab0);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      if ((lVar6 == 0) || (iVar4 = FUN_00297760(lVar6), iVar4 == 0)) {

        lVar8 = _objc_getClass("MainFrameItemView");

        _objc_retain(param_1);

        puVar7 = PTR____NSArray0__struct_00388308;

        puVar13 = PTR____NSArray0__struct_00388308;

        if (lVar8 != 0) {

          _objc_getAssociatedObject(param_1,&DAT_003eaef1);

          puVar9 = (undefined *)_objc_retainAutoreleasedReturnValue();

          uVar5 = _objc_opt_class(&_OBJC_CLASS___NSArray);

          uVar10 = _objc_opt_isKindOfClass(puVar9,uVar5);

          if (((uVar10 & 1) == 0) || (lVar11 = FUN_00293860(puVar9), lVar11 == 0)) {

LAB_002181dc:

            FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            FUN_00293640(param_1);

            puVar12 = (undefined *)_objc_retainAutoreleasedReturnValue();

            puVar13 = param_1;

            if (puVar12 != (undefined *)0x0) {

              puVar13 = puVar12;

            }

            FUN_00219ee4(puVar13,lVar8,uVar5,0);

            _objc_release(puVar12);

            lVar11 = FUN_00293860(uVar5);

            if (lVar11 == 0) {

              FUN_00219ee4(param_1,lVar8,uVar5,0);

            }

            puVar13 = (undefined *)FUN_002937a0(uVar5);

            lVar8 = FUN_00293860();

            puVar12 = (undefined *)0x0;

            if (lVar8 != 0) {

              puVar12 = puVar13;

            }

            _objc_setAssociatedObject(param_1,&DAT_003eaef1,puVar12,1);

            _objc_release(uVar5);

          }

          else {

            uStack_198 = 0;

            local_1a0 = 0;

            uStack_188 = 0;

            uStack_190 = 0;

            lStack_1b8 = 0;

            local_1c0 = 0;

            uStack_1a8 = 0;

            local_1b0 = (long *)0x0;

            _objc_retain(puVar9);

            lVar11 = FUN_00293880(puVar9,extraout_x1_00,&local_1c0,auStack_f0,0x10);

            if (lVar11 != 0) {

              lVar14 = *local_1b0;

              do {

                lVar15 = 0;

                do {

                  if (*local_1b0 != lVar14) {

                    _objc_enumerationMutation(puVar9);

                  }

                  uVar5 = *(undefined8 *)(lStack_1b8 + lVar15 * 8);

                  auVar16 = _objc_opt_isKindOfClass(uVar5,lVar8);

                  if ((auVar16._0_8_ & 1) == 0) {

LAB_002181d4:

                    _objc_release(puVar9);

                    goto LAB_002181dc;

                  }

                  auVar16 = FUN_00297700(uVar5,auVar16._8_8_,param_1);

                  if ((auVar16._0_8_ & 1) == 0) goto LAB_002181d4;

                  lVar15 = lVar15 + 1;

                } while (lVar11 != lVar15);

                lVar11 = FUN_00293880(puVar9,auVar16._8_8_,&local_1c0,auStack_f0,0x10);

              } while (lVar11 != 0);

            }

            _objc_release(puVar9);

            _objc_retain(puVar9);

            puVar13 = puVar9;

          }

          _objc_release(puVar9);

        }

        _objc_release(param_1);

        if (puVar13 != (undefined *)0x0) {

          puVar7 = puVar13;

        }

        _objc_retain(param_1);

        _objc_retain(puVar7);

        FUN_002987e0(&_OBJC_CLASS___UIScreen);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_0029bda0();

        _objc_release(uVar5);

        FUN_0029c220(param_1);

        _objc_retainAutoreleasedReturnValue();

        _objc_release();

        FUN_00298fe0(param_1);

        _objc_retainAutoreleasedReturnValue();

        _objc_release();

        FUN_002925a0(param_1);

        FUN_00293640(param_1);

        lVar8 = _objc_retainAutoreleasedReturnValue();

        if (lVar8 != 0) {

          FUN_00293640(param_1);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_002925a0();

          _objc_release(uVar5);

        }

        _objc_release(lVar8);

        FUN_00293860(puVar7);

        uStack_198 = 0;

        local_1a0 = 0;

        uStack_188 = 0;

        uStack_190 = 0;

        lStack_1b8 = 0;

        local_1c0 = 0;

        uStack_1a8 = 0;

        local_1b0 = (long *)0x0;

        _objc_retain(puVar7);

        lVar8 = FUN_00293880(puVar7,extraout_x1_01,&local_1c0,auStack_f0,0x10);

        if (lVar8 != 0) {

          lVar11 = *local_1b0;

          do {

            lVar14 = 0;

            do {

              if (*local_1b0 != lVar11) {

                _objc_enumerationMutation(puVar7);

              }

              FUN_00295600(*(undefined8 *)(lStack_1b8 + lVar14 * 8));

              lVar14 = lVar14 + 1;

            } while (lVar8 != lVar14);

            lVar8 = FUN_00293880(puVar7,extraout_x1_02,&local_1c0,auStack_f0,0x10);

          } while (lVar8 != 0);

        }

        _objc_release(puVar7);

        _objc_release(puVar7);

        _objc_release(param_1);

        _objc_getAssociatedObject(param_1,&DAT_003eaeee);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        if (uVar3 != 0) {

          _objc_getAssociatedObject(param_1,&DAT_003eaeef);

          _objc_retainAutoreleasedReturnValue();

          _objc_release();

        }

        uStack_1d8 = 0;

        local_1e0 = 0;

        uStack_1c8 = 0;

        uStack_1d0 = 0;

        lStack_1f8 = 0;

        local_200 = 0;

        uStack_1e8 = 0;

        local_1f0 = (long *)0x0;

        _objc_retain(puVar13);

        lVar8 = FUN_00293880(puVar13,extraout_x1_03,&local_200,auStack_178,0x10);

        if (lVar8 != 0) {

          lVar11 = *local_1f0;

          do {

            lVar14 = 0;

            do {

              if (*local_1f0 != lVar11) {

                _objc_enumerationMutation(puVar13);

              }

              FUN_00215dd4(0,*(undefined8 *)(lStack_1f8 + lVar14 * 8),0,1);

              lVar14 = lVar14 + 1;

            } while (lVar8 != lVar14);

            lVar8 = FUN_00293880(puVar13,extraout_x1_04,&local_200,auStack_178,0x10);

          } while (lVar8 != 0);

        }

        _objc_release(puVar13);

        FUN_002188b0(0,param_1,puVar13,0);

        _objc_setAssociatedObject(param_1,&DAT_003eaeec,0,1);

        _objc_setAssociatedObject(param_1,&DAT_003eaeee,0,1);

        _objc_release(uVar5);

      }

      else {

        if ((bVar1 & 1) == 0) {

          FUN_0020cd60(param_1,lVar6);

        }

        FUN_00293640(param_1);

        puVar7 = (undefined *)_objc_retainAutoreleasedReturnValue();

        puVar13 = param_1;

        if (puVar7 != (undefined *)0x0) {

          puVar13 = puVar7;

        }

        _objc_retain(puVar13);

        _objc_release(puVar7);

        FUN_00215dd4(0,puVar13,0,1);

        local_f8 = puVar13;

        FUN_00291e00(&_OBJC_CLASS___NSArray,extraout_x1,&local_f8,1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002188b0(0,param_1,uVar5,0);

        _objc_release(uVar5);

        _objc_setAssociatedObject(param_1,&DAT_003eaeec,0,1);

      }

      _objc_release(puVar13);

      _objc_release(lVar6);

    }

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




