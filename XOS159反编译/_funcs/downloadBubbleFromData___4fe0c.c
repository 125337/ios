// downloadBubbleFromData: @0x4fe0c


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::downloadBubbleFromData_(ID param_1,SEL param_2,ID param_3)



{

  undefined *puVar1;

  int iVar2;

  long lVar3;

  void *pvVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  long lVar13;

  undefined8 uVar14;

  ulong uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

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

  long lVar19;

  long lVar20;

  undefined8 uVar21;

  undefined8 uVar22;

  long lVar23;

  long lVar24;

  long lVar25;

  undefined1 auVar26 [16];

  undefined1 auVar27 [16];

  undefined1 auVar28 [16];

  undefined *local_2d0;

  undefined8 local_2c8;

  code *local_2c0;

  undefined *puStack_2b8;

  undefined8 local_2b0;

  undefined8 local_2a8;

  undefined8 local_2a0;

  undefined *local_298;

  undefined8 local_290;

  code *local_288;

  undefined *puStack_280;

  undefined8 local_278;

  undefined8 local_270;

  undefined8 local_268;

  undefined8 local_260;

  undefined8 local_258;

  long local_250;

  long local_248;

  ID IStack_240;

  undefined *local_238;

  undefined8 local_230;

  code *local_228;

  undefined *puStack_220;

  undefined8 local_218;

  long local_210;

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

  if (param_3 == 0) goto LAB_000507d8;

  FUN_00299540(param_3,extraout_x1,&cf_bubble_name);

  auVar26 = _objc_retainAutoreleasedReturnValue();

  lVar3 = auVar26._0_8_;

  FUN_00299540(param_3,auVar26._8_8_,&cf_download_url);

  auVar26 = _objc_retainAutoreleasedReturnValue();

  lVar6 = auVar26._0_8_;

  if ((lVar3 != 0) && (lVar6 != 0)) {

    iVar2 = FUN_00295f60(lVar6,auVar26._8_8_,&cf__);

    if (iVar2 == 0) {

      iVar2 = FUN_00295f60(lVar6,extraout_x1_00,&cf_http___localhost);

      lVar19 = lVar6;

      if (iVar2 != 0) {

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

        FUN_002a4560(lVar6,extraout_x1_02,&cf_http___localhost,uVar5);

        lVar19 = _objc_retainAutoreleasedReturnValue();

        goto LAB_0004ffb8;

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

      FUN_002a44a0(uVar5,extraout_x1_01,lVar6);

      lVar19 = _objc_retainAutoreleasedReturnValue();

LAB_0004ffb8:

      _objc_release(lVar6);

      _objc_release(uVar5);

    }

    FUN_00290c00(&_OBJC_CLASS___NSCharacterSet);

    auVar26 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4420(lVar19,auVar26._8_8_,auVar26._0_8_);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar19);

    _objc_release(auVar26._0_8_);

    FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_03,&cf_N__N,&cf_newline_s_,1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar7 = FUN_00296b80(0x4034000000000000,0x4049000000000000,0x406cc00000000000,0x403e000000000000

                        );

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar8 = FUN_00296b80(0,0,0x406cc00000000000,0x4020000000000000);

    FUN_002a4b20(&_OBJC_CLASS___UIColor);

    auVar26 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar8,auVar26._8_8_,auVar26._0_8_);

    _objc_release(auVar26._0_8_);

    FUN_00297e40(uVar8);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4010000000000000);

    _objc_release(uVar9);

    FUN_00291380(uVar7,extraout_x1_04,uVar8);

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar9 = FUN_00296b80(0,0,0,0x4020000000000000);

    FUN_002a4a80(&_OBJC_CLASS___UIColor);

    auVar26 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar9,auVar26._8_8_,auVar26._0_8_);

    _objc_release(auVar26._0_8_);

    FUN_00297e40(uVar9);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4010000000000000);

    _objc_release(uVar10);

    FUN_00291380(uVar7,extraout_x1_05,uVar9);

    _objc_alloc(&_OBJC_CLASS___UILabel);

    auVar26 = FUN_00296b80(0,0x4028000000000000,0x406cc00000000000,0x4032000000000000);

    uVar10 = auVar26._0_8_;

    FUN_002a1d80(uVar10,auVar26._8_8_,1);

    FUN_002a4aa0(0x4028000000000000,&_OBJC_CLASS___UIFont);

    auVar26 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(uVar10,auVar26._8_8_,auVar26._0_8_);

    _objc_release(auVar26._0_8_);

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    auVar26 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(uVar10,auVar26._8_8_,auVar26._0_8_);

    _objc_release(auVar26._0_8_);

    FUN_002a1d60(uVar10,extraout_x1_06,&cf_ck_Wc_);

    FUN_00291380(uVar7,extraout_x1_07,uVar10);

    FUN_002a6220(uVar5);

    auVar26 = _objc_retainAutoreleasedReturnValue();

    FUN_00291380(auVar26._0_8_,auVar26._8_8_,uVar7);

    _objc_release(auVar26._0_8_);

    FUN_002a2e60(&_OBJC_CLASS___UIApplication);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_00293440();

    uVar12 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar11);

    uStack_198 = 0;

    local_1a0 = 0;

    uStack_188 = 0;

    uStack_190 = 0;

    lStack_1b8 = 0;

    local_1c0 = 0;

    uStack_1a8 = 0;

    local_1b0 = (long *)0x0;

    _objc_retain(uVar12);

    lVar19 = FUN_00293880(uVar12,extraout_x1_08,&local_1c0,auStack_100,0x10);

    if (lVar19 != 0) {

      lVar23 = *local_1b0;

      do {

        lVar24 = 0;

        do {

          if (*local_1b0 != lVar23) {

            _objc_enumerationMutation(uVar12);

          }

          uVar21 = *(undefined8 *)(lStack_1b8 + lVar24 * 8);

          uVar11 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

          auVar26 = _objc_opt_isKindOfClass(uVar21,uVar11);

          uVar11 = auVar26._8_8_;

          if ((auVar26._0_8_ & 1) != 0) {

            _objc_retain(uVar21);

            lStack_1f8 = 0;

            local_200 = 0;

            uStack_1e8 = 0;

            local_1f0 = (long *)0x0;

            uStack_1d8 = 0;

            local_1e0 = 0;

            uStack_1c8 = 0;

            uStack_1d0 = 0;

            FUN_002a6560(uVar21);

            auVar26 = _objc_retainAutoreleasedReturnValue();

            uVar11 = auVar26._0_8_;

            lVar13 = FUN_00293880(uVar11,auVar26._8_8_,&local_200,auStack_180,0x10);

            if (lVar13 != 0) {

              lVar20 = *local_1f0;

LAB_00050328:

              lVar25 = 0;

LAB_0005032c:

              if (*local_1f0 != lVar20) {

                _objc_enumerationMutation(uVar11);

              }

              uVar22 = *(undefined8 *)(lStack_1f8 + lVar25 * 8);

              iVar2 = FUN_00297900(uVar22);

              if (iVar2 == 0) goto code_r0x00050358;

              FUN_0029bac0(uVar22);

              lVar13 = _objc_retainAutoreleasedReturnValue();

              while( true ) {

                FUN_0029a560(lVar13);

                lVar20 = _objc_retainAutoreleasedReturnValue();

                _objc_release();

                if (lVar20 == 0) break;

                FUN_0029a560(lVar13);

                lVar20 = _objc_retainAutoreleasedReturnValue();

                _objc_release(lVar13);

                lVar13 = lVar20;

              }

              _objc_release(uVar11);

              _objc_release(uVar21);

              uVar11 = extraout_x1_11;

              if (lVar13 == 0) goto LAB_00050408;

              goto LAB_00050434;

            }

LAB_00050380:

            _objc_release(uVar11);

            _objc_release(uVar21);

            uVar11 = extraout_x1_10;

          }

LAB_00050408:

          lVar24 = lVar24 + 1;

        } while (lVar24 != lVar19);

        lVar19 = FUN_00293880(uVar12,uVar11,&local_1c0,auStack_100,0x10);

      } while (lVar19 != 0);

    }

    lVar13 = 0;

