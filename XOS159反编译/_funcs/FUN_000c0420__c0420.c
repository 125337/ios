// FUN_000c0420 @0xc0420


void FUN_000c0420(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  ulong uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

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

  ulong uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  double dVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  undefined1 auVar19 [16];

  undefined1 auVar20 [16];

  undefined1 auVar21 [16];

  undefined1 auVar22 [16];

  undefined *local_f8;

  undefined8 local_f0;

  code *local_e8;

  undefined *puStack_e0;

  undefined8 local_d8;

  long local_d0;

  undefined8 local_c8;

  long local_c0;

  long local_b8;

  undefined4 local_ac;

  undefined4 local_a8;

  undefined2 local_a4;

  undefined2 local_a2;

  undefined4 local_a0;

  undefined2 local_9c;

  undefined2 local_9a;

  int local_98;

  int local_94;

  undefined8 local_90;

  cfstringStruct *pcStack_88;

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  auVar19 = FUN_00295f60(*(undefined8 *)(param_1 + 0x20),param_2,&cf_mp3_);

  uVar10 = *(undefined8 *)(param_1 + 0x20);

  if ((auVar19._0_8_ & 1) == 0) {

    _objc_retain(uVar10);

    auVar19._8_8_ = extraout_x1;

    auVar19._0_8_ = uVar10;

  }

  else {

    FUN_002a47c0(uVar10,auVar19._8_8_,4);

    auVar19 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_00290c20(&_OBJC_CLASS___NSURL,auVar19._8_8_,auVar19._0_8_);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_002951c0(&_OBJC_CLASS___NSURL,auVar20._8_8_,*(undefined8 *)(param_1 + 0x28));

  uVar10 = _objc_retainAutoreleasedReturnValue();

  local_b8 = 0;

  FUN_000a52a0(auVar20._0_8_,&local_b8);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar4 = local_b8;

  _objc_retain(local_b8);

  if (lVar4 == 0) {

    local_c0 = 0;

    FUN_000a52a0(uVar10,&local_c0);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    lVar4 = local_c0;

    _objc_retain(local_c0);

    if (lVar4 == 0) {

      dVar17 = *(double *)(param_1 + 0x38);

      dVar18 = *(double *)(param_1 + 0x40);

      _objc_retain(uVar1);

      _objc_retain(uVar11);

      auVar21 = FUN_00297fa0(uVar1);

      uVar13 = auVar21._8_8_;

      if (auVar21._0_8_ == 0) {

LAB_000c0758:

        local_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

        pcStack_88 = &cf_ofPN;

        FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar13,&pcStack_88,&local_90,1);

        auVar21 = _objc_retainAutoreleasedReturnValue();

        FUN_00294de0(&_OBJC_CLASS___NSError,auVar21._8_8_,&cf_XZYSilk,0xffffffffffffffec,

                     auVar21._0_8_);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_autorelease();

        _objc_release(auVar21._0_8_);

        uVar13 = 0;

      }

      else {

        auVar21 = FUN_00297fa0(uVar1);

        uVar13 = auVar21._8_8_;

        if ((auVar21._0_8_ & 1) != 0) goto LAB_000c0758;

        auVar21 = FUN_00297fa0(uVar11);

        uVar13 = auVar21._8_8_;

        if (auVar21._0_8_ == 0) goto LAB_000c0758;

        auVar21 = FUN_00297fa0(uVar11);

        uVar13 = auVar21._8_8_;

        if ((auVar21._0_8_ & 1) != 0) goto LAB_000c0758;

        uVar2 = FUN_00297fa0(uVar1);

        uVar3 = FUN_00297fa0(uVar11);

        _objc_retainAutorelease(uVar1);

        lVar4 = FUN_00292680();

        _objc_retainAutorelease(uVar11);

        lVar5 = FUN_00292680();

        auVar21 = FUN_00297fa0(uVar1);

        FUN_002940a0(&_OBJC_CLASS___NSMutableData,auVar21._8_8_,auVar21._0_8_);

        uVar13 = _objc_retainAutoreleasedReturnValue();

        _objc_retainAutorelease();

        lVar6 = FUN_00299000();

        if (1 < uVar2) {

          uVar9 = 0;

          do {

            dVar15 = dVar17 * (double)(int)*(short *)(lVar4 + uVar9 * 2);

            if (uVar9 < uVar3 >> 1) {

              dVar15 = dVar15 + dVar18 * (double)(int)*(short *)(lVar5 + uVar9 * 2);

            }

            dVar16 = 32767.0;

            if (dVar15 <= 32767.0) {

              dVar16 = dVar15;

            }

            dVar15 = -32768.0;

            if (-32768.0 <= dVar16) {

              dVar15 = dVar16;

            }

            *(short *)(lVar6 + uVar9 * 2) = (short)(long)(double)(long)dVar15;

            uVar9 = uVar9 + 1;

          } while (uVar2 >> 1 != uVar9);

        }

        lVar4 = 0;

      }

      _objc_release(uVar11);

      _objc_release(uVar1);

      _objc_retain(lVar4);

      if (lVar4 != 0) {

        uVar14 = 0;

        goto LAB_000c0534;

      }

      _objc_retain(uVar13);

      auVar21 = FUN_00297fa0(uVar13);

      uVar14 = auVar21._8_8_;

      if (auVar21._0_8_ == 0) {

LAB_000c0818:

        local_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

        pcStack_88 = &cf_m_geHe;

        FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar14,&pcStack_88,&local_90,1);

        auVar21 = _objc_retainAutoreleasedReturnValue();

        FUN_00294de0(&_OBJC_CLASS___NSError,auVar21._8_8_,&cf_XZYSilk,0xffffffffffffffeb,

                     auVar21._0_8_);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_autorelease();

        _objc_release(auVar21._0_8_);

        uVar14 = 0;

      }

      else {

        auVar21 = FUN_00297fa0(uVar13);

        uVar14 = auVar21._8_8_;

        if (auVar21._0_8_ >> 0x20 != 0) goto LAB_000c0818;

        local_94 = FUN_00297fa0(uVar13);

        local_98 = local_94 + 0x24;

        local_9a = 1;

        local_9c = 1;

        local_a0 = 24000;

        local_a2 = 0x10;

        local_a4 = 2;

        local_a8 = 48000;

        FUN_00294000(&_OBJC_CLASS___NSMutableData,extraout_x1_00,local_94 + 0x2c);

        auVar21 = _objc_retainAutoreleasedReturnValue();

        uVar12 = auVar21._0_8_;

        FUN_00291960(uVar12,auVar21._8_8_,"RIFF",4);

        FUN_00291960(uVar12,extraout_x1_01,&local_98,4);

        FUN_00291960(uVar12,extraout_x1_02,"WAVEfmt ",8);

        local_ac = 0x10;

        FUN_00291960(uVar12,extraout_x1_03,&local_ac,4);

        FUN_00291960(uVar12,extraout_x1_04,&local_9a,2);

        FUN_00291960(uVar12,extraout_x1_05,&local_9c,2);

        FUN_00291960(uVar12,extraout_x1_06,&local_a0,4);

        FUN_00291960(uVar12,extraout_x1_07,&local_a8,4);

        FUN_00291960(uVar12,extraout_x1_08,&local_a4,2);

        FUN_00291960(uVar12,extraout_x1_09,&local_a2,2);

        FUN_00291960(uVar12,extraout_x1_10,"data",4);

        FUN_00291960(uVar12,extraout_x1_11,&local_94,4);

        FUN_00291980(uVar12,extraout_x1_12,uVar13);

        _NSTemporaryDirectory();

        uVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_00290c60(&_OBJC_CLASS___NSUUID);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_00290c80();

        auVar21 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar21._8_8_,&cf_xzy_tts____mixed_wav);

        auVar22 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4460(uVar14,auVar22._8_8_,auVar22._0_8_);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar22._0_8_);

        _objc_release(auVar21._0_8_);

        _objc_release(uVar7);

        _objc_release(uVar14);

        auVar21 = FUN_002a6580(uVar12,extraout_x1_13,uVar8,1);

        if ((auVar21._0_8_ & 1) == 0) {

          local_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

          pcStack_88 = &cf_elOX__g0WmeN;

          FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar21._8_8_,&pcStack_88,&local_90,1);

          auVar21 = _objc_retainAutoreleasedReturnValue();

          FUN_00294de0(&_OBJC_CLASS___NSError,auVar21._8_8_,&cf_XZYSilk,0xffffffffffffffea,

                       auVar21._0_8_);

          lVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_autorelease();

          _objc_release(auVar21._0_8_);

          uVar14 = 0;

        }

        else {

          FUN_002951c0(&_OBJC_CLASS___NSURL,auVar21._8_8_,uVar8);

          uVar14 = _objc_retainAutoreleasedReturnValue();

          lVar4 = 0;

        }

        _objc_release(uVar8);

        _objc_release(uVar12);

      }

      _objc_release(uVar13);

      _objc_retain(lVar4);

      goto LAB_000c0534;

    }

  }

  else {

    uVar11 = 0;

  }

  uVar14 = 0;

  uVar13 = 0;

LAB_000c0534:

  local_f8 = PTR___NSConcreteStackBlock_003886f0;

  local_f0 = 0xc2000000;

  local_e8 = FUN_000c0c7c;

  puStack_e0 = &DAT_0038a3c0;

  uVar12 = *(undefined8 *)(param_1 + 0x30);

  local_d8 = uVar14;

  _objc_retain(uVar12);

  local_d0 = lVar4;

  local_c8 = uVar12;

  _objc_retain(lVar4);

  _objc_retain(uVar14);

  _dispatch_async(PTR___dispatch_main_q_00388740,&local_f8);

  _objc_release(local_d0);

  _objc_release(local_c8);

  _objc_release(local_d8);

  _objc_release(uVar14);

  _objc_release(uVar13);

  _objc_release(uVar11);

  _objc_release(uVar1);

  _objc_release(lVar4);

  _objc_release(uVar10);

  _objc_release(auVar20._0_8_);

  _objc_release(auVar19._0_8_);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




