// FUN_000c2ba0 @0xc2ba0


void FUN_000c2ba0(long param_1)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar9;

  long lVar10;

  long lVar11;

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

  if (*(long *)(param_1 + 0x20) == 0) {

    if ((*(long *)(param_1 + 0x28) != 0) && (lVar2 = FUN_00297fa0(), lVar2 != 0)) {

      if ((*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) &&

         (lVar2 = _objc_getClass("InputToolViewBar"), lVar2 != 0)) {

        FUN_002a6220(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_00291dc0(&_OBJC_CLASS___NSMutableArray,auVar14._8_8_,auVar14._0_8_);

        uVar1 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar14._0_8_);

        while (lVar3 = FUN_00293860(uVar1), lVar3 != 0) {

          FUN_00295440(uVar1);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          lVar3 = auVar14._0_8_;

          FUN_0029b480(uVar1,auVar14._8_8_,0);

          uVar4 = _objc_opt_isKindOfClass(lVar3,lVar2);

          if ((uVar4 & 1) != 0) {

            if (lVar3 != 0) {

              uStack_248 = 0;

              local_250 = 0;

              uStack_238 = 0;

              uStack_240 = 0;

              lStack_268 = 0;

              local_270 = 0;

              uStack_258 = 0;

              local_260 = (long *)0x0;

              FUN_002a4840(lVar3);

              auVar14 = _objc_retainAutoreleasedReturnValue();

              uVar5 = auVar14._0_8_;

              lVar2 = FUN_00293880(uVar5,auVar14._8_8_,&local_270,auStack_170,0x10);

              if (lVar2 != 0) {

                lVar11 = *local_260;

                do {

                  lVar12 = 0;

                  do {

                    if (*local_260 != lVar11) {

                      _objc_enumerationMutation(uVar5);

                    }

                    lVar9 = *(long *)(lStack_268 + lVar12 * 8);

                    uVar6 = _objc_opt_class(&_OBJC_CLASS___UITextView);

                    uVar4 = _objc_opt_isKindOfClass(lVar9,uVar6);

                    if ((uVar4 & 1) != 0) {

                      _objc_retain(lVar9);

                      goto LAB_000c302c;

                    }

                    uStack_288 = 0;

                    local_290 = 0;

                    uStack_278 = 0;

                    uStack_280 = 0;

                    lStack_2a8 = 0;

                    local_2b0 = 0;

                    uStack_298 = 0;

                    local_2a0 = (long *)0x0;

                    FUN_002a4840(lVar9);

                    auVar14 = _objc_retainAutoreleasedReturnValue();

                    uVar6 = auVar14._0_8_;

                    lVar7 = FUN_00293880(uVar6,auVar14._8_8_,&local_2b0,auStack_1f0,0x10);

                    if (lVar7 != 0) {

                      lVar13 = *local_2a0;

                      do {

                        lVar10 = 0;

                        do {

                          if (*local_2a0 != lVar13) {

                            _objc_enumerationMutation(uVar6);

                          }

                          lVar9 = *(long *)(lStack_2a8 + lVar10 * 8);

                          uVar8 = _objc_opt_class(&_OBJC_CLASS___UITextView);

                          auVar14 = _objc_opt_isKindOfClass(lVar9,uVar8);

                          if ((auVar14._0_8_ & 1) != 0) {

                            _objc_retain(lVar9);

                            _objc_release(uVar6);

                            uVar6 = extraout_x1_03;

                            if (lVar9 == 0) goto LAB_000c2f7c;

                            goto LAB_000c302c;

                          }

                          lVar10 = lVar10 + 1;

                        } while (lVar7 != lVar10);

                        lVar7 = FUN_00293880(uVar6,auVar14._8_8_,&local_2b0,auStack_1f0,0x10);

                      } while (lVar7 != 0);

                    }

                    _objc_release(uVar6);

                    uVar6 = extraout_x1_02;

LAB_000c2f7c:

                    lVar12 = lVar12 + 1;

                  } while (lVar12 != lVar2);

                  lVar2 = FUN_00293880(uVar5,uVar6,&local_270,auStack_170,0x10);

                } while (lVar2 != 0);

              }

              lVar9 = 0;

LAB_000c302c:

              _objc_release(uVar5);

              _objc_release(lVar3);

              _objc_release(uVar1);

              if (lVar9 == 0) goto LAB_000c2fb4;

              FUN_002a1d60(lVar9,extraout_x1_04,&cf___);

              FUN_00297140(lVar9,extraout_x1_05,*(undefined8 *)(param_1 + 0x28));

              FUN_00294320(lVar9);

              uVar1 = _objc_retainAutoreleasedReturnValue();

              uVar4 = _objc_opt_respondsToSelector(uVar1,"textViewDidChange:");

              _objc_release(uVar1);

              if ((uVar4 & 1) != 0) {

                FUN_00294320(lVar9);

                auVar14 = _objc_retainAutoreleasedReturnValue();

                FUN_002a5100(auVar14._0_8_,auVar14._8_8_,lVar9);

                _objc_release(auVar14._0_8_);

              }

              FUN_00292160(lVar9);

              goto LAB_000c2fe4;

            }

            break;

          }

          uStack_208 = 0;

          local_210 = 0;

          uStack_1f8 = 0;

          uStack_200 = 0;

          lStack_228 = 0;

          local_230 = 0;

          uStack_218 = 0;

          local_220 = (long *)0x0;

          FUN_002a4840(lVar3);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          uVar5 = auVar14._0_8_;

          auVar14 = FUN_00293880(uVar5,auVar14._8_8_,&local_230,auStack_f0,0x10);

          if (auVar14._0_8_ != 0) {

            lVar11 = *local_220;

            do {

              uVar6 = auVar14._8_8_;

              lVar12 = 0;

              do {

                if (*local_220 != lVar11) {

                  _objc_enumerationMutation(uVar5);

                  uVar6 = extraout_x1_00;

                }

                FUN_00291240(uVar1,uVar6,*(undefined8 *)(lStack_228 + lVar12 * 8));

                lVar12 = lVar12 + 1;

                uVar6 = extraout_x1_01;

              } while (auVar14._0_8_ != lVar12);

              auVar14 = FUN_00293880(uVar5,extraout_x1_01,&local_230,auStack_f0,0x10);

            } while (auVar14._0_8_ != 0);

          }

          _objc_release(uVar5);

          _objc_release(lVar3);

        }

        _objc_release(uVar1);

      }

LAB_000c2fb4:

      uVar1 = *(undefined8 *)(param_1 + 0x28);

      FUN_002956a0(&_OBJC_CLASS___UIPasteboard);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1a60(auVar14._0_8_,auVar14._8_8_,uVar1);

      _objc_release(auVar14._0_8_);

      lVar9 = 0;

LAB_000c2fe4:

      _objc_release(lVar9);

    }

    if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

      return;

    }

  }

  else {

    FUN_00298400();

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar14._8_8_,&cf_Bl1Y_,auVar14._0_8_,1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar14._0_8_);

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf_nx_,0,0);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar1,auVar14._8_8_,auVar14._0_8_);

    _objc_release(auVar14._0_8_);

    FUN_002a5840(*(undefined8 *)(param_1 + 0x38));

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a500(auVar14._0_8_,auVar14._8_8_,uVar1,1,0);

    _objc_release(auVar14._0_8_);

    if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

      _objc_release(uVar1);

      return;

    }

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




