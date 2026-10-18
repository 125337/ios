// FUN_00220818 @0x220818


void FUN_00220818(long param_1)



{

  int iVar1;

  ulong uVar2;

  undefined *puVar3;

  long lVar4;

  undefined *puVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  long lVar9;

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

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  long lVar13;

  undefined1 auVar14 [16];

  undefined8 local_2b0;

  long lStack_2a8;

  long *local_2a0;

  undefined8 uStack_298;

  undefined8 local_290;

  undefined8 uStack_288;

  undefined8 uStack_280;

  undefined8 uStack_278;

  undefined8 local_270;

  long lStack_268;

  long *local_260;

  undefined8 uStack_258;

  undefined8 local_250;

  undefined8 uStack_248;

  undefined8 uStack_240;

  undefined8 uStack_238;

  undefined8 local_230;

  long lStack_228;

  long *local_220;

  undefined8 uStack_218;

  undefined8 local_210;

  undefined8 uStack_208;

  undefined8 uStack_200;

  undefined8 uStack_1f8;

  undefined1 auStack_1f0 [128];

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  puVar3 = PTR____NSArray0__struct_00388308;

  if ((param_1 != 0) &&

     (uVar2 = FUN_00297aa0(param_1), puVar3 = PTR____NSArray0__struct_00388308, (uVar2 & 1) != 0)) {

    FUN_00294780(param_1);

    puVar3 = (undefined *)_objc_retainAutoreleasedReturnValue();

    lVar4 = FUN_00293860();

    puVar5 = puVar3;

    if (lVar4 == 0) {

      FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

      puVar5 = (undefined *)_objc_retainAutoreleasedReturnValue();

      uStack_208 = 0;

      local_210 = 0;

      uStack_1f8 = 0;

      uStack_200 = 0;

      lStack_228 = 0;

      local_230 = 0;

      uStack_218 = 0;

      local_220 = (long *)0x0;

      FUN_00294d00(param_1);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      uVar6 = auVar14._0_8_;

      lVar4 = FUN_00293880(uVar6,auVar14._8_8_,&local_230,auStack_f0,0x10);

      if (lVar4 != 0) {

        lVar10 = *local_220;

        do {

          lVar12 = 0;

          do {

            if (*local_220 != lVar10) {

              _objc_enumerationMutation(uVar6);

            }

            uVar11 = *(undefined8 *)(lStack_228 + lVar12 * 8);

            iVar1 = FUN_00297760(uVar11);

            uVar7 = extraout_x1;

            if (iVar1 != 0) {

              FUN_00291240(puVar5,extraout_x1,uVar11);

              uVar7 = extraout_x1_00;

            }

            lVar12 = lVar12 + 1;

          } while (lVar4 != lVar12);

          lVar4 = FUN_00293880(uVar6,uVar7,&local_230,auStack_f0,0x10);

        } while (lVar4 != 0);

      }

      _objc_release(uVar6);

      _objc_release(puVar3);

    }

    if (((DAT_003eaac8 < 7) && ((1L << (DAT_003eaac8 & 0x3f) & 0x66U) != 0)) ||

       (lVar4 = FUN_00293860(puVar5), lVar4 == 0)) {

      _objc_retain(puVar5);

      puVar3 = puVar5;

    }

    else {

      auVar14 = _objc_alloc_init(&objc::class_t::XZYCLGEntry);

      uVar6 = auVar14._0_8_;

      FUN_0029f060(uVar6,auVar14._8_8_,1);

      FUN_0029e780(uVar6,extraout_x1_01,&cf___xzy_clg_side_total__);

      FUN_0029f080(uVar6,extraout_x1_02,0);

      uStack_248 = 0;

      local_250 = 0;

      uStack_238 = 0;

      uStack_240 = 0;

      lStack_268 = 0;

      local_270 = 0;

      uStack_258 = 0;

      local_260 = (long *)0x0;

      _objc_retain(puVar5);

      lVar4 = FUN_00293880(puVar5,extraout_x1_03,&local_270,auStack_170,0x10);

      if (lVar4 != 0) {

        lVar10 = *local_260;

        do {

          lVar12 = 0;

          do {

            if (*local_260 != lVar10) {

              _objc_enumerationMutation(puVar5);

            }

            uVar11 = *(undefined8 *)(lStack_268 + lVar12 * 8);

            iVar1 = FUN_00297760(uVar11);

            uVar7 = extraout_x1_04;

            if (iVar1 != 0) {

              FUN_00295de0(uVar11);

              uVar7 = _objc_retainAutoreleasedReturnValue();

              lVar8 = FUN_00297fa0();

              _objc_release(uVar7);

              uVar7 = extraout_x1_05;

              if ((lVar8 != 0 & DAT_003eaac1) != 0) {

                FUN_00295de0(uVar11);

                auVar14 = _objc_retainAutoreleasedReturnValue();

                iVar1 = FUN_00297820(auVar14._0_8_,auVar14._8_8_,&cf_other);

                _objc_release(auVar14._0_8_);

                uVar7 = extraout_x1_06;

                if (iVar1 != 0) {

                  auVar14 = FUN_00295da0(uVar11);

                  FUN_0029e740(uVar6,auVar14._8_8_,auVar14._0_8_);

                  auVar14 = FUN_002a59c0(uVar11);

                  FUN_002a2340(uVar6,auVar14._8_8_,auVar14._0_8_);

                  _objc_release(puVar5);

                  goto LAB_00220c88;

                }

              }

            }

            lVar12 = lVar12 + 1;

          } while (lVar4 != lVar12);

          lVar4 = FUN_00293880(puVar5,uVar7,&local_270,auStack_170,0x10);

        } while (lVar4 != 0);

      }

      _objc_release(puVar5);

      uStack_288 = 0;

      local_290 = 0;

      uStack_278 = 0;

      uStack_280 = 0;

      lStack_2a8 = 0;

      local_2b0 = 0;

      uStack_298 = 0;

      local_2a0 = (long *)0x0;

      _objc_retain(puVar5);

      lVar12 = FUN_00293880(puVar5,extraout_x1_07,&local_2b0,auStack_1f0,0x10);

      lVar4 = 0;

      lVar10 = 0;

      if (lVar12 != 0) {

        lVar8 = *local_2a0;

        do {

          lVar13 = 0;

          do {

            if (*local_2a0 != lVar8) {

              _objc_enumerationMutation(puVar5);

            }

            uVar11 = *(undefined8 *)(lStack_2a8 + lVar13 * 8);

            iVar1 = FUN_00297760(uVar11);

            uVar7 = extraout_x1_08;

            if (iVar1 != 0) {

              FUN_00295de0(uVar11);

              uVar7 = _objc_retainAutoreleasedReturnValue();

              lVar9 = FUN_00297fa0();

              if (lVar9 == 0) {

                _objc_release(uVar7);

                uVar7 = extraout_x1_10;

              }

              else {

                FUN_00295de0(uVar11);

                auVar14 = _objc_retainAutoreleasedReturnValue();

                uVar2 = FUN_00297820(auVar14._0_8_,auVar14._8_8_,&cf___xzy_clg_side_total__);

                _objc_release(auVar14._0_8_);

                _objc_release(uVar7);

                uVar7 = extraout_x1_09;

                if ((uVar2 & 1) == 0) {

                  lVar9 = FUN_00295da0(uVar11);

                  auVar14 = FUN_002a59c0(uVar11);

                  uVar7 = auVar14._8_8_;

                  lVar4 = lVar9 + lVar4;

                  lVar10 = auVar14._0_8_ + lVar10;

                }

              }

            }

            lVar13 = lVar13 + 1;

          } while (lVar12 != lVar13);

          lVar12 = FUN_00293880(puVar5,uVar7,&local_2b0,auStack_1f0,0x10);

        } while (lVar12 != 0);

      }

      _objc_release(puVar5);

      FUN_0029e740(uVar6,extraout_x1_11,lVar4);

      FUN_002a2340(uVar6,extraout_x1_12,lVar10);

LAB_00220c88:

      auVar14 = FUN_00293860(puVar5);

      FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar14._8_8_,auVar14._0_8_ + 1);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      puVar3 = auVar14._0_8_;

      FUN_00291240(puVar3,auVar14._8_8_,uVar6);

      FUN_00291260(puVar3,extraout_x1_13,puVar5);

      _objc_release(uVar6);

    }

    _objc_release(puVar5);

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(puVar3);

  return;

}




