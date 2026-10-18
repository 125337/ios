// FUN_00284fc4 @0x284fc4


void FUN_00284fc4(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined8 local_1e0;

  long lStack_1d8;

  long *local_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1c0;

  undefined8 uStack_1b8;

  undefined8 uStack_1b0;

  undefined8 uStack_1a8;

  undefined8 local_1a0;

  long lStack_198;

  long *local_190;

  undefined8 uStack_188;

  undefined8 local_180;

  undefined8 uStack_178;

  undefined8 uStack_170;

  undefined8 uStack_168;

  undefined1 auStack_158 [128];

  undefined1 auStack_d8 [128];

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if (param_1 != 0) {

    uStack_178 = 0;

    local_180 = 0;

    uStack_168 = 0;

    uStack_170 = 0;

    lStack_198 = 0;

    local_1a0 = 0;

    uStack_188 = 0;

    local_190 = (long *)0x0;

    FUN_002918c0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002937a0();

    _objc_release(uVar2);

    auVar8 = FUN_00293880(uVar3,extraout_x1,&local_1a0,auStack_d8,0x10);

    if (auVar8._0_8_ != 0) {

      lVar6 = *local_190;

      do {

        uVar2 = auVar8._8_8_;

        lVar7 = 0;

        do {

          if (*local_190 != lVar6) {

            _objc_enumerationMutation(uVar3);

            uVar2 = extraout_x1_00;

          }

          uVar4 = *(undefined8 *)(lStack_198 + lVar7 * 8);

          iVar1 = FUN_00295f60(uVar4,uVar2,&cf_xzy_liquid_);

          uVar2 = extraout_x1_01;

          if (iVar1 != 0) {

            FUN_0029b260(param_1,extraout_x1_01,uVar4);

            uVar2 = extraout_x1_02;

          }

          lVar7 = lVar7 + 1;

        } while (auVar8._0_8_ != lVar7);

        auVar8 = FUN_00293880(uVar3,uVar2,&local_1a0,auStack_d8,0x10);

      } while (auVar8._0_8_ != 0);

    }

    _objc_release(uVar3);

    FUN_00298a40(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00284fc4();

    _objc_release(uVar2);

    uStack_1b8 = 0;

    local_1c0 = 0;

    uStack_1a8 = 0;

    uStack_1b0 = 0;

    lStack_1d8 = 0;

    local_1e0 = 0;

    uStack_1c8 = 0;

    local_1d0 = (long *)0x0;

    FUN_002a47a0(param_1);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar8._0_8_;

    lVar6 = FUN_00293880(uVar2,auVar8._8_8_,&local_1e0,auStack_158,0x10);

    if (lVar6 != 0) {

      lVar7 = *local_1d0;

      do {

        lVar5 = 0;

        do {

          if (*local_1d0 != lVar7) {

            _objc_enumerationMutation(uVar2);

          }

          FUN_00284fc4(*(undefined8 *)(lStack_1d8 + lVar5 * 8));

          lVar5 = lVar5 + 1;

        } while (lVar6 != lVar5);

        lVar6 = FUN_00293880(uVar2,extraout_x1_03,&local_1e0,auStack_158,0x10);

      } while (lVar6 != 0);

    }

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