LAB_00050434:

    _objc_release(uVar12);

    FUN_0029a500(lVar13,extraout_x1_12,uVar5,1,0);

    _NSSearchPathForDirectoriesInDomains(9,1,1);

    uVar21 = _objc_retainAutoreleasedReturnValue();

    FUN_00295440();

    auVar26 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(auVar26._0_8_,auVar26._8_8_,&cf_CoverRes_Bubbles);

    auVar27 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(auVar27._0_8_,auVar27._8_8_,lVar3);

    uVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar28 = _objc_retainAutoreleasedReturnValue();

    uVar14 = auVar28._0_8_;

    local_208 = 0;

    uVar15 = FUN_00293a60(uVar14,auVar28._8_8_,uVar22,1,0,&local_208);

    uVar11 = local_208;

    _objc_retain(local_208);

    if ((uVar15 & 1) == 0) {

      local_238 = PTR___NSConcreteStackBlock_003886f0;

      local_230 = 0xc2000000;

      local_228 = FUN_00050af8;

      puStack_220 = &DAT_00388d50;

      _objc_retain(uVar11);

      local_218 = uVar11;

      _objc_retain(lVar13);

      local_210 = lVar13;

      FUN_00294700(uVar5,extraout_x1_16,1,&local_238);

      _objc_release(local_210);

      uVar16 = local_218;

    }

    else {

      FUN_00290c20(&_OBJC_CLASS___NSURL,extraout_x1_13,lVar6);

      uVar16 = _objc_retainAutoreleasedReturnValue();

      FUN_002a2ec0(&_OBJC_CLASS___NSURLSession);

      uVar17 = _objc_retainAutoreleasedReturnValue();

      puVar1 = PTR___NSConcreteStackBlock_003886f0;

      local_298 = PTR___NSConcreteStackBlock_003886f0;

      local_290 = 0xc2000000;

      local_288 = FUN_00050c30;

      puStack_280 = &DAT_00389a80;

      _objc_retain(uVar9);

      local_278 = uVar9;

      _objc_retain(uVar10);

      local_270 = uVar10;

      _objc_retain(uVar14);

      local_268 = uVar14;

      _objc_retain(uVar22);

      local_260 = uVar22;

      _objc_retain(uVar5);

      local_258 = uVar5;

      _objc_retain(lVar13);

      local_250 = lVar13;

      _objc_retain(lVar3);

      local_248 = lVar3;

      IStack_240 = param_1;

      FUN_002948a0(uVar17,extraout_x1_14,uVar16,&local_298);

      uVar18 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar17);

      local_2d0 = puVar1;

      local_2c8 = 0xc2000000;

      local_2c0 = FUN_00051b30;

      puStack_2b8 = &DAT_00389ab0;

      _objc_retain(uVar18);

      local_2b0 = uVar18;

      _objc_retain(uVar9);

      local_2a8 = uVar9;

      _objc_retain(uVar10);

      local_2a0 = uVar10;

      FUN_0029be40(0x3fb999999999999a,&_OBJC_CLASS___NSTimer,extraout_x1_15,1,&local_2d0);

      uVar17 = _objc_retainAutoreleasedReturnValue();

      FUN_00293d80(&_OBJC_CLASS___NSRunLoop);

      auVar28 = _objc_retainAutoreleasedReturnValue();

      FUN_00291420(auVar28._0_8_,auVar28._8_8_,uVar17,

                   *(undefined8 *)PTR__NSRunLoopCommonModes_003882f8);

      _objc_release(auVar28._0_8_);

      FUN_0029b980(uVar18);

      _objc_release(uVar17);

      _objc_release(local_2a0);

      _objc_release(local_2a8);

      _objc_release(local_2b0);

      _objc_release(uVar18);

      _objc_release(local_248);

      _objc_release(local_250);

      _objc_release(local_258);

      _objc_release(local_260);

      _objc_release(local_268);

      _objc_release(local_270);

      _objc_release(local_278);

    }

    _objc_release(uVar16);

    _objc_release(uVar11);

    _objc_release(uVar14);

    _objc_release(uVar22);

    _objc_release(auVar27._0_8_);

    _objc_release(auVar26._0_8_);

    _objc_release(uVar21);

    _objc_release(uVar12);

    _objc_release(lVar13);

    _objc_release(uVar10);

    _objc_release(uVar9);

    _objc_release(uVar8);

    _objc_release(uVar7);

    _objc_release(uVar5);

  }

  _objc_release(lVar6);

  _objc_release(lVar3);

LAB_000507d8:

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_80) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

code_r0x00050358:

  lVar25 = lVar25 + 1;

  if (lVar13 == lVar25) goto code_r0x00050364;

  goto LAB_0005032c;

code_r0x00050364:

  lVar13 = FUN_00293880(uVar11,extraout_x1_09,&local_200,auStack_180,0x10);

  if (lVar13 == 0) goto LAB_00050380;

  goto LAB_00050328;

}




