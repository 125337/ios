// FUN_000a37b4 @0xa37b4


void FUN_000a37b4(long param_1,undefined8 param_2)



{

  long lVar1;

  int iVar2;

  long lVar3;

  long lVar4;

  ulong uVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined **ppuVar13;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 uVar14;

  long lVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined1 auVar18 [16];

  undefined1 auVar19 [16];

  undefined1 auVar20 [16];

  long local_1c0;

  undefined *local_1b8;

  undefined8 local_1b0;

  code *local_1a8;

  undefined *puStack_1a0;

  undefined8 local_198;

  undefined8 local_190;

  undefined8 local_188;

  undefined8 local_180;

  undefined8 local_178;

  ulong uStack_170;

  undefined1 local_168;

  undefined8 local_160;

  long lStack_158;

  long *local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 uStack_130;

  undefined8 uStack_128;

  undefined *local_120;

  undefined8 local_118;

  code *local_110;

  undefined *puStack_108;

  long local_100;

  long local_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  iVar2 = FUN_00295f60(*(undefined8 *)(param_1 + 0x20),param_2,&cf_mp3_);

  uVar14 = *(undefined8 *)(param_1 + 0x20);

  if (iVar2 == 0) {

    _objc_retain(uVar14);

    auVar18._8_8_ = extraout_x1_00;

    auVar18._0_8_ = uVar14;

  }

  else {

    FUN_002a47c0(uVar14,extraout_x1,4);

    auVar18 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_00290c20(&_OBJC_CLASS___NSURL,auVar18._8_8_,auVar18._0_8_);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  lVar3 = auVar19._0_8_;

  if (lVar3 == 0) {

    _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038acd0);

    goto LAB_000a3948;

  }

  FUN_00294040(&_OBJC_CLASS___NSData,auVar19._8_8_,lVar3);

  local_1c0 = _objc_retainAutoreleasedReturnValue();

  if ((local_1c0 == 0) || (lVar4 = FUN_00297fa0(local_1c0), lVar4 == 0)) {

    ppuVar13 = &PTR___NSConcreteGlobalBlock_0038acf0;

LAB_000a3920:

    _dispatch_async(PTR___dispatch_main_q_00388740,ppuVar13);

  }

  else {

    auVar19 = FUN_00297fa0(local_1c0);

    if (auVar19._0_8_ < 0xb) {

LAB_000a38e8:

      if (iVar2 == 0) {

        ppuVar13 = &PTR___NSConcreteGlobalBlock_0038ad30;

        goto LAB_000a3920;

      }

      _objc_retain(lVar3);

      uVar5 = FUN_00297840(lVar3);

      if ((uVar5 & 1) == 0) {

        _NSTemporaryDirectory();

        uVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_00290c60(&_OBJC_CLASS___NSUUID);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_00290c80();

        auVar19 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar19._8_8_,&cf_xzy_tts____mp3);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        FUN_002a4460(uVar14,auVar20._8_8_,auVar20._0_8_);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar20._0_8_);

        _objc_release(auVar19._0_8_);

        _objc_release(uVar9);

        _objc_release(uVar14);

        auVar19 = FUN_002a6580(local_1c0,extraout_x1_01,lVar4,1);

        if ((auVar19._0_8_ & 1) == 0) {

          _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038ad10);

          _objc_release(lVar4);

          _objc_release(lVar3);

          goto LAB_000a3924;

        }

        FUN_002951c0(&_OBJC_CLASS___NSURL,auVar19._8_8_,lVar4);

        lVar15 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar3);

      }

      else {

        lVar4 = 0;

        lVar15 = lVar3;

      }

      local_f8 = 0;

      FUN_000a52a0(lVar15,&local_f8);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      lVar6 = FUN_00297fa0();

      if (lVar6 == 0) {

        lVar6 = 0;

      }

      else {

        FUN_000cb15c(uVar14,24000,&local_f8);

        lVar6 = _objc_retainAutoreleasedReturnValue();

      }

      _objc_release(uVar14);

      lVar1 = local_f8;

      _objc_retain(local_f8);

      if (lVar4 != 0) {

        FUN_00294240(&_OBJC_CLASS___NSFileManager);

        auVar19 = _objc_retainAutoreleasedReturnValue();

        FUN_0029b3c0(auVar19._0_8_,auVar19._8_8_,lVar4,0);

        _objc_release(auVar19._0_8_);

      }

      lVar7 = FUN_00297fa0(lVar6);

      if (lVar7 == 0) {

        local_120 = PTR___NSConcreteStackBlock_003886f0;

        local_118 = 0xc2000000;

        local_110 = FUN_000a4248;

        puStack_108 = &DAT_00388e60;

        _objc_retain(lVar1);

        local_100 = lVar1;

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_120);

        lVar8 = local_100;

      }

      else {

        _objc_retain(lVar6);

        lVar8 = local_1c0;

        local_1c0 = lVar6;

      }

      _objc_release(lVar8);

      _objc_release(lVar6);

      _objc_release(lVar1);

      _objc_release(lVar4);

      _objc_release(lVar15);

      if (lVar7 == 0) goto LAB_000a3924;

    }

    else {

      FUN_00293fa0(&cf___SILK,auVar19._8_8_,4);

      uVar14 = _objc_retainAutoreleasedReturnValue();

      auVar19 = FUN_00297fa0(local_1c0);

      uVar5 = auVar19._0_8_;

      if (0x13 < uVar5) {

        uVar5 = 0x14;

      }

      lVar4 = FUN_0029ab80(local_1c0,auVar19._8_8_,uVar14,0,0,uVar5);

      _objc_release(uVar14);

      if (lVar4 == 0x7fffffffffffffff) goto LAB_000a38e8;

    }

    _NSSearchPathForDirectoriesInDomains(9,1,1);

    uVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00295440();

    uVar9 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar14);

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    uVar14 = auVar19._0_8_;

    FUN_00293660(uVar14,auVar19._8_8_,uVar9,0);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    uStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    uStack_130 = 0;

    lStack_158 = 0;

    local_160 = 0;

    uStack_148 = 0;

    local_150 = (long *)0x0;

    _objc_retain();

    auVar19 = FUN_00293880(uVar10,extraout_x1_02,&local_160,auStack_f0,0x10);

    if (auVar19._0_8_ != 0) {

      lVar4 = *local_150;

      do {

        uVar11 = auVar19._8_8_;

        lVar15 = 0;

        do {

          if (*local_150 != lVar4) {

            _objc_enumerationMutation(uVar10);

            uVar11 = extraout_x1_03;

          }

          FUN_002a4460(uVar9,uVar11,*(undefined8 *)(lStack_158 + lVar15 * 8));

          auVar20 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4460(auVar20._0_8_,auVar20._8_8_,&cf_Audio);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar20._0_8_);

          uVar5 = FUN_00295160(uVar14,extraout_x1_04,lVar6);

          if ((uVar5 & 1) != 0) {

            _objc_release(uVar10);

            uVar11 = extraout_x1_07;

            if (lVar6 == 0) goto LAB_000a3cf4;

            goto LAB_000a3d30;

          }

          _objc_release(lVar6);

          lVar15 = lVar15 + 1;

          uVar11 = extraout_x1_05;

        } while (auVar19._0_8_ != lVar15);

        auVar19 = FUN_00293880(uVar10,extraout_x1_05,&local_160,auStack_f0,0x10);

      } while (auVar19._0_8_ != 0);

    }

    _objc_release(uVar10);

    uVar11 = extraout_x1_06;

