// FUN_0021ccd8 @0x21ccd8


void FUN_0021ccd8(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,

                 ulong param_6)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  ulong uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  long lVar13;

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

  bool bVar14;

  long lVar15;

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined8 local_2e0;

  cfstringStruct *local_2c0;

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

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  if ((param_1 == 0) || ((DAT_003ead50 & 1) != 0)) goto LAB_0021d620;

  FUN_002a6080(param_2,extraout_x1,&cf_m_nsUserName);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_retain(param_2);

  if (param_2 == 0) {

    local_2c0 = &cf_other;

  }

  else {

    FUN_002a6080(param_2,extraout_x1_00,&cf_m_nsUserName);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00211e50(param_2,uVar3);

    local_2c0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    _objc_release(uVar3);

  }

  _objc_release(param_2);

  auVar16 = FUN_00297fa0(param_3);

  if (auVar16._0_8_ == 0) {

    FUN_0021bac8(param_1);

  }

  else {

    iVar1 = FUN_00297820(param_3,auVar16._8_8_,local_2c0);

    if (iVar1 == 0) {

      FUN_0021e21c(param_1,uVar2,param_4);

    }

    else {

      lVar4 = FUN_00212188(param_2);

      if (param_5 == 0) {

        bVar14 = false;

      }

      else {

        lVar5 = FUN_002984c0();

        bVar14 = lVar5 < lVar4;

      }

      if (((param_6 & 1) != 0) || (bVar14)) {

LAB_0021d600:

        FUN_0021e21c(param_1,uVar2,param_4);

      }

      else {

        lVar5 = FUN_00297fa0(uVar2);

        if (lVar5 != 0) {

          _objc_retain(param_1);

          _objc_retain(param_4);

          _objc_retain(uVar2);

          if ((param_4 != 0) && (lVar5 = FUN_00297fa0(uVar2), lVar5 != 0)) {

            FUN_002a6620(param_4);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_00299540(auVar16._0_8_,auVar16._8_8_,uVar2);

            lVar5 = _objc_retainAutoreleasedReturnValue();

            _objc_release(auVar16._0_8_);

            if (lVar5 != 0) {

              FUN_00211d9c(param_1,lVar5);

              auVar16 = _objc_retainAutoreleasedReturnValue();

              lVar7 = auVar16._0_8_;

              if (lVar7 == 0) {

                _objc_release(lVar5);

                _objc_release(uVar2);

                _objc_release(param_4);

                _objc_release(param_1);

              }

              else {

                FUN_002a6080(lVar7,auVar16._8_8_,&cf_m_nsUserName);

                auVar16 = _objc_retainAutoreleasedReturnValue();

                uVar6 = FUN_00297820(auVar16._0_8_,auVar16._8_8_,uVar2);

                _objc_release(auVar16._0_8_);

                _objc_release(lVar7);

                _objc_release(lVar5);

                _objc_release(uVar2);

                _objc_release(param_4);

                _objc_release(param_1);

                if ((uVar6 & 1) != 0) goto LAB_0021cf5c;

              }

              goto LAB_0021d600;

            }

          }

          _objc_release(uVar2);

          _objc_release(param_4);

          _objc_release(param_1);

        }

LAB_0021cf5c:

        _objc_retain(uVar2);

        uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

        auVar16 = _objc_opt_isKindOfClass(uVar2,uVar3);

        if ((auVar16._0_8_ & 1) == 0) {

          uVar3 = 0;

        }

        else {

          uVar3 = FUN_00297820(uVar2,auVar16._8_8_,&cf_brandservicesessionholder);

        }

        _objc_release(uVar2);

        lVar5 = FUN_00212374(param_2,uVar3,lVar4);

        _objc_retain(param_1);

        _objc_retain(uVar2);

        _objc_retain(local_2c0);

        lVar7 = FUN_00297fa0(uVar2);

        if ((lVar7 == 0) || (lVar7 = FUN_00297fa0(local_2c0), lVar7 == 0)) {

          _objc_release(local_2c0);

          _objc_release(uVar2);

          _objc_release(param_1);

LAB_0021d540:

          FUN_0021e588(param_1);

        }

        else {

          _objc_getAssociatedObject(param_1,&DAT_003ead5c);

          lVar7 = _objc_retainAutoreleasedReturnValue();

          lVar8 = FUN_00293860();

          if (lVar8 == 0) {

LAB_0021d51c:

            _objc_release(lVar7);

            _objc_release(local_2c0);

            _objc_release(uVar2);

            _objc_release(param_1);

            goto LAB_0021d540;

          }

          uStack_248 = 0;

          local_250 = 0;

          uStack_238 = 0;

          uStack_240 = 0;

          lStack_268 = 0;

          local_270 = 0;

          uStack_258 = 0;

          local_260 = (long *)0x0;

          FUN_00291600(lVar7);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          local_2e0 = auVar16._0_8_;

          auVar16 = FUN_00293880(local_2e0,auVar16._8_8_,&local_270,auStack_170,0x10);

          if (auVar16._0_8_ != 0) {

            lVar8 = *local_260;

            do {

              uVar3 = auVar16._8_8_;

              lVar15 = 0;

              do {

                if (*local_260 != lVar8) {

                  _objc_enumerationMutation(local_2e0);

                  uVar3 = extraout_x1_01;

                }

                FUN_00299540(lVar7,uVar3,*(undefined8 *)(lStack_268 + lVar15 * 8));

                uVar3 = _objc_retainAutoreleasedReturnValue();

                uVar6 = FUN_00297aa0();

                if ((uVar6 & 1) != 0) {

                  FUN_002a6660(uVar3);

                  lVar9 = _objc_retainAutoreleasedReturnValue();

                  if (lVar9 != 0) {

                    FUN_002a6660(uVar3);

                    auVar17 = _objc_retainAutoreleasedReturnValue();

                    FUN_00299540(auVar17._0_8_,auVar17._8_8_,uVar2);

                    lVar10 = _objc_retainAutoreleasedReturnValue();

                    _objc_release();

                    _objc_release(auVar17._0_8_);

                    _objc_release(lVar9);

                    if (lVar10 != 0) goto LAB_0021d0f0;

                  }

                  _objc_release(uVar3);

                  goto LAB_0021d514;

                }

LAB_0021d0f0:

                _objc_release(uVar3);

                lVar15 = lVar15 + 1;

                uVar3 = extraout_x1_02;

              } while (auVar16._0_8_ != lVar15);

              auVar16 = FUN_00293880(local_2e0,extraout_x1_02,&local_270,auStack_170,0x10);

            } while (auVar16._0_8_ != 0);

          }

          _objc_release(local_2e0);

          uStack_288 = 0;

          local_290 = 0;

          uStack_278 = 0;

          uStack_280 = 0;

          lStack_2a8 = 0;

          local_2b0 = 0;

          uStack_298 = 0;

          local_2a0 = (long *)0x0;

          FUN_00291600(lVar7);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          local_2e0 = auVar16._0_8_;

          auVar16 = FUN_00293880(local_2e0,auVar16._8_8_,&local_2b0,auStack_1f0,0x10);

          if (auVar16._0_8_ == 0) {

LAB_0021d514:

            _objc_release(local_2e0);

            goto LAB_0021d51c;

          }

          bVar14 = false;

          lVar8 = *local_2a0;

          do {

            uVar3 = auVar16._8_8_;

            lVar15 = 0;

            do {

              if (*local_2a0 != lVar8) {

                _objc_enumerationMutation(local_2e0);

                uVar3 = extraout_x1_03;

              }

              FUN_00299540(lVar7,uVar3,*(undefined8 *)(lStack_2a8 + lVar15 * 8));

              uVar3 = _objc_retainAutoreleasedReturnValue();

              uVar6 = FUN_00297aa0();

              if ((uVar6 & 1) != 0) {

                FUN_002a6660(uVar3);

                auVar17 = _objc_retainAutoreleasedReturnValue();

                FUN_00299540(auVar17._0_8_,auVar17._8_8_,uVar2);

                uVar11 = _objc_retainAutoreleasedReturnValue();

                _objc_release(auVar17._0_8_);

                auVar17 = FUN_002984c0(uVar11);

                FUN_00299420(&_OBJC_CLASS___NSNumber,auVar17._8_8_,lVar5);

                uVar12 = _objc_retainAutoreleasedReturnValue();

                FUN_002a6660(uVar3);

                auVar18 = _objc_retainAutoreleasedReturnValue();

                FUN_002a00a0(auVar18._0_8_,auVar18._8_8_,uVar12,uVar2);

                _objc_release(auVar18._0_8_);

                _objc_release(uVar12);

                lVar9 = FUN_00297fa0(uVar2);

                if (lVar9 != 0) {

                  FUN_002a6600(uVar3);

                  auVar18 = _objc_retainAutoreleasedReturnValue();

                  FUN_002a00a0(auVar18._0_8_,auVar18._8_8_,local_2c0,uVar2);

                  _objc_release(auVar18._0_8_);

                }

                if (lVar5 != auVar17._0_8_) {

                  FUN_00294780(uVar3);

                  uVar12 = _objc_retainAutoreleasedReturnValue();

                  lVar9 = lVar5 - auVar17._0_8_;

                  FUN_00220648(uVar12,local_2c0,lVar9);

                  _objc_release(uVar12);

                  if ((DAT_003eaac1 == '\x01') &&

                     (uVar6 = FUN_00297820(local_2c0,extraout_x1_04,&cf_other), (uVar6 & 1) == 0)) {

                    FUN_00294780(uVar3);

                    uVar12 = _objc_retainAutoreleasedReturnValue();

                    FUN_00220648(uVar12,&cf_other,lVar9);

                    _objc_release(uVar12);

                  }

                }

                _objc_release(uVar11);

                bVar14 = true;

              }

              _objc_release(uVar3);

              lVar15 = lVar15 + 1;

              uVar3 = extraout_x1_05;

            } while (auVar16._0_8_ != lVar15);

            auVar16 = FUN_00293880(local_2e0,extraout_x1_05,&local_2b0,auStack_1f0,0x10);

          } while (auVar16._0_8_ != 0);

          _objc_release(local_2e0);

          if (!bVar14) goto LAB_0021d51c;

          _objc_retain(param_1);

          _objc_retain(lVar7);

          FUN_002a6080(param_1,extraout_x1_06,&cf_m_tableView);

          lVar5 = _objc_retainAutoreleasedReturnValue();

          if (lVar5 == 0) {

            lVar5 = 0;

          }

          else {

            uStack_208 = 0;

            local_210 = 0;

            uStack_1f8 = 0;

            uStack_200 = 0;

            lStack_228 = 0;

            local_230 = 0;

            uStack_218 = 0;

            local_220 = (long *)0x0;

            FUN_002a62e0(lVar5);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            uVar3 = auVar16._0_8_;

            lVar8 = FUN_00293880(uVar3,auVar16._8_8_,&local_230,auStack_f0,0x10);

            if (lVar8 != 0) {

              lVar15 = *local_220;

              do {

                lVar9 = 0;

                do {

                  if (*local_220 != lVar15) {

                    _objc_enumerationMutation(uVar3);

                  }

                  uVar12 = *(undefined8 *)(lStack_228 + lVar9 * 8);

                  FUN_0029b9c0(uVar12);

                  auVar16 = _objc_retainAutoreleasedReturnValue();

                  uVar6 = FUN_00297820(auVar16._0_8_,auVar16._8_8_,&cf_XZYCLGDividerCell);

                  _objc_release(auVar16._0_8_);

                  uVar11 = extraout_x1_07;

                  if ((uVar6 & 1) != 0) {

                    _objc_getAssociatedObject(uVar12,&DAT_003eaab0);

                    lVar10 = _objc_retainAutoreleasedReturnValue();

                    if ((lVar10 != 0) && (uVar6 = FUN_00297760(lVar10), (uVar6 & 1) != 0)) {

                      _objc_getAssociatedObject(uVar12,&DAT_003eaabc);

                      auVar16 = _objc_retainAutoreleasedReturnValue();

                      lVar13 = auVar16._0_8_;

                      if (lVar13 != 0) {

                        if (DAT_003e70f0 == '\x01') {

                          auVar17 = FUN_002a59c0(lVar10);

                        }

                        else {

                          auVar17._8_8_ = 0;

                          auVar17._0_8_ = auVar16._8_8_;

                          auVar17 = auVar17 << 0x40;

                        }

                        FUN_002a2340(lVar13,auVar17._8_8_,auVar17._0_8_);

                        uVar11 = _objc_opt_class(&objc::class_t::XZYCLG3DGroupCell);

                        uVar6 = _objc_opt_isKindOfClass(uVar12,uVar11);

                        if ((uVar6 & 1) != 0) {

                          FUN_0029ff40(uVar12);

                        }

                      }

                      _objc_release(lVar13);

                    }

                    _objc_release(lVar10);

                    uVar11 = extraout_x1_08;

                  }

                  lVar9 = lVar9 + 1;

                } while (lVar8 != lVar9);

                lVar8 = FUN_00293880(uVar3,uVar11,&local_230,auStack_f0,0x10);

              } while (lVar8 != 0);

            }

            _objc_release(uVar3);

          }

          _objc_getAssociatedObject(param_1,&DAT_003eae53);

          lVar8 = _objc_retainAutoreleasedReturnValue();

          _objc_getAssociatedObject(param_1,&DAT_003ead83);

          lVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_0020e91c(param_1);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          lVar9 = auVar16._0_8_;

          uVar3 = 0;

          if ((lVar7 != 0) && (lVar9 != 0)) {

            FUN_00299540(lVar7,auVar16._8_8_,lVar9);

            uVar3 = _objc_retainAutoreleasedReturnValue();

          }

          if ((lVar8 != 0) && (iVar1 = FUN_00297aa0(uVar3), iVar1 != 0)) {

            FUN_00220818(uVar3);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_002a5ec0(lVar8,auVar16._8_8_,auVar16._0_8_);

            _objc_release(auVar16._0_8_);

          }

          if ((lVar15 != 0) && (iVar1 = FUN_00297aa0(uVar3), iVar1 != 0)) {

            FUN_00220818(uVar3);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_002a5ec0(lVar15,auVar16._8_8_,auVar16._0_8_);

            _objc_release(auVar16._0_8_);

          }

          _objc_release(uVar3);

          _objc_release(lVar9);

          _objc_release(lVar15);

          _objc_release(lVar8);

          _objc_release(lVar5);

          _objc_release(lVar7);

          _objc_release(param_1);

          _objc_release(lVar7);

          _objc_release(local_2c0);

          _objc_release(uVar2);

          _objc_release(param_1);

        }

        lVar5 = FUN_00297fa0(uVar2);

        if (lVar5 != 0) {

          FUN_002a6640(param_4);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(auVar16._0_8_,auVar16._8_8_,uVar2);

          lVar5 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          _objc_release(auVar16._0_8_);

          if (lVar5 != 0) {

            FUN_00299420(&_OBJC_CLASS___NSNumber,extraout_x1_09,lVar4);

            uVar3 = _objc_retainAutoreleasedReturnValue();

            FUN_002a6640(param_4);

            auVar16 = _objc_retainAutoreleasedReturnValue();

            FUN_002a00a0(auVar16._0_8_,auVar16._8_8_,uVar3,uVar2);

            _objc_release(auVar16._0_8_);

            _objc_release(uVar3);

          }

        }

      }

    }

  }

  _objc_release(local_2c0);

  _objc_release(uVar2);

LAB_0021d620:

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




