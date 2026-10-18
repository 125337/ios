// refilter @0x1ef12c


/* Function Stack Size: 0x10 bytes */



void XZYCLGSessionPickerViewController::refilter(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  int iVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  ulong uVar6;

  cfstringStruct *pcVar7;

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

  undefined8 uVar8;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined *puVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  long lVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined8 local_2c0;

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

  FUN_00291660();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar4 = FUN_002a58c0(param_1);

  local_2c0 = uVar3;

  if (0 < lVar4) {

    lVar4 = FUN_002a58c0(param_1);

    if (lVar4 - 1U < 3) {

      puVar9 = (&PTR_cf_friend_0038f598)[lVar4 - 1U];

      FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

      local_2c0 = _objc_retainAutoreleasedReturnValue();

      uStack_208 = 0;

      local_210 = 0;

      uStack_1f8 = 0;

      uStack_200 = 0;

      lStack_228 = 0;

      local_230 = 0;

      uStack_218 = 0;

      local_220 = (long *)0x0;

      _objc_retain(uVar3);

      auVar13 = FUN_00293880(uVar3,extraout_x1,&local_230,auStack_f0,0x10);

      if (auVar13._0_8_ != 0) {

        lVar4 = *local_220;

        do {

          uVar5 = auVar13._8_8_;

          lVar12 = 0;

          do {

            if (*local_220 != lVar4) {

              _objc_enumerationMutation(uVar3);

              uVar5 = extraout_x1_00;

            }

            uVar10 = *(undefined8 *)(lStack_228 + lVar12 * 8);

            FUN_00299540(uVar10,uVar5,&cf_type);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            iVar2 = FUN_00297820(auVar14._0_8_,auVar14._8_8_,puVar9);

            _objc_release(auVar14._0_8_);

            uVar5 = extraout_x1_01;

            if (iVar2 != 0) {

              FUN_00291240(local_2c0,extraout_x1_01,uVar10);

              uVar5 = extraout_x1_02;

            }

            lVar12 = lVar12 + 1;

          } while (auVar13._0_8_ != lVar12);

          auVar13 = FUN_00293880(uVar3,uVar5,&local_230,auStack_f0,0x10);

        } while (auVar13._0_8_ != 0);

      }

      _objc_release(uVar3);

      _objc_release(uVar3);

    }

  }

  FUN_002a4e80(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar4 = FUN_00297fa0();

  _objc_release(uVar3);

  if (lVar4 != 0) {

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uStack_248 = 0;

    local_250 = 0;

    uStack_238 = 0;

    uStack_240 = 0;

    lStack_268 = 0;

    local_270 = 0;

    uStack_258 = 0;

    local_260 = (long *)0x0;

    _objc_retain(local_2c0);

    auVar13 = FUN_00293880(local_2c0,extraout_x1_03,&local_270,auStack_170,0x10);

    if (auVar13._0_8_ != 0) {

      lVar4 = *local_260;

      do {

        uVar5 = auVar13._8_8_;

        lVar12 = 0;

        do {

          if (*local_260 != lVar4) {

            _objc_enumerationMutation(local_2c0);

            uVar5 = extraout_x1_04;

          }

          uVar11 = *(undefined8 *)(lStack_268 + lVar12 * 8);

          FUN_00299540(uVar11,uVar5,&cf_tagIDs);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          uVar10 = _objc_opt_class(&_OBJC_CLASS___NSArray);

          uVar6 = _objc_opt_isKindOfClass(uVar5,uVar10);

          if ((uVar6 & 1) != 0) {

            FUN_002a4e80(param_1);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            iVar2 = FUN_00293560(uVar5,auVar14._8_8_,auVar14._0_8_);

            _objc_release(auVar14._0_8_);

            if (iVar2 != 0) {

              FUN_00291240(uVar3,extraout_x1_05,uVar11);

            }

          }

          _objc_release(uVar5);

          lVar12 = lVar12 + 1;

          uVar5 = extraout_x1_06;

        } while (auVar13._0_8_ != lVar12);

        auVar13 = FUN_00293880(local_2c0,extraout_x1_06,&local_270,auStack_170,0x10);

      } while (auVar13._0_8_ != 0);

    }

    _objc_release(local_2c0);

    _objc_release(local_2c0);

    local_2c0 = uVar3;

  }

  FUN_0029bf60(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar4 = FUN_00297fa0();

  _objc_release(uVar3);

  if (lVar4 == 0) {

    FUN_0029e480(param_1,extraout_x1_07,local_2c0);

  }

  else {

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uStack_288 = 0;

    local_290 = 0;

    uStack_278 = 0;

    uStack_280 = 0;

    lStack_2a8 = 0;

    local_2b0 = 0;

    uStack_298 = 0;

    local_2a0 = (long *)0x0;

    _objc_retain(local_2c0);

    auVar13 = FUN_00293880(local_2c0,extraout_x1_08,&local_2b0,auStack_1f0,0x10);

    if (auVar13._0_8_ != 0) {

      lVar4 = *local_2a0;

      do {

        uVar5 = auVar13._8_8_;

        lVar12 = 0;

        do {

          if (*local_2a0 != lVar4) {

            _objc_enumerationMutation(local_2c0);

            uVar5 = extraout_x1_09;

          }

          uVar10 = *(undefined8 *)(lStack_2a8 + lVar12 * 8);

          FUN_00299540(uVar10,uVar5,&cf_userName);

          pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          pcVar1 = &::cf___;

          if (pcVar7 != (cfstringStruct *)0x0) {

            pcVar1 = pcVar7;

          }

          FUN_002984e0(pcVar1);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          _objc_release(pcVar7);

          FUN_00299540(uVar10,extraout_x1_10,&cf_displayName);

          pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          pcVar1 = &::cf___;

          if (pcVar7 != (cfstringStruct *)0x0) {

            pcVar1 = pcVar7;

          }

          FUN_002984e0(pcVar1);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_release(pcVar7);

          FUN_0029bf60(param_1);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          uVar8 = auVar14._0_8_;

          iVar2 = FUN_00293580(uVar5,auVar14._8_8_,uVar8);

          if (iVar2 == 0) {

            FUN_0029bf60(param_1);

            auVar14 = _objc_retainAutoreleasedReturnValue();

            iVar2 = FUN_00293580(uVar11,auVar14._8_8_,auVar14._0_8_);

            _objc_release(auVar14._0_8_);

            _objc_release(uVar8);

            uVar8 = extraout_x1_12;

            if (iVar2 != 0) goto LAB_001ef584;

          }

          else {

            _objc_release(uVar8);

            uVar8 = extraout_x1_11;

LAB_001ef584:

            FUN_00291240(uVar3,uVar8,uVar10);

          }

          _objc_release(uVar11);

          _objc_release(uVar5);

          lVar12 = lVar12 + 1;

          uVar5 = extraout_x1_13;

        } while (auVar13._0_8_ != lVar12);

        auVar13 = FUN_00293880(local_2c0,extraout_x1_13,&local_2b0,auStack_1f0,0x10);

      } while (auVar13._0_8_ != 0);

    }

    _objc_release(local_2c0);

    FUN_0029e480(param_1,extraout_x1_14,uVar3);

    _objc_release(uVar3);

  }

  FUN_002a4dc0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar3);

  FUN_002a5da0(param_1);

  _objc_release(local_2c0);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




