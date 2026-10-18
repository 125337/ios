// FUN_00150844 @0x150844


void FUN_00150844(undefined8 param_1)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  long lVar7;

  undefined8 uVar8;

  cfstringStruct *pcVar9;

  dispatch_time_t dVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar11;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  cfstringStruct *local_1b0;

  undefined *local_190;

  undefined8 local_188;

  code *local_180;

  undefined *puStack_178;

  undefined1 auStack_170 [8];

  undefined1 auStack_168 [8];

  undefined8 local_160;

  long lStack_158;

  long *local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 uStack_130;

  undefined8 uStack_128;

  undefined *local_118;

  undefined8 local_110;

  code *local_108;

  undefined *puStack_100;

  cfstringStruct *local_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  (*DAT_003e8930)();

  FUN_002990e0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002990c0();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  FUN_002a62a0(uVar4,extraout_x1,&DAT_00002442);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  lVar5 = auVar13._0_8_;

  if (lVar5 != 0) {

    FUN_002925e0(uVar4,auVar13._8_8_,lVar5);

  }

  DAT_003e89e2 = 1;

  FUN_0016968c(1);

  if (DAT_003e89e3 == '\x01') {

    DAT_003e89e3 = '\0';

    FUN_00136604();

    FUN_00298700(param_1);

    local_1b0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    if (local_1b0 != (cfstringStruct *)0x0) {

      local_118 = PTR___NSConcreteStackBlock_003886f0;

      local_110 = 0xc2000000;

      local_108 = FUN_00158f58;

      puStack_100 = &DAT_00388e60;

      _objc_retain(local_1b0);

      local_f8 = local_1b0;

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_118);

      _objc_release(local_f8);

    }

  }

  else {

    FUN_00292760(param_1);

    iVar2 = FUN_00147794();

    if ((iVar2 == 0) || (iVar2 = FUN_00147f98(), iVar2 == 0)) goto LAB_00150c18;

    FUN_00159000();

    auVar13 = _objc_retainAutoreleasedReturnValue();

    local_1b0 = auVar13._0_8_;

    if (local_1b0 != (cfstringStruct *)0x0) {

      pcVar1 = &cf___;

      if (DAT_003e8870 != (cfstringStruct *)0x0) {

        pcVar1 = DAT_003e8870;

      }

      uVar6 = FUN_00297820(local_1b0,auVar13._8_8_,pcVar1);

      if ((uVar6 & 1) == 0) {

        FUN_00158e08();

        _objc_retain(local_1b0);

        pcVar1 = DAT_003e8870;

        DAT_003e8870 = local_1b0;

        _objc_release(pcVar1);

        FUN_00136604();

        FUN_00298700(param_1);

        lVar7 = _objc_retainAutoreleasedReturnValue();

        if (lVar7 != 0) {

          FUN_0029b140(lVar7);

        }

        _objc_release(lVar7);

      }

    }

    if ((DAT_003e89e4 & 1) == 0) {

      DAT_003e89e4 = 1;

      iVar2 = FUN_001482b0();

      if (iVar2 != 0) {

        FUN_00139ff0();

        uVar3 = _objc_retainAutoreleasedReturnValue();

        auVar13 = FUN_00293860();

        FUN_00291da0(&_OBJC_CLASS___NSMutableArray,auVar13._8_8_,auVar13._0_8_);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        uStack_138 = 0;

        local_140 = 0;

        uStack_128 = 0;

        uStack_130 = 0;

        lStack_158 = 0;

        local_160 = 0;

        uStack_148 = 0;

        local_150 = (long *)0x0;

        _objc_retain(uVar3);

        auVar13 = FUN_00293880(uVar3,extraout_x1_00,&local_160,auStack_f0,0x10);

        if (auVar13._0_8_ != 0) {

          lVar7 = *local_150;

          do {

            uVar11 = auVar13._8_8_;

            lVar12 = 0;

            do {

              if (*local_150 != lVar7) {

                _objc_enumerationMutation(uVar3);

                uVar11 = extraout_x1_01;

              }

              FUN_00299540(*(undefined8 *)(lStack_158 + lVar12 * 8),uVar11,&cf_userName);

              pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

              pcVar1 = &cf___;

              if (pcVar9 != (cfstringStruct *)0x0) {

                pcVar1 = pcVar9;

              }

              _objc_retain(pcVar1);

              _objc_release(pcVar9);

              auVar14 = FUN_00297fa0(pcVar1);

              if ((auVar14._0_8_ != 0) &&

                 (auVar14 = FUN_00295fa0(pcVar1,auVar14._8_8_,&cf__chatroom),

                 (auVar14._0_8_ & 1) == 0)) {

                FUN_00291240(uVar8,auVar14._8_8_,pcVar1);

              }

              _objc_release(pcVar1);

              lVar12 = lVar12 + 1;

              uVar11 = extraout_x1_02;

            } while (auVar13._0_8_ != lVar12);

            auVar13 = FUN_00293880(uVar3,extraout_x1_02,&local_160,auStack_f0,0x10);

          } while (auVar13._0_8_ != 0);

        }

        _objc_release(uVar3);

        lVar7 = FUN_00293860(uVar8);

        if (lVar7 != 0) {

          FUN_00134b60(uVar8);

        }

        _objc_release(uVar8);

        _objc_release(uVar3);

      }

      _objc_initWeak(auStack_168,param_1);

      dVar10 = _dispatch_time(0,2000000000);

      local_190 = PTR___NSConcreteStackBlock_003886f0;

      local_188 = 0xc2000000;

      local_180 = FUN_00159478;

      puStack_178 = &DAT_0038a150;

      _objc_copyWeak(auStack_170,auStack_168);

      _dispatch_after(dVar10,PTR___dispatch_main_q_00388740,&local_190);

      _objc_destroyWeak(auStack_170);

      _objc_destroyWeak(auStack_168);

    }

  }

  _objc_release(local_1b0);

LAB_00150c18:

  _objc_release(lVar5);

  _objc_release(uVar4);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




