// FUN_00059a38 @0x59a38


/* WARNING: Type propagation algorithm not settling */



void FUN_00059a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

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

  long lVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  long lVar14;

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  long local_2c8 [3];

  long *local_2b0;

  undefined8 uStack_2a8;

  undefined8 local_2a0;

  undefined8 uStack_298;

  undefined8 uStack_290;

  undefined8 uStack_288;

  undefined8 local_280;

  long lStack_278;

  long *local_270;

  undefined8 uStack_268;

  undefined8 local_260;

  undefined8 uStack_258;

  undefined8 uStack_250;

  undefined8 uStack_248;

  undefined8 local_240;

  long lStack_238;

  long *local_230;

  undefined8 uStack_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 uStack_210;

  undefined8 uStack_208;

  undefined1 auStack_1f8 [128];

  undefined1 auStack_178 [128];

  undefined1 auStack_f8 [128];

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  _objc_retain(param_4);

  lVar2 = FUN_00293860(param_4);

  if (lVar2 != 0) {

    _objc_getAssociatedObject(param_2,"fontDir");

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uStack_218 = 0;

    local_220 = 0;

    uStack_208 = 0;

    uStack_210 = 0;

    lStack_238 = 0;

    local_240 = 0;

    uStack_228 = 0;

    local_230 = (long *)0x0;

    _objc_retain(param_4);

    lVar2 = FUN_00293880(param_4,extraout_x1,&local_240,auStack_f8,0x10);

    if (lVar2 != 0) {

      lVar14 = *local_230;

      do {

        lVar11 = 0;

        do {

          if (*local_230 != lVar14) {

            _objc_enumerationMutation(param_4);

          }

          uVar12 = *(undefined8 *)(lStack_238 + lVar11 * 8);

          FUN_002a4120(uVar12);

          FUN_00294040(&_OBJC_CLASS___NSData,extraout_x1_00,uVar12);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          FUN_002a42c0(uVar12);

          if (lVar6 != 0) {

            FUN_00297da0(uVar12);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            FUN_002a4460(uVar3,auVar15._8_8_,auVar15._0_8_);

            uVar7 = _objc_retainAutoreleasedReturnValue();

            _objc_release(auVar15._0_8_);

            iVar1 = FUN_00295160(uVar4,extraout_x1_01,uVar7);

            uVar8 = extraout_x1_02;

            if (iVar1 != 0) {

              FUN_00297da0(uVar12);

              auVar15 = _objc_retainAutoreleasedReturnValue();

              FUN_00291240(uVar5,auVar15._8_8_,auVar15._0_8_);

              _objc_release(auVar15._0_8_);

              uVar8 = extraout_x1_03;

            }

            FUN_002a6580(lVar6,uVar8,uVar7,1);

            _objc_release(uVar7);

          }

          _objc_release(lVar6);

          lVar11 = lVar11 + 1;

        } while (lVar2 != lVar11);

        lVar2 = FUN_00293880(param_4,extraout_x1_04,&local_240,auStack_f8,0x10);

      } while (lVar2 != 0);

    }

    _objc_release(param_4);

    _objc_getAssociatedObject(param_2,"fontFiles");

    uVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b240();

    FUN_00293660(uVar4,extraout_x1_05,uVar3,0);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    uStack_258 = 0;

    local_260 = 0;

    uStack_248 = 0;

    uStack_250 = 0;

    lStack_278 = 0;

    local_280 = 0;

    uStack_268 = 0;

    local_270 = (long *)0x0;

    _objc_retain();

    lVar2 = FUN_00293880(uVar8,extraout_x1_06,&local_280,auStack_178,0x10);

    if (lVar2 != 0) {

      lVar14 = *local_270;

      do {

        lVar11 = 0;

        do {

          if (*local_270 != lVar14) {

            _objc_enumerationMutation(uVar8);

          }

          uVar13 = *(undefined8 *)(lStack_278 + lVar11 * 8);

          FUN_00299b20(uVar13);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          FUN_002984e0();

          uVar9 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar7);

          auVar15 = FUN_00297820(uVar9,extraout_x1_07,&cf_ttf);

          uVar7 = auVar15._8_8_;

          if (((auVar15._0_8_ & 1) != 0) ||

             (iVar1 = FUN_00297820(uVar9,uVar7,&cf_otf), uVar7 = extraout_x1_08, iVar1 != 0)) {

            FUN_00291240(uVar12,uVar7,uVar13);

          }

          _objc_release(uVar9);

          lVar11 = lVar11 + 1;

        } while (lVar2 != lVar11);

        lVar2 = FUN_00293880(uVar8,extraout_x1_09,&local_280,auStack_178,0x10);

      } while (lVar2 != 0);

    }

    _objc_release(uVar8);

    FUN_002a3f00(uVar12,extraout_x1_10,"localizedCaseInsensitiveCompare:");

    FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uStack_298 = 0;

    local_2a0 = 0;

    uStack_288 = 0;

    uStack_290 = 0;

    local_2c8[2] = 0;

    local_2c8[1] = 0;

    uStack_2a8 = 0;

    local_2b0 = (long *)0x0;

    _objc_retain(uVar12);

    auVar15 = FUN_00293880(uVar12,extraout_x1_11,local_2c8 + 1,auStack_1f8,0x10);

    if (auVar15._0_8_ != 0) {

      lVar2 = *local_2b0;

      do {

        uVar9 = auVar15._8_8_;

        lVar14 = 0;

        do {

          if (*local_2b0 != lVar2) {

            _objc_enumerationMutation(uVar12);

            uVar9 = extraout_x1_12;

          }

          uVar13 = *(undefined8 *)(local_2c8[2] + lVar14 * 8);

          FUN_002a4460(uVar3,uVar9,uVar13);

          auVar16 = _objc_retainAutoreleasedReturnValue();

          FUN_00294020(&_OBJC_CLASS___NSData,auVar16._8_8_,auVar16._0_8_);

          lVar11 = _objc_retainAutoreleasedReturnValue();

          if (lVar11 != 0) {

            uVar9 = _CGDataProviderCreateWithCFData(lVar11);

            lVar6 = _CGFontCreateWithDataProvider();

            _CGDataProviderRelease(uVar9);

            if (lVar6 != 0) {

              uVar9 = _CGFontCopyPostScriptName(lVar6);

              local_2c8[0] = 0;

              _CTFontManagerRegisterGraphicsFont(lVar6,local_2c8);

              if (local_2c8[0] != 0) {

                _CFRelease();

              }

              _CGFontRelease(lVar6);

              auVar17 = FUN_00297fa0(uVar9);

              if (auVar17._0_8_ != 0) {

                FUN_002a00a0(uVar7,auVar17._8_8_,uVar9,uVar13);

              }

              _objc_release(uVar9);

            }

          }

          _objc_release(lVar11);

          _objc_release(auVar16._0_8_);

          lVar14 = lVar14 + 1;

          uVar9 = extraout_x1_13;

        } while (auVar15._0_8_ != lVar14);

        auVar15 = FUN_00293880(uVar12,extraout_x1_13,local_2c8 + 1,auStack_1f8,0x10);

      } while (auVar15._0_8_ != 0);

    }

    _objc_release(uVar12);

    _objc_setAssociatedObject(param_2,"fontPSNames",uVar7,1);

    FUN_002a6220(param_2);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62a0(auVar15._0_8_,auVar15._8_8_,&DAT_00001bbc);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar15._0_8_);

    FUN_00296800(&_OBJC_CLASS___NSIndexSet,extraout_x1_14,2);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b1c0(uVar9,auVar15._8_8_,auVar15._0_8_,100);

    _objc_release(auVar15._0_8_);

    auVar15 = FUN_00293860(uVar5);

    if (auVar15._0_8_ != 0) {

      FUN_00293240(uVar5,auVar15._8_8_,&cf_newline_s_);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar15._8_8_,&cf_NNeN_vfe);

      uVar13 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar15._0_8_);

      FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_15,&cf__eQ_b,uVar13,1);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      uVar10 = auVar15._0_8_;

      FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar15._8_8_,&cf__Y,0,0);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_00290fe0(uVar10,auVar15._8_8_,auVar15._0_8_);

      _objc_release(auVar15._0_8_);

      FUN_0029a500(param_2,extraout_x1_16,uVar10,1,0);

      _objc_release(uVar10);

      _objc_release(uVar13);

    }

    _objc_release(uVar9);

    _objc_release(uVar7);

    _objc_release(uVar8);

    _objc_release(uVar12);

    _objc_release(uVar5);

    _objc_release(uVar4);

    _objc_release(uVar3);

  }

  _objc_release(param_4);

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




