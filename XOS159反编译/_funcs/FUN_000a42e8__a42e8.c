// FUN_000a42e8 @0xa42e8


void FUN_000a42e8(long param_1)



{

  int iVar1;

  undefined *puVar2;

  int iVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  ulong uVar11;

  undefined8 uVar12;

  long lVar13;

  dispatch_time_t dVar14;

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

  undefined8 uVar15;

  long lVar16;

  long lVar17;

  undefined8 uVar18;

  long lVar19;

  double dVar20;

  undefined1 auVar21 [16];

  undefined1 auVar22 [16];

  undefined8 local_238;

  long local_228;

  long local_218;

  undefined *local_200;

  undefined8 local_1f8;

  code *local_1f0;

  undefined *puStack_1e8;

  undefined8 local_1e0;

  undefined1 auStack_1d8 [8];

  undefined1 auStack_1d0 [8];

  long local_1c8;

  undefined1 auStack_1c0 [8];

  undefined *local_1b8;

  undefined8 local_1b0;

  code *local_1a8;

  undefined *puStack_1a0;

  undefined8 local_198;

  undefined1 auStack_190 [8];

  long local_188;

  undefined8 local_180;

  long lStack_178;

  long *local_170;

  undefined8 uStack_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  undefined *local_140;

  undefined8 local_138;

  code *local_130;

  undefined *puStack_128;

  undefined8 local_120;

  undefined1 auStack_118 [8];

  long local_110;

  undefined1 auStack_108 [8];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  uVar15 = *(undefined8 *)(param_1 + 0x20);

  uVar4 = _objc_getClass("BaseMsgContentViewController");

  uVar5 = _objc_opt_isKindOfClass(uVar15,uVar4);

  if ((uVar5 & 1) == 0) {

    local_218 = 0;

  }

  else {

    local_218 = *(long *)(param_1 + 0x20);

  }

  _objc_retain(local_218);

  uVar5 = FUN_000a34d4(local_218,*(undefined8 *)(param_1 + 0x28));

  if ((uVar5 & 1) == 0) {

    FUN_000a4e90(*(undefined8 *)(param_1 + 0x28));

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if (lVar6 == 0) {

      uVar5 = FUN_000a35b4(local_218,*(undefined8 *)(param_1 + 0x28));

      if ((uVar5 & 1) == 0) {

        lVar16 = 0;

        goto LAB_000a43b4;

      }

    }

    else {

      _objc_retain(lVar6);

      lVar16 = lVar6;

LAB_000a43b4:

      _objc_release(local_218);

      local_218 = lVar16;

    }

    _objc_release(lVar6);

  }

  if (local_218 == 0) {

    local_238 = 0;

LAB_000a4418:

    iVar3 = FUN_000a2d9c(local_218,*(undefined8 *)(param_1 + 0x28));

  }

  else {

    FUN_00295b80();

    local_238 = _objc_retainAutoreleasedReturnValue();

    if (*(char *)(param_1 + 0x50) != '\x01') goto LAB_000a4418;

    lVar6 = FUN_000a2fe8(local_218,local_238);

    if (lVar6 != *(long *)(param_1 + 0x40)) goto LAB_000a4418;

    iVar3 = 1;

  }

  _objc_getClass("MMServiceCenter");

  FUN_00294200();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  auVar21 = _objc_getClass("CContactMgr");

  FUN_00295b60(uVar4,auVar21._8_8_,auVar21._0_8_);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar4);

  FUN_00299c80(uVar15,extraout_x1,"getSelfContact");

  auVar21 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6080(auVar21._0_8_,auVar21._8_8_,&cf_m_nsUsrName);

  auVar22 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar22._0_8_;

  iVar1 = *(int *)(param_1 + 0x48);

  FUN_00294020(&_OBJC_CLASS___NSData,auVar22._8_8_,*(undefined8 *)(param_1 + 0x30));

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_getClass("CMessageWrap");

  auVar22 = _objc_alloc();

  auVar22 = FUN_00296d40(auVar22._0_8_,auVar22._8_8_,0x22,uVar4);

  uVar8 = auVar22._0_8_;

  FUN_0029f8a0(uVar8,auVar22._8_8_,4);

  FUN_0029f800(uVar8,extraout_x1_00,9);

  FUN_0029f820(uVar8,extraout_x1_01,1);

  FUN_0029f720(uVar8,extraout_x1_02,&cf___);

  FUN_0029f780(uVar8,extraout_x1_03,*(undefined8 *)(param_1 + 0x28));

  FUN_0029f760(uVar8,extraout_x1_04,uVar4);

  FUN_0029f860(uVar8,extraout_x1_05,1);

  FUN_002940e0(&_OBJC_CLASS___NSDate);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  dVar20 = (double)FUN_002a51c0();

  FUN_0029f7e0(uVar8,extraout_x1_06,(int)dVar20);

  _objc_release(uVar9);

  _objc_getClass("CExtendInfoOfVoiceMsg");

  auVar22 = _objc_alloc_init();

  uVar9 = auVar22._0_8_;

  FUN_0029f6a0(uVar9,auVar22._8_8_,uVar7);

  FUN_0029f8c0(uVar9,extraout_x1_07,iVar1 * 1000);

  FUN_0029f7a0(uVar9,extraout_x1_08,uVar8);

  FUN_0029f8a0(uVar9,extraout_x1_09,4);

  FUN_0029f880(uVar9,extraout_x1_10,0);

  FUN_0029f6c0(uVar8,extraout_x1_11,uVar9);

  if (*(long *)(param_1 + 0x38) != 0) {

    FUN_000a2bc4(uVar8);

  }

  uVar18 = *(undefined8 *)(param_1 + 0x28);

  _objc_retain(local_218);

  _objc_retain(uVar18);

  local_228 = local_218;

  if (iVar3 != 0) {

    lVar6 = FUN_00297fa0(uVar18);

    if (lVar6 != 0) {

      if (local_218 == 0) {

        FUN_000a4e90(uVar18);

        local_228 = _objc_retainAutoreleasedReturnValue();

        if (local_228 == 0) {

          local_228 = 0;

          goto LAB_000a4a48;

        }

      }

      FUN_00295b80();

      lVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_retain(local_228);

      _objc_retain(lVar6);

      _objc_getAssociatedObject(local_228,PTR_LOOP_003e63e8);

      uVar10 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_002a5a20();

      _objc_release(uVar10);

      if (lVar6 == 0) {

        uVar11 = 0;

        uVar10 = extraout_x1_12;

      }

      else {

        _objc_getAssociatedObject(lVar6,PTR_LOOP_003e63f0);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        uVar11 = FUN_002a5a20();

        _objc_release(uVar10);

        uVar10 = extraout_x1_13;

      }

      puVar2 = PTR_LOOP_003e63e8;

      if (uVar5 <= uVar11) {

        uVar5 = uVar11;

      }

      lVar16 = uVar5 + 1;

      FUN_00299480(&_OBJC_CLASS___NSNumber,uVar10,lVar16);

      uVar10 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(local_228,puVar2,uVar10,1);

      _objc_release(uVar10);

      puVar2 = PTR_LOOP_003e63f0;

      if (lVar6 != 0) {

        FUN_00299480(&_OBJC_CLASS___NSNumber,extraout_x1_14,lVar16);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(lVar6,puVar2,uVar10,1);

        _objc_release(uVar10);

      }

      _objc_release(lVar6);

      _objc_release(local_228);

      if (lVar16 != 0) {

        dVar20 = (double)_CACurrentMediaTime();

        FUN_002993a0(dVar20 + 2.65,&_OBJC_CLASS___NSNumber);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        if (lVar6 != 0) {

          _objc_setAssociatedObject(lVar6,PTR_LOOP_003e63d8,uVar10,1);

        }

        _objc_setAssociatedObject(local_228,PTR_LOOP_003e63e0,uVar10,1);

        _objc_initWeak(auStack_108,local_228);

        uVar12 = FUN_002937a0(uVar18);

        local_140 = PTR___NSConcreteStackBlock_003886f0;

        local_138 = 0xc2000000;

        local_130 = FUN_000a62c4;

        puStack_128 = &DAT_0038ae00;

        _objc_copyWeak(auStack_118,auStack_108);

        _objc_retain(uVar12);

        local_120 = uVar12;

        local_110 = lVar16;

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_140);

        uStack_158 = 0;

        local_160 = 0;

        uStack_148 = 0;

        uStack_150 = 0;

        lStack_178 = 0;

        local_180 = 0;

        uStack_168 = 0;

        local_170 = (long *)0x0;

        lVar13 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdea0,extraout_x1_15,&local_180,

                              auStack_100,0x10);

        puVar2 = PTR___dispatch_main_q_00388740;

        if (lVar13 != 0) {

          lVar19 = *local_170;

          do {

            lVar17 = 0;

            do {

              if (*local_170 != lVar19) {

                _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdea0);

              }

              dVar20 = (double)FUN_00294860(*(undefined8 *)(lStack_178 + lVar17 * 8));

              dVar14 = _dispatch_time(0,(long)(dVar20 * 1000000000.0));

              local_1b8 = PTR___NSConcreteStackBlock_003886f0;

              local_1b0 = 0xc2000000;

              local_1a8 = FUN_000a643c;

              puStack_1a0 = &DAT_0038ae00;

              _objc_copyWeak(auStack_190,auStack_108);

              _objc_retain(uVar12);

              local_198 = uVar12;

              local_188 = lVar16;

              _dispatch_after(dVar14,puVar2,&local_1b8);

              _objc_release(puVar2);

              _objc_release(local_198);

              _objc_destroyWeak(auStack_190);

              lVar17 = lVar17 + 1;

            } while (lVar13 != lVar17);

            lVar13 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdea0,extraout_x1_16,

                                  &local_180,auStack_100,0x10);

          } while (lVar13 != 0);

        }

        _objc_initWeak(auStack_1c0,lVar6);

        dVar14 = _dispatch_time(0,2650000000);

        local_200 = PTR___NSConcreteStackBlock_003886f0;

        local_1f8 = 0xc2000000;

        local_1f0 = FUN_000a6488;

        puStack_1e8 = &DAT_0038ae30;

        _objc_copyWeak(auStack_1d8,auStack_1c0);

        local_1e0 = uVar10;

        _objc_retain();

        _objc_copyWeak(auStack_1d0,auStack_108);

        puVar2 = PTR___dispatch_main_q_00388740;

        local_1c8 = lVar16;

        _dispatch_after(dVar14,PTR___dispatch_main_q_00388740,&local_200);

        _objc_release(puVar2);

        _objc_destroyWeak(auStack_1d0);

        _objc_release(local_1e0);

        _objc_destroyWeak(auStack_1d8);

        _objc_destroyWeak(auStack_1c0);

        _objc_release(local_120);

        _objc_release(uVar10);

        _objc_destroyWeak(auStack_118);

        _objc_release(uVar12);

        _objc_destroyWeak(auStack_108);

      }

      _objc_release(lVar6);

    }

  }

LAB_000a4a48:

  _objc_release(uVar18);

  _objc_release(local_228);

  _objc_getClass("MMServiceCenter");

  FUN_00294200();

  uVar18 = _objc_retainAutoreleasedReturnValue();

  auVar22 = _objc_getClass("CMessageMgr");

  FUN_00295b60(uVar18,auVar22._8_8_,auVar22._0_8_);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar18);

  FUN_002909c0(uVar10,extraout_x1_17,*(undefined8 *)(param_1 + 0x28),uVar8);

  _objc_getClass("MMServiceCenter");

  FUN_00294200();

  uVar18 = _objc_retainAutoreleasedReturnValue();

  auVar22 = _objc_getClass("AudioSender");

  FUN_00295b60(uVar18,auVar22._8_8_,auVar22._0_8_);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar18);

  FUN_00290b20(uVar12,extraout_x1_18,*(undefined8 *)(param_1 + 0x28),uVar8);

  FUN_0002a854(0x400199999999999a,&cf__S,0,1);

  _objc_release(uVar12);

  _objc_release(uVar10);

  _objc_release(uVar9);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar4);

  _objc_release(auVar21._0_8_);

  _objc_release(uVar15);

  _objc_release(local_238);

  _objc_release(local_218);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




