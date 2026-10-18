// csEditor_preview @0x1778a0


/* Function Stack Size: 0x10 bytes */



void CadisCustomStyleEditorViewController::csEditor_preview(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 in_d2;

  undefined1 auVar9 [16];

  long local_210;

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

  iVar1 = FUN_0029a840();

  if (iVar1 == 0) {

    uStack_198 = 0;

    local_1a0 = 0;

    uStack_188 = 0;

    uStack_190 = 0;

    lStack_1b8 = 0;

    local_1c0 = 0;

    uStack_1a8 = 0;

    local_1b0 = (long *)0x0;

    FUN_0029a780(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4840();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = FUN_002937a0();

    _objc_release(uVar3);

    _objc_release(uVar2);

    lVar5 = FUN_00293880(uVar4,extraout_x1,&local_1c0,auStack_100,0x10);

    if (lVar5 != 0) {

      lVar6 = *local_1b0;

      do {

        lVar7 = 0;

        do {

          if (*local_1b0 != lVar6) {

            _objc_enumerationMutation(uVar4);

          }

          FUN_0029b340(*(undefined8 *)(lStack_1b8 + lVar7 * 8));

          lVar7 = lVar7 + 1;

        } while (lVar5 != lVar7);

        lVar5 = FUN_00293880(uVar4,extraout_x1_00,&local_1c0,auStack_100,0x10);

      } while (lVar5 != 0);

    }

    _objc_release(uVar4);

    FUN_00292ec0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5020();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    FUN_002a4720(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00177fe8(uVar3,uVar2);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1ae0(param_1,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar2);

    FUN_00293b40(param_1);

    FUN_002a6220(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    _objc_release(uVar2);

    FUN_002a4720(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4700(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_retain(uVar3);

    _objc_retain(uVar2);

    _objc_retain(uVar4);

    iVar1 = FUN_00297820(uVar2,extraout_x1_01,&cf_html);

    if (iVar1 == 0) {

      FUN_00172968(in_d2,uVar3);

      local_210 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_00174f70(in_d2,uVar3,0,uVar4);

      local_210 = _objc_retainAutoreleasedReturnValue();

    }

    _objc_release(uVar4);

    _objc_release(uVar2);

    _objc_release(uVar3);

    _objc_release(uVar4);

    _objc_release(uVar2);

    if (local_210 != 0) {

      uVar2 = FUN_00136804();

      FUN_0029e5e0(0,0x4028000000000000,in_d2,uVar2,local_210);

      FUN_0029a780(param_1);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_00291380(auVar9._0_8_,auVar9._8_8_,local_210);

      _objc_release(auVar9._0_8_);

    }

    FUN_00292ec0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b860();

    _objc_release(uVar2);

    FUN_0029e860(param_1,extraout_x1_02,1);

    FUN_0029f2e0(param_1,extraout_x1_03,local_210 != 0);

    FUN_002a4720(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_00297820(auVar9._0_8_,auVar9._8_8_,&cf_js);

    _objc_release(auVar9._0_8_);

    uVar2 = extraout_x1_04;

    if (iVar1 != 0) {

      uStack_1d8 = 0;

      local_1e0 = 0;

      uStack_1c8 = 0;

      uStack_1d0 = 0;

      lStack_1f8 = 0;

      local_200 = 0;

      uStack_1e8 = 0;

      local_1f0 = (long *)0x0;

      FUN_002a4840(local_210);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      uVar2 = auVar9._0_8_;

      lVar5 = FUN_00293880(uVar2,auVar9._8_8_,&local_200,auStack_180,0x10);

      if (lVar5 != 0) {

        lVar6 = *local_1f0;

        do {

          lVar7 = 0;

          do {

            if (*local_1f0 != lVar6) {

              _objc_enumerationMutation(uVar2);

            }

            uVar8 = *(undefined8 *)(lStack_1f8 + lVar7 * 8);

            uVar4 = _objc_opt_class(&_OBJC_CLASS___UILabel);

            auVar9 = _objc_opt_isKindOfClass(uVar8,uVar4);

            uVar4 = auVar9._8_8_;

            if ((auVar9._0_8_ & 1) != 0) {

              _objc_retain(uVar8);

              FUN_002a5020(uVar8);

              auVar9 = _objc_retainAutoreleasedReturnValue();

              iVar1 = FUN_00297820(auVar9._0_8_,auVar9._8_8_,&cf__IN7h_NxeQ);

              _objc_release(auVar9._0_8_);

              if (iVar1 != 0) {

                FUN_0029f2e0(param_1,extraout_x1_05,0);

                _objc_release(uVar8);

                goto LAB_00177cf8;

              }

              _objc_release(uVar8);

              uVar4 = extraout_x1_06;

            }

            lVar7 = lVar7 + 1;

          } while (lVar5 != lVar7);

          lVar5 = FUN_00293880(uVar2,uVar4,&local_200,auStack_180,0x10);

        } while (lVar5 != 0);

      }

LAB_00177cf8:

      _objc_release(uVar2);

      uVar2 = extraout_x1_07;

    }

    FUN_002a0aa0(param_1,uVar2,1);

    FUN_00292ec0(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e8a0(auVar9._0_8_,auVar9._8_8_,1);

    _objc_release(auVar9._0_8_);

    FUN_00291920(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e8a0(auVar9._0_8_,auVar9._8_8_,1);

    _objc_release(auVar9._0_8_);

    FUN_0029a780(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e8a0(auVar9._0_8_,auVar9._8_8_,0);

    _objc_release(auVar9._0_8_);

    FUN_0029a700(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1f60(auVar9._0_8_,auVar9._8_8_,&cf_Sm);

    _objc_release(auVar9._0_8_);

    FUN_002a6220(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a780(param_1);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002925e0(uVar2,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    _objc_release(uVar2);

    _objc_release(local_210);

    _objc_release(uVar3);

    if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

      return;

    }

  }

  else if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    FUN_00293b20(param_1);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




