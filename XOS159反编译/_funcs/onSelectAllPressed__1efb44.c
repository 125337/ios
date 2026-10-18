// onSelectAllPressed @0x1efb44


/* Function Stack Size: 0x10 bytes */



void XZYCLGSessionPickerViewController::onSelectAllPressed(ID param_1,SEL param_2)



{

  byte bVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

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

  undefined1 auStack_1e8 [128];

  undefined1 auStack_168 [128];

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  lStack_228 = 0;

  local_230 = 0;

  uStack_218 = 0;

  local_220 = (long *)0x0;

  uStack_208 = 0;

  local_210 = 0;

  uStack_1f8 = 0;

  uStack_200 = 0;

  FUN_002952e0();

  auVar8 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar8._0_8_;

  lVar2 = FUN_00293880(uVar4,auVar8._8_8_,&local_230,auStack_e8,0x10);

  if (lVar2 != 0) {

    lVar6 = *local_220;

    do {

      lVar7 = 0;

      do {

        if (*local_220 != lVar6) {

          _objc_enumerationMutation(uVar4);

        }

        uVar5 = *(undefined8 *)(lStack_228 + lVar7 * 8);

        FUN_0029c200(param_1);

        auVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_00299540(uVar5,auVar8._8_8_,&cf_userName);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        uVar3 = FUN_00293560(auVar8._0_8_,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

        _objc_release(auVar8._0_8_);

        if ((uVar3 & 1) == 0) {

          bVar1 = 0;

          goto LAB_001efc64;

        }

        lVar7 = lVar7 + 1;

      } while (lVar2 != lVar7);

      lVar2 = FUN_00293880(uVar4,extraout_x1,&local_230,auStack_e8,0x10);

    } while (lVar2 != 0);

  }

  bVar1 = 1;

LAB_001efc64:

  _objc_release(uVar4);

  FUN_002952e0(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_00293860();

  _objc_release(uVar4);

  if ((bool)(bVar1 & lVar2 != 0)) {

    uStack_248 = 0;

    local_250 = 0;

    uStack_238 = 0;

    uStack_240 = 0;

    lStack_268 = 0;

    local_270 = 0;

    uStack_258 = 0;

    local_260 = (long *)0x0;

    FUN_002952e0(param_1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar8._0_8_;

    lVar2 = FUN_00293880(uVar4,auVar8._8_8_,&local_270,auStack_168,0x10);

    if (lVar2 != 0) {

      lVar6 = *local_260;

      do {

        lVar7 = 0;

        do {

          if (*local_260 != lVar6) {

            _objc_enumerationMutation(uVar4);

          }

          uVar5 = *(undefined8 *)(lStack_268 + lVar7 * 8);

          FUN_0029c200(param_1);

          auVar8 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(uVar5,auVar8._8_8_,&cf_userName);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_0029b460(auVar8._0_8_,auVar9._8_8_,auVar9._0_8_);

          _objc_release(auVar9._0_8_);

          _objc_release(auVar8._0_8_);

          lVar7 = lVar7 + 1;

        } while (lVar2 != lVar7);

        lVar2 = FUN_00293880(uVar4,extraout_x1_00,&local_270,auStack_168,0x10);

      } while (lVar2 != 0);

    }

  }

  else {

    uStack_288 = 0;

    local_290 = 0;

    uStack_278 = 0;

    uStack_280 = 0;

    lStack_2a8 = 0;

    local_2b0 = 0;

    uStack_298 = 0;

    local_2a0 = (long *)0x0;

    FUN_002952e0(param_1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar8._0_8_;

    lVar2 = FUN_00293880(uVar4,auVar8._8_8_,&local_2b0,auStack_1e8,0x10);

    if (lVar2 != 0) {

      lVar6 = *local_2a0;

      do {

        lVar7 = 0;

        do {

          if (*local_2a0 != lVar6) {

            _objc_enumerationMutation(uVar4);

          }

          uVar5 = *(undefined8 *)(lStack_2a8 + lVar7 * 8);

          FUN_0029c200(param_1);

          auVar8 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(uVar5,auVar8._8_8_,&cf_userName);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_00291240(auVar8._0_8_,auVar9._8_8_,auVar9._0_8_);

          _objc_release(auVar9._0_8_);

          _objc_release(auVar8._0_8_);

          lVar7 = lVar7 + 1;

        } while (lVar2 != lVar7);

        lVar2 = FUN_00293880(uVar4,extraout_x1_01,&local_2b0,auStack_1e8,0x10);

      } while (lVar2 != 0);

    }

  }

  _objc_release(uVar4);

  FUN_002a4dc0(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar4);

  FUN_002a5da0(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_68) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




