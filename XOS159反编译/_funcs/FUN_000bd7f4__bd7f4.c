// FUN_000bd7f4 @0xbd7f4


void FUN_000bd7f4(void)



{

  undefined *puVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined8 uVar22;

  undefined8 uVar23;

  undefined8 uVar24;

  undefined8 uVar25;

  undefined8 uVar26;

  undefined8 uVar27;

  undefined8 uVar28;

  undefined8 uVar29;

  undefined8 uVar30;

  undefined8 uVar31;

  undefined8 uVar32;

  undefined8 uVar33;

  undefined8 uVar34;

  undefined8 uVar35;

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

  long lVar36;

  long lVar37;

  long lVar38;

  long lVar39;

  long lVar40;

  long lVar41;

  undefined1 auVar42 [16];

  undefined1 auVar43 [16];

  undefined1 auVar44 [16];

  undefined8 local_260;

  long lStack_258;

  long *local_250;

  undefined8 uStack_248;

  undefined8 local_240;

  undefined8 uStack_238;

  undefined8 uStack_230;

  undefined8 uStack_228;

  undefined8 local_220;

  long lStack_218;

  long *local_210;

  undefined8 uStack_208;

  undefined8 local_200;

  undefined8 uStack_1f8;

  undefined8 uStack_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 local_1d8;

  undefined8 local_1d0;

  undefined8 local_1c8;

  undefined8 local_1c0;

  undefined8 local_1b8;

  undefined8 local_1b0;

  undefined8 local_1a8;

  undefined8 local_1a0;

  undefined8 local_198;

  undefined8 local_190;

  undefined8 local_188;

  undefined8 local_180;

  undefined8 local_178;

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_00291a00();

  _objc_release(uVar2);

  if (lVar3 != 0) goto LAB_000be380;

  uStack_1f8 = 0;

  local_200 = 0;

  uStack_1e8 = 0;

  uStack_1f0 = 0;

  lStack_218 = 0;

  local_220 = 0;

  uStack_208 = 0;

  local_210 = (long *)0x0;

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00293440();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  lVar3 = FUN_00293880(uVar4,extraout_x1,&local_220,auStack_f0,0x10);

  lVar36 = 0;

  if (lVar3 == 0) {

    lVar37 = 0;

LAB_000bda18:

    _objc_release(uVar4);

    if (lVar37 != 0) {

      FUN_0029bac0(lVar37);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      while( true ) {

        FUN_0029a560(lVar3);

        lVar38 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar38 == 0) break;

        FUN_0029a560(lVar3);

        lVar38 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar3);

        lVar3 = lVar38;

      }

      uVar2 = _objc_opt_class(&_OBJC_CLASS___UINavigationController);

      uVar6 = _objc_opt_isKindOfClass(lVar3,uVar2);

      if ((uVar6 & 1) == 0) {

        uVar2 = _objc_opt_class(&_OBJC_CLASS___UITabBarController);

        uVar6 = _objc_opt_isKindOfClass(lVar3,uVar2);

        if ((uVar6 & 1) != 0) {

          _objc_retain(lVar3);

          FUN_0029c340(lVar3);

          uVar2 = _objc_retainAutoreleasedReturnValue();

          uVar4 = _objc_opt_class(&_OBJC_CLASS___UINavigationController);

          uVar6 = _objc_opt_isKindOfClass(uVar2,uVar4);

          _objc_release(uVar2);

          if ((uVar6 & 1) == 0) {

            lVar38 = 0;

          }

          else {

            FUN_0029c340(lVar3);

            lVar38 = _objc_retainAutoreleasedReturnValue();

          }

          _objc_release(lVar3);

          goto LAB_000bdb60;

        }

        FUN_002990e0(lVar3);

        lVar38 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar38 != 0) {

          FUN_002990e0(lVar3);

          lVar38 = _objc_retainAutoreleasedReturnValue();

          goto LAB_000bdb60;

        }

      }

      else {

        _objc_retain(lVar3);

        lVar38 = lVar3;

LAB_000bdb60:

        if (lVar38 != 0) {

          uVar2 = _objc_alloc_init(&objc::class_t::_0x2f19de29);

          auVar42 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

          uVar4 = auVar42._0_8_;

          FUN_002a1f60(uVar4,auVar42._8_8_,&cf__llb);

          FUN_002a4ba0(&_OBJC_CLASS___UIColor);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          FUN_002a6220(uVar4);

          auVar42 = _objc_retainAutoreleasedReturnValue();

          FUN_0029cf60(auVar42._0_8_,auVar42._8_8_,uVar7);

          _objc_release(auVar42._0_8_);

          _objc_release(uVar7);

          FUN_0029e8c0(uVar4,extraout_x1_02,1);

          _objc_alloc(&_OBJC_CLASS___UISearchBar);

          puVar1 = PTR__CGRectZero_00388bf0;

          auVar42 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                                 *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                                 *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                                 *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

          uVar7 = auVar42._0_8_;

          FUN_002a06e0(uVar7,auVar42._8_8_,&cf_d___ll);

          FUN_002a0fe0(uVar7,extraout_x1_03,2);

          FUN_002a1c80(uVar7,extraout_x1_04,0xbb9);

          FUN_002a21e0(uVar7,extraout_x1_05,0);

          FUN_0029dca0(uVar7,extraout_x1_06,uVar2);

          FUN_002a6220(uVar4);

          auVar42 = _objc_retainAutoreleasedReturnValue();

          FUN_00291380(auVar42._0_8_,auVar42._8_8_,uVar7);

          _objc_release(auVar42._0_8_);

          auVar42 = _objc_alloc(&_OBJC_CLASS___UITableView);

          auVar42 = FUN_00296be0(*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),

                                 *(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x18),

                                 auVar42._0_8_,auVar42._8_8_,2);

          uVar8 = auVar42._0_8_;

          FUN_002a21e0(uVar8,auVar42._8_8_,0);

          FUN_002a1c80(uVar8,extraout_x1_07,0x3eb);

          FUN_0029dca0(uVar8,extraout_x1_08,uVar2);

          FUN_0029db40(uVar8,extraout_x1_09,uVar2);

          FUN_002a6220(uVar4);

          auVar42 = _objc_retainAutoreleasedReturnValue();

          FUN_00291380(auVar42._0_8_,auVar42._8_8_,uVar8);

          _objc_release(auVar42._0_8_);

          FUN_002a6220(uVar4);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_0029bb80();

          uVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar9);

          FUN_002a54e0(uVar7);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_002a54e0(uVar10);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          FUN_00293480(0x4020000000000000,uVar9);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          local_1b0 = uVar12;

          FUN_00297f40(uVar7);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a6220(uVar4);

          uVar14 = _objc_retainAutoreleasedReturnValue();

          FUN_00297f40();

          uVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_00293460(uVar13);

          uVar16 = _objc_retainAutoreleasedReturnValue();

          local_1a8 = uVar16;

          FUN_002a5660(uVar7);

          uVar17 = _objc_retainAutoreleasedReturnValue();

          FUN_002a6220(uVar4);

          uVar18 = _objc_retainAutoreleasedReturnValue();

          FUN_002a5660();

          uVar19 = _objc_retainAutoreleasedReturnValue();

          FUN_00293460(uVar17);

          uVar20 = _objc_retainAutoreleasedReturnValue();

          local_1a0 = uVar20;

          FUN_00296060(uVar7);

          uVar21 = _objc_retainAutoreleasedReturnValue();

          FUN_002934a0(0x404c000000000000);

          uVar22 = _objc_retainAutoreleasedReturnValue();

          local_198 = uVar22;

          FUN_002a54e0(uVar8);

          uVar23 = _objc_retainAutoreleasedReturnValue();

          FUN_00292540(uVar7);

          uVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_00293480(0x4020000000000000,uVar23);

          uVar25 = _objc_retainAutoreleasedReturnValue();

          local_190 = uVar25;

          FUN_00297f40(uVar8);

          uVar26 = _objc_retainAutoreleasedReturnValue();

          FUN_002a6220(uVar4);

          uVar27 = _objc_retainAutoreleasedReturnValue();

          FUN_00297f40();

          uVar28 = _objc_retainAutoreleasedReturnValue();

          FUN_00293460(uVar26);

          uVar29 = _objc_retainAutoreleasedReturnValue();

          local_188 = uVar29;

          FUN_002a5660(uVar8);

          uVar30 = _objc_retainAutoreleasedReturnValue();

          FUN_002a6220(uVar4);

          uVar31 = _objc_retainAutoreleasedReturnValue();

          FUN_002a5660();

          uVar32 = _objc_retainAutoreleasedReturnValue();

          FUN_00293460(uVar30);

          uVar33 = _objc_retainAutoreleasedReturnValue();

          local_180 = uVar33;

          FUN_00292540(uVar8);

          uVar34 = _objc_retainAutoreleasedReturnValue();

          FUN_002a6220(uVar4);

          uVar35 = _objc_retainAutoreleasedReturnValue();

          FUN_00292540();

          auVar42 = _objc_retainAutoreleasedReturnValue();

          FUN_00293460(uVar34,auVar42._8_8_,auVar42._0_8_);

          auVar43 = _objc_retainAutoreleasedReturnValue();

          local_178 = auVar43._0_8_;

          FUN_00291e00(&_OBJC_CLASS___NSArray,auVar43._8_8_,&local_1b0,8);

          auVar44 = _objc_retainAutoreleasedReturnValue();

          FUN_00290f20(&_OBJC_CLASS___NSLayoutConstraint,auVar44._8_8_,auVar44._0_8_);

          _objc_release(auVar44._0_8_);

          _objc_release(auVar43._0_8_);

          _objc_release(auVar42._0_8_);

          _objc_release(uVar35);

          _objc_release(uVar34);

          _objc_release(uVar33);

          _objc_release(uVar32);

          _objc_release(uVar31);

          _objc_release(uVar30);

          _objc_release(uVar29);

          _objc_release(uVar28);

          _objc_release(uVar27);

          _objc_release(uVar26);

          _objc_release(uVar25);

          _objc_release(uVar24);

          _objc_release(uVar23);

          _objc_release(uVar22);

          _objc_release(uVar21);

          _objc_release(uVar20);

          _objc_release(uVar19);

          _objc_release(uVar18);

          _objc_release(uVar17);

          _objc_release(uVar16);

          _objc_release(uVar15);

          _objc_release(uVar14);

          _objc_release(uVar13);

          _objc_release(uVar12);

          _objc_release(uVar11);

          _objc_release(uVar9);

          auVar42 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

          uVar9 = FUN_00296f40(auVar42._0_8_,auVar42._8_8_,&cf_N__N_,0,uVar2,

                               "openBubbleDownloadCenter");

          FUN_00297c40(&_OBJC_CLASS___UIColor);

          auVar42 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1f40(uVar9,auVar42._8_8_,auVar42._0_8_);

          _objc_release(auVar42._0_8_);

          uVar11 = *(undefined8 *)PTR__NSForegroundColorAttributeName_00388360;

          local_1c0 = uVar11;

          FUN_00297c40(&_OBJC_CLASS___UIColor);

          auVar42 = _objc_retainAutoreleasedReturnValue();

          local_1b8 = auVar42._0_8_;

          FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar42._8_8_,&local_1b8,&local_1c0,1);

          auVar43 = _objc_retainAutoreleasedReturnValue();

          FUN_002a2060(uVar9,auVar43._8_8_,auVar43._0_8_,0);

          _objc_release(auVar43._0_8_);

          _objc_release(auVar42._0_8_);

          local_1d0 = uVar11;

          FUN_00297c40(&_OBJC_CLASS___UIColor);

          auVar42 = _objc_retainAutoreleasedReturnValue();

          local_1c8 = auVar42._0_8_;

          FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar42._8_8_,&local_1c8,&local_1d0,1);

          auVar43 = _objc_retainAutoreleasedReturnValue();

          FUN_002a2060(uVar9,auVar43._8_8_,auVar43._0_8_,1);

          _objc_release(auVar43._0_8_);

          _objc_release(auVar42._0_8_);

          local_1e0 = uVar11;

          FUN_00297c40(&_OBJC_CLASS___UIColor);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          FUN_00292fc0(0x3fd999999999999a);

          auVar42 = _objc_retainAutoreleasedReturnValue();

          local_1d8 = auVar42._0_8_;

          FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar42._8_8_,&local_1d8,&local_1e0,1);

          auVar43 = _objc_retainAutoreleasedReturnValue();

          FUN_002a2060(uVar9,auVar43._8_8_,auVar43._0_8_,2);

          _objc_release(auVar43._0_8_);

          _objc_release(auVar42._0_8_);

          _objc_release(uVar11);

          FUN_00299140(uVar4);

          auVar42 = _objc_retainAutoreleasedReturnValue();

          FUN_002a0dc0(auVar42._0_8_,auVar42._8_8_,uVar9);

          _objc_release(auVar42._0_8_);

          FUN_00295720(uVar2);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(uVar2,"bubbleFolders",uVar11,1);

          _objc_release(uVar11);

          _objc_setAssociatedObject(uVar4,"settingsVC",uVar2,1);

          FUN_002a6160(&_OBJC_CLASS___NSValue,extraout_x1_10,lVar38);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(uVar2,"bubbleNavController",uVar11,1);

          FUN_00297c40(&_OBJC_CLASS___UIColor);

          uVar12 = _objc_retainAutoreleasedReturnValue();

          FUN_002990c0(lVar38);

          auVar42 = _objc_retainAutoreleasedReturnValue();

          FUN_002a1f40(auVar42._0_8_,auVar42._8_8_,uVar12);

          _objc_release(auVar42._0_8_);

          _objc_release(uVar12);

          FUN_0029aa80(lVar38,extraout_x1_11,uVar4,1);

          _objc_release(uVar11);

          _objc_release(uVar9);

          _objc_release(uVar10);

          _objc_release(uVar8);

          _objc_release(uVar7);

          _objc_release(uVar4);

          _objc_release(uVar2);

          _objc_release(lVar38);

        }

      }

      _objc_release(lVar3);

    }

  }

  else {

    lVar38 = *local_210;

    do {

      lVar39 = 0;

      lVar5 = lVar36;

      do {

        if (*local_210 != lVar38) {

          _objc_enumerationMutation(uVar4);

        }

        lVar36 = *(long *)(lStack_218 + lVar39 * 8);

        auVar42 = FUN_00290f40(lVar36);

        uVar2 = auVar42._8_8_;

        if (auVar42._0_8_ == 0) {

          _objc_retain(lVar36);

          _objc_release(lVar5);

          uStack_238 = 0;

          local_240 = 0;

          uStack_228 = 0;

          uStack_230 = 0;

          lStack_258 = 0;

          local_260 = 0;

          uStack_248 = 0;

          local_250 = (long *)0x0;

          FUN_002a6560(lVar36);

          auVar42 = _objc_retainAutoreleasedReturnValue();

          uVar2 = auVar42._0_8_;

          lVar5 = FUN_00293880(uVar2,auVar42._8_8_,&local_260,auStack_170,0x10);

          if (lVar5 != 0) {

            lVar40 = *local_250;

            do {

              lVar41 = 0;

              do {

                if (*local_250 != lVar40) {

                  _objc_enumerationMutation(uVar2);

                }

                lVar37 = *(long *)(lStack_258 + lVar41 * 8);

                auVar42 = FUN_00297900(lVar37);

                if ((auVar42._0_8_ & 1) != 0) {

                  _objc_retain(lVar37);

                  _objc_release(uVar2);

                  uVar2 = extraout_x1_01;

                  lVar5 = lVar36;

                  if (lVar37 != 0) goto LAB_000bda18;

                  goto LAB_000bd9b0;

                }

                lVar41 = lVar41 + 1;

              } while (lVar5 != lVar41);

              lVar5 = FUN_00293880(uVar2,auVar42._8_8_,&local_260,auStack_170,0x10);

            } while (lVar5 != 0);

          }

          _objc_release(uVar2);

          uVar2 = extraout_x1_00;

          lVar5 = lVar36;

        }

LAB_000bd9b0:

        lVar36 = lVar5;

        lVar39 = lVar39 + 1;

        lVar5 = lVar36;

      } while (lVar39 != lVar3);

      lVar3 = FUN_00293880(uVar4,uVar2,&local_220,auStack_f0,0x10);

    } while (lVar3 != 0);

    _objc_release(uVar4);

    if (lVar36 != 0) {

      FUN_002a6560(lVar36);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_00295440();

      lVar37 = _objc_retainAutoreleasedReturnValue();

      goto LAB_000bda18;

    }

    lVar37 = 0;

  }

  _objc_release(lVar36);

  _objc_release(lVar37);

LAB_000be380:

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




