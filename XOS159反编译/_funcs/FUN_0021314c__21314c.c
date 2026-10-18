// FUN_0021314c @0x21314c


undefined8 FUN_0021314c(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar5;

  long lVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined8 local_1f0;

  long lStack_1e8;

  long *local_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  long lStack_1a8;

  long *local_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined1 auStack_168 [128];

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar3 = _objc_opt_isKindOfClass(param_2,uVar2);

  if (((uVar3 & 1) != 0) && (lVar4 = FUN_00297fa0(param_2), lVar4 != 0)) {

    if (DAT_003ead98 != -1) {

      FUN_0028fa5c();

    }

    uVar2 = DAT_003ead90;

    uStack_188 = 0;

    local_190 = 0;

    uStack_178 = 0;

    uStack_180 = 0;

    lStack_1a8 = 0;

    local_1b0 = 0;

    uStack_198 = 0;

    local_1a0 = (long *)0x0;

    _objc_retain(DAT_003ead90);

    auVar7 = FUN_00293880(uVar2,extraout_x1,&local_1b0,auStack_e8,0x10);

    if (auVar7._0_8_ != 0) {

      lVar4 = *local_1a0;

      do {

        uVar5 = auVar7._8_8_;

        lVar6 = 0;

        do {

          if (*local_1a0 != lVar4) {

            _objc_enumerationMutation(uVar2);

            uVar5 = extraout_x1_00;

          }

          auVar8 = FUN_00295f60(param_2,uVar5,*(undefined8 *)(lStack_1a8 + lVar6 * 8));

          uVar5 = auVar8._8_8_;

          if ((auVar8._0_8_ & 1) != 0) {

            uVar5 = 1;

            goto LAB_00213394;

          }

          lVar6 = lVar6 + 1;

        } while (auVar7._0_8_ != lVar6);

        auVar7 = FUN_00293880(uVar2,uVar5,&local_1b0,auStack_e8,0x10);

      } while (auVar7._0_8_ != 0);

    }

    _objc_release(uVar2);

    uVar2 = extraout_x1_01;

    if (DAT_003eada8 != -1) {

      FUN_0028fa70();

      uVar2 = extraout_x1_04;

    }

    uVar3 = FUN_00293560(DAT_003eada0,uVar2,param_2);

    if ((uVar3 & 1) != 0) {

      uVar5 = 1;

      goto LAB_0021339c;

    }

  }

  if (param_1 == 0) {

    uVar5 = 0;

  }

  else {

    _objc_opt_class(param_1);

    _NSStringFromClass();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar4 = FUN_00297fa0();

    if (lVar4 == 0) {

      uVar5 = 0;

    }

    else {

      if (DAT_003eadb8 != -1) {

        FUN_0028fa94();

      }

      uVar1 = DAT_003eadb0;

      uStack_1c8 = 0;

      local_1d0 = 0;

      uStack_1b8 = 0;

      uStack_1c0 = 0;

      lStack_1e8 = 0;

      local_1f0 = 0;

      uStack_1d8 = 0;

      local_1e0 = (long *)0x0;

      _objc_retain(DAT_003eadb0);

      auVar7 = FUN_00293880(uVar1,extraout_x1_02,&local_1f0,auStack_168,0x10);

      uVar5 = 0;

      if (auVar7._0_8_ != 0) {

        lVar4 = *local_1e0;

        do {

          uVar5 = auVar7._8_8_;

          lVar6 = 0;

          do {

            if (*local_1e0 != lVar4) {

              _objc_enumerationMutation(uVar1);

              uVar5 = extraout_x1_03;

            }

            auVar8 = FUN_0029abc0(uVar2,uVar5,*(undefined8 *)(lStack_1e8 + lVar6 * 8),1);

            uVar5 = auVar8._8_8_;

            if (auVar8._0_8_ != 0x7fffffffffffffff) {

              uVar5 = 1;

              goto LAB_00213384;

            }

            lVar6 = lVar6 + 1;

          } while (auVar7._0_8_ != lVar6);

          auVar7 = FUN_00293880(uVar1,uVar5,&local_1f0,auStack_168,0x10);

        } while (auVar7._0_8_ != 0);

        uVar5 = 0;

      }

LAB_00213384:

      _objc_release(uVar1);

    }

LAB_00213394:

    _objc_release(uVar2);

  }

LAB_0021339c:

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return uVar5;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