LAB_000a3cf4:

    FUN_002a4460(uVar9,uVar11,&cf_Audio);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    lVar6 = auVar19._0_8_;

    FUN_00293a60(uVar14,auVar19._8_8_,lVar6,1,0,0);

LAB_000a3d30:

    FUN_002940e0(&_OBJC_CLASS___NSDate);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002a51c0();

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_08,&cf___0f);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar11);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_09,&cf____aud);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(lVar6,auVar19._8_8_,auVar19._0_8_);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    uVar11 = auVar20._0_8_;

    uVar5 = FUN_002a6580(local_1c0,auVar20._8_8_,uVar11,1);

    if ((uVar5 & 1) == 0) {

      _dispatch_async(PTR___dispatch_main_q_00388740,&PTR___NSConcreteGlobalBlock_0038ad50);

    }

    else {

      uStack_170 = FUN_00297fa0(local_1c0);

      uStack_170 = uStack_170 / 2000;

      if (uStack_170 < 2) {

        uStack_170 = 1;

      }

      local_1b8 = PTR___NSConcreteStackBlock_003886f0;

      local_1b0 = 0xc2000000;

      local_1a8 = FUN_000a42e8;

      puStack_1a0 = &DAT_0038ad70;

      uVar16 = *(undefined8 *)(param_1 + 0x28);

      _objc_retain(uVar16);

      uVar17 = *(undefined8 *)(param_1 + 0x30);

      local_198 = uVar16;

      _objc_retain(uVar17);

      local_168 = *(undefined1 *)(param_1 + 0x48);

      local_178 = *(undefined8 *)(param_1 + 0x40);

      local_190 = uVar17;

      _objc_retain(uVar11);

      uVar16 = *(undefined8 *)(param_1 + 0x38);

      local_188 = uVar11;

      _objc_retain(uVar16);

      local_180 = uVar16;

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_1b8);

      _objc_release(local_180);

      _objc_release(local_188);

      _objc_release(local_190);

      _objc_release(local_198);

    }

    _objc_release(uVar11);

    _objc_release(auVar19._0_8_);

    _objc_release(uVar12);

    _objc_release(uVar10);

    _objc_release(uVar14);

    _objc_release(lVar6);

    _objc_release(uVar9);

  }

LAB_000a3924:

  _objc_release(local_1c0);

LAB_000a3948:

  _objc_release(lVar3);

  _objc_release(auVar18._0_8_);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




