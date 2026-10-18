// downloadBubbleFile:bubbleName:button:isCard: @0x530d4


/* Function Stack Size: 0x2c bytes */



void _0x2f19de29::downloadBubbleFile_bubbleName_button_isCard_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6)



{

  undefined *puVar1;

  undefined8 uVar2;

  int iVar3;

  void *pvVar4;

  undefined8 uVar5;

  ID IVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  ulong uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

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

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  undefined8 extraout_x1_19;

  undefined8 extraout_x1_20;

  undefined8 extraout_x1_21;

  undefined8 extraout_x1_22;

  cfstringStruct *pcVar18;

  long lVar19;

  long lVar20;

  long lVar21;

  long lVar22;

  undefined8 uVar23;

  undefined8 uVar24;

  long lVar25;

  undefined1 auVar26 [16];

  undefined1 auVar27 [16];

  undefined1 auVar28 [16];

  undefined *local_2e0;

  undefined8 local_2d8;

  code *local_2d0;

  undefined *puStack_2c8;

  undefined8 local_2c0;

  undefined8 local_2b8;

  undefined8 local_2b0;

  undefined *local_2a8;

  undefined8 local_2a0;

  code *local_298;

  undefined *puStack_290;

  undefined8 local_288;

  undefined8 local_280;

  undefined8 local_278;

  undefined8 local_270;

  undefined8 local_268;

  ID IStack_260;

  ID local_258;

  ID local_250;

  undefined1 local_248;

  undefined *local_240;

  undefined8 local_238;

  code *local_230;

  undefined *puStack_228;

  ID local_220;

  undefined8 local_218;

  ID local_210;

  undefined8 local_208;

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

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  if (param_4 == 0) {

    pcVar18 = &cf_N_1Y_Ty_Nzz;

    uVar5 = extraout_x1;

  }

  else {

    auVar26 = FUN_00297fa0(param_4);

    uVar5 = auVar26._8_8_;

    if (auVar26._0_8_ == 0) {

      pcVar18 = &cf_N_1Y_Ty_Nzz;

    }

    else {

      if (param_3 != 0) {

        auVar26 = FUN_00297fa0(param_3);

        uVar5 = auVar26._8_8_;

        if (auVar26._0_8_ != 0) {

          iVar3 = FUN_00295f60(param_3,uVar5,&cf__);

          if (iVar3 == 0) {

            iVar3 = FUN_00295f60(param_3,extraout_x1_00,&cf_http___localhost);

            uVar5 = extraout_x1_02;

            if (iVar3 != 0) {

              pvVar4 = _malloc(0x16);

              lVar19 = 0;

              do {

                *(byte *)((long)pvVar4 + lVar19) = (&DAT_00308205)[lVar19] ^ 0xf6;

                lVar19 = lVar19 + 1;

              } while (lVar19 != 0x15);

              *(undefined1 *)((long)pvVar4 + 0x15) = 0;

              FUN_002a46c0(&_OBJC_CLASS___NSString);

              uVar5 = _objc_retainAutoreleasedReturnValue();

              _free(pvVar4);

              FUN_002a4560(param_3,extraout_x1_03,&cf_http___localhost,uVar5);

              IVar6 = _objc_retainAutoreleasedReturnValue();

              goto LAB_000532f8;

            }

          }

          else {

            pvVar4 = _malloc(0x16);

            lVar19 = 0;

            do {

              *(byte *)((long)pvVar4 + lVar19) = (&DAT_00308205)[lVar19] ^ 0xf6;

              lVar19 = lVar19 + 1;

            } while (lVar19 != 0x15);

            *(undefined1 *)((long)pvVar4 + 0x15) = 0;

            FUN_002a46c0(&_OBJC_CLASS___NSString);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            _free(pvVar4);

            FUN_002a44a0(uVar5,extraout_x1_01,param_3);

            IVar6 = _objc_retainAutoreleasedReturnValue();

LAB_000532f8:

            _objc_release(param_3);

            _objc_release(uVar5);

            uVar5 = extraout_x1_04;

            param_3 = IVar6;

          }

          FUN_00290c20(&_OBJC_CLASS___NSURL,uVar5,param_3);

          lVar19 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          uVar5 = extraout_x1_05;

          if (lVar19 == 0) {

            FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

            auVar26 = _objc_retainAutoreleasedReturnValue();

            FUN_002a4420(param_3,auVar26._8_8_,auVar26._0_8_);

            IVar6 = _objc_retainAutoreleasedReturnValue();

            _objc_release(auVar26._0_8_);

            lVar19 = FUN_00297fa0(IVar6);

            if (lVar19 != 0) {

              _objc_retain(IVar6);

              _objc_release(param_3);

              param_3 = IVar6;

            }

            _objc_release(IVar6);

            uVar5 = extraout_x1_06;

          }

          FUN_00290c20(&_OBJC_CLASS___NSURL,uVar5,param_3);

          auVar26 = _objc_retainAutoreleasedReturnValue();

          uVar5 = auVar26._8_8_;

          lVar19 = auVar26._0_8_;

          if (lVar19 == 0) {

LAB_0005363c:

            FUN_002a4680(&_OBJC_CLASS___NSString,uVar5,&cf_N_0W_WeHe_);

            auVar26 = _objc_retainAutoreleasedReturnValue();

            FUN_002a34c0(param_1,auVar26._8_8_,0,auVar26._0_8_,param_5);

            _objc_release(auVar26._0_8_);

          }

          else {

            FUN_0029be80(lVar19);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            lVar7 = FUN_00297fa0();

            if (lVar7 == 0) {

              _objc_release(uVar5);

              uVar5 = extraout_x1_13;

              goto LAB_0005363c;

            }

            FUN_002962a0(lVar19);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            lVar7 = FUN_00297fa0();

            _objc_release(uVar8);

            _objc_release(uVar5);

            uVar5 = extraout_x1_07;

            if (lVar7 == 0) goto LAB_0005363c;

            FUN_002a2e60(&_OBJC_CLASS___UIApplication);

            uVar5 = _objc_retainAutoreleasedReturnValue();

            FUN_00293440();

            uVar8 = _objc_retainAutoreleasedReturnValue();

            _objc_release(uVar5);

            uStack_198 = 0;

            local_1a0 = 0;

            uStack_188 = 0;

            uStack_190 = 0;

            lStack_1b8 = 0;

            local_1c0 = 0;

            uStack_1a8 = 0;

            local_1b0 = (long *)0x0;

            _objc_retain(uVar8);

            lVar7 = FUN_00293880(uVar8,extraout_x1_08,&local_1c0,auStack_100,0x10);

            if (lVar7 != 0) {

              lVar25 = *local_1b0;

              do {

                lVar22 = 0;

                do {

                  if (*local_1b0 != lVar25) {

                    _objc_enumerationMutation(uVar8);

                  }

                  uVar24 = *(undefined8 *)(lStack_1b8 + lVar22 * 8);

                  uVar5 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

                  auVar26 = _objc_opt_isKindOfClass(uVar24,uVar5);

                  uVar5 = auVar26._8_8_;

                  if ((auVar26._0_8_ & 1) != 0) {

                    _objc_retain(uVar24);

                    lStack_1f8 = 0;

                    local_200 = 0;

                    uStack_1e8 = 0;

                    local_1f0 = (long *)0x0;

                    uStack_1d8 = 0;

                    local_1e0 = 0;

                    uStack_1c8 = 0;

                    uStack_1d0 = 0;

                    FUN_002a6560(uVar24);

                    auVar26 = _objc_retainAutoreleasedReturnValue();

                    uVar5 = auVar26._0_8_;

                    lVar9 = FUN_00293880(uVar5,auVar26._8_8_,&local_200,auStack_180,0x10);

                    if (lVar9 != 0) {

                      lVar21 = *local_1f0;

LAB_000534fc:

                      lVar20 = 0;

LAB_00053500:

                      if (*local_1f0 != lVar21) {

                        _objc_enumerationMutation(uVar5);

                      }

                      uVar23 = *(undefined8 *)(lStack_1f8 + lVar20 * 8);

                      iVar3 = FUN_00297900(uVar23);

                      if (iVar3 == 0) goto code_r0x0005352c;

                      FUN_0029bac0(uVar23);

                      lVar9 = _objc_retainAutoreleasedReturnValue();

                      while( true ) {

                        FUN_0029a560(lVar9);

                        lVar21 = _objc_retainAutoreleasedReturnValue();

                        _objc_release();

                        if (lVar21 == 0) break;

                        FUN_0029a560(lVar9);

                        lVar21 = _objc_retainAutoreleasedReturnValue();

                        _objc_release(lVar9);

                        lVar9 = lVar21;

                      }

                      _objc_release(uVar5);

                      _objc_release(uVar24);

                      uVar5 = extraout_x1_11;

                      if (lVar9 == 0) goto LAB_000535e4;

                      _objc_release(uVar8);

                      FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_14,&cf_N__N,

                                   &cf_newline_s_,1);

                      uVar5 = _objc_retainAutoreleasedReturnValue();

                      _objc_alloc(&_OBJC_CLASS___UIView);

                      uVar24 = FUN_00296b80(0x4034000000000000,0x4049000000000000,0x406cc00000000000

                                            ,0x403e000000000000);

                      _objc_alloc(&_OBJC_CLASS___UIView);

                      uVar23 = FUN_00296b80(0,0,0x406cc00000000000,0x4020000000000000);

                      FUN_002a4b20(&_OBJC_CLASS___UIColor);

                      auVar26 = _objc_retainAutoreleasedReturnValue();

                      FUN_0029cf60(uVar23,auVar26._8_8_,auVar26._0_8_);

                      _objc_release(auVar26._0_8_);

                      FUN_00297e40(uVar23);

                      uVar10 = _objc_retainAutoreleasedReturnValue();

                      FUN_0029d820(0x4010000000000000);

                      _objc_release(uVar10);

                      FUN_00291380(uVar24,extraout_x1_15,uVar23);

                      _objc_alloc(&_OBJC_CLASS___UIView);

                      uVar10 = FUN_00296b80(0,0,0,0x4020000000000000);

                      FUN_002a4a80(&_OBJC_CLASS___UIColor);

                      auVar26 = _objc_retainAutoreleasedReturnValue();

                      FUN_0029cf60(uVar10,auVar26._8_8_,auVar26._0_8_);

                      _objc_release(auVar26._0_8_);

                      FUN_00297e40(uVar10);

                      uVar11 = _objc_retainAutoreleasedReturnValue();

                      FUN_0029d820(0x4010000000000000);

                      _objc_release(uVar11);

                      FUN_00291380(uVar24,extraout_x1_16,uVar10);

                      _objc_alloc(&_OBJC_CLASS___UILabel);

                      auVar26 = FUN_00296b80(0,0x4028000000000000,0x406cc00000000000,

                                             0x4032000000000000);

                      uVar11 = auVar26._0_8_;

                      FUN_002a1d80(uVar11,auVar26._8_8_,1);

                      FUN_002a4aa0(0x4028000000000000,&_OBJC_CLASS___UIFont);

                      auVar26 = _objc_retainAutoreleasedReturnValue();

                      FUN_0029e520(uVar11,auVar26._8_8_,auVar26._0_8_);

                      _objc_release(auVar26._0_8_);

                      FUN_0029bfa0(&_OBJC_CLASS___UIColor);

                      auVar26 = _objc_retainAutoreleasedReturnValue();

                      FUN_002a1da0(uVar11,auVar26._8_8_,auVar26._0_8_);

                      _objc_release(auVar26._0_8_);

                      FUN_002a1d60(uVar11,extraout_x1_17,&cf_ck_Wc_);

                      FUN_00291380(uVar24,extraout_x1_18,uVar11);

                      FUN_002a6220(uVar5);

                      auVar26 = _objc_retainAutoreleasedReturnValue();

                      FUN_00291380(auVar26._0_8_,auVar26._8_8_,uVar24);

                      _objc_release(auVar26._0_8_);

                      FUN_0029a500(lVar9,extraout_x1_19,uVar5,1,0);

                      _NSSearchPathForDirectoriesInDomains(9,1,1);

                      uVar12 = _objc_retainAutoreleasedReturnValue();

                      FUN_00295440();

                      auVar26 = _objc_retainAutoreleasedReturnValue();

                      pcVar18 = &cf_CoverRes_Cards;

                      if (param_6 == 0) {

                        pcVar18 = &cf_CoverRes_Bubbles;

                      }

                      FUN_002a4460(auVar26._0_8_,auVar26._8_8_,pcVar18);

                      auVar27 = _objc_retainAutoreleasedReturnValue();

                      FUN_002a4460(auVar27._0_8_,auVar27._8_8_,param_4);

                      uVar13 = _objc_retainAutoreleasedReturnValue();

                      FUN_00294240(&_OBJC_CLASS___NSFileManager);

                      auVar28 = _objc_retainAutoreleasedReturnValue();

                      uVar14 = auVar28._0_8_;

                      local_208 = 0;

                      uVar15 = FUN_00293a60(uVar14,auVar28._8_8_,uVar13,1,0,&local_208);

                      uVar2 = local_208;

                      _objc_retain(local_208);

                      if ((uVar15 & 1) == 0) {

                        local_240 = PTR___NSConcreteStackBlock_003886f0;

                        local_238 = 0xc2000000;

                        local_230 = FUN_00053f98;

                        puStack_228 = &DAT_00388e30;

                        local_220 = param_1;

                        _objc_retain(uVar2);

                        local_218 = uVar2;

                        _objc_retain(param_5);

                        local_210 = param_5;

                        FUN_00294700(uVar5,extraout_x1_22,1,&local_240);

                        _objc_release(local_210);

                        _objc_release(local_218);

                      }

                      else {

                        FUN_002a2ec0(&_OBJC_CLASS___NSURLSession);

                        uVar16 = _objc_retainAutoreleasedReturnValue();

                        puVar1 = PTR___NSConcreteStackBlock_003886f0;

                        local_2a8 = PTR___NSConcreteStackBlock_003886f0;

                        local_2a0 = 0xc2000000;

                        local_298 = FUN_00054054;

                        puStack_290 = &DAT_00389b80;

                        _objc_retain(uVar10);

                        local_288 = uVar10;

                        _objc_retain(uVar11);

                        local_280 = uVar11;

                        _objc_retain(uVar14);

                        local_278 = uVar14;

                        _objc_retain(uVar13);

                        local_270 = uVar13;

                        _objc_retain(uVar5);

                        local_268 = uVar5;

                        IStack_260 = param_1;

                        _objc_retain(param_5);

                        local_248 = (undefined1)param_6;

                        local_258 = param_5;

                        _objc_retain(param_4);

                        local_250 = param_4;

                        FUN_002948a0(uVar16,extraout_x1_20,lVar19,&local_2a8);

                        uVar17 = _objc_retainAutoreleasedReturnValue();

                        _objc_release(uVar16);

                        local_2e0 = puVar1;

                        local_2d8 = 0xc2000000;

                        local_2d0 = FUN_00054f38;

                        puStack_2c8 = &DAT_00389ab0;

                        _objc_retain(uVar17);

                        local_2c0 = uVar17;

                        _objc_retain(uVar10);

                        local_2b8 = uVar10;

                        _objc_retain(uVar11);

                        local_2b0 = uVar11;

                        FUN_0029be40(0x3fb999999999999a,&_OBJC_CLASS___NSTimer,extraout_x1_21,1,

                                     &local_2e0);

                        uVar16 = _objc_retainAutoreleasedReturnValue();

                        FUN_00293d80(&_OBJC_CLASS___NSRunLoop);

                        auVar28 = _objc_retainAutoreleasedReturnValue();

                        FUN_00291420(auVar28._0_8_,auVar28._8_8_,uVar16,

                                     *(undefined8 *)PTR__NSRunLoopCommonModes_003882f8);

                        _objc_release(auVar28._0_8_);

                        FUN_0029b980(uVar17);

                        _objc_release(uVar16);

                        _objc_release(local_2b0);

                        _objc_release(local_2b8);

                        _objc_release(local_2c0);

                        _objc_release(uVar17);

                        _objc_release(local_250);

                        _objc_release(local_258);

                        _objc_release(local_268);

                        _objc_release(local_270);

                        _objc_release(local_278);

                        _objc_release(local_280);

                        _objc_release(local_288);

                      }

                      _objc_release(uVar2);

                      _objc_release(uVar14);

                      _objc_release(uVar13);

                      _objc_release(auVar27._0_8_);

                      _objc_release(auVar26._0_8_);

                      _objc_release(uVar12);

                      _objc_release(uVar11);

                      _objc_release(uVar10);

                      _objc_release(uVar23);

                      _objc_release(uVar24);

                      _objc_release(uVar5);

                      _objc_release(lVar9);

                      goto LAB_00053c1c;

                    }

LAB_00053554:

                    _objc_release(uVar5);

                    _objc_release(uVar24);

                    uVar5 = extraout_x1_10;

                  }

LAB_000535e4:

                  lVar22 = lVar22 + 1;

                } while (lVar22 != lVar7);

                lVar7 = FUN_00293880(uVar8,uVar5,&local_1c0,auStack_100,0x10);

              } while (lVar7 != 0);

            }

            _objc_release(uVar8);

            FUN_002a34c0(param_1,extraout_x1_12,0,&cf_N_1Y_,param_5);

LAB_00053c1c:

            _objc_release(uVar8);

          }

          _objc_release(lVar19);

          goto LAB_0005321c;

        }

      }

      pcVar18 = &cf_N_1Y_;

    }

  }

  FUN_002a34c0(param_1,uVar5,0,pcVar18,param_5);

LAB_0005321c:

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_80) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

code_r0x0005352c:

  lVar20 = lVar20 + 1;

  if (lVar9 == lVar20) goto code_r0x00053538;

  goto LAB_00053500;

code_r0x00053538:

  lVar9 = FUN_00293880(uVar5,extraout_x1_09,&local_200,auStack_180,0x10);

  if (lVar9 == 0) goto LAB_00053554;

  goto LAB_000534fc;

}




