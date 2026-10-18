// FUN_0003121c @0x3121c


void FUN_0003121c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined1 auVar10 [16];

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

  auVar10 = FUN_00299020(*(undefined8 *)(param_1 + 0x20));

  uVar1 = auVar10._0_8_;

  FUN_00291240(uVar1,auVar10._8_8_,*(undefined8 *)(param_1 + 0x28));

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0060(auVar10._0_8_,auVar10._8_8_,uVar1,&cf_xzyHomeBottomBarPopupItems);

  _objc_release(auVar10._0_8_);

  FUN_00240480();

  FUN_002990e0(*(undefined8 *)(param_1 + 0x30));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  if (lVar3 != 0) {

    uStack_188 = 0;

    local_190 = 0;

    uStack_178 = 0;

    uStack_180 = 0;

    lStack_1a8 = 0;

    local_1b0 = 0;

    uStack_198 = 0;

    local_1a0 = (long *)0x0;

    FUN_002a6220(lVar3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4840();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    lVar5 = FUN_00293880(uVar4,extraout_x1,&local_1b0,auStack_e8,0x10);

    if (lVar5 != 0) {

      lVar7 = *local_1a0;

      do {

        lVar9 = 0;

        do {

          if (*local_1a0 != lVar7) {

            _objc_enumerationMutation(uVar4);

          }

          lVar6 = *(long *)(lStack_1a8 + lVar9 * 8);

          uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

          auVar10 = _objc_opt_isKindOfClass(lVar6,uVar2);

          uVar2 = auVar10._8_8_;

          if ((auVar10._0_8_ & 1) != 0) {

            auVar10 = FUN_002a4e60(lVar6);

            uVar2 = auVar10._8_8_;

            if (auVar10._0_8_ == 0x3f5) {

              _objc_retain(lVar6);

              _objc_release(uVar4);

              uVar2 = extraout_x1_00;

              if (lVar6 != 0) goto LAB_000314c8;

              goto LAB_000313c0;

            }

          }

          lVar9 = lVar9 + 1;

        } while (lVar5 != lVar9);

        lVar5 = FUN_00293880(uVar4,uVar2,&local_1b0,auStack_e8,0x10);

      } while (lVar5 != 0);

    }

    _objc_release(uVar4);

  }

LAB_000313c0:

  uStack_1c8 = 0;

  local_1d0 = 0;

  uStack_1b8 = 0;

  uStack_1c0 = 0;

  lStack_1e8 = 0;

  local_1f0 = 0;

  uStack_1d8 = 0;

  local_1e0 = (long *)0x0;

  FUN_002a6220(*(undefined8 *)(param_1 + 0x30));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6520();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4840();

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar4);

  _objc_release(uVar2);

  lVar7 = FUN_00293880(lVar5,extraout_x1_01,&local_1f0,auStack_168,0x10);

  if (lVar7 == 0) {

LAB_000314fc:

    _objc_release(lVar5);

LAB_00031504:

    _objc_release(lVar3);

    _objc_release(uVar1);

    if (*(long *)PTR____stack_chk_guard_00388738 != local_68) {

                    /* WARNING: Subroutine does not return */

      ___stack_chk_fail();

    }

    return;

  }

  lVar9 = *local_1e0;

LAB_00031438:

  lVar8 = 0;

LAB_0003143c:

  if (*local_1e0 != lVar9) {

    _objc_enumerationMutation(lVar5);

  }

  lVar6 = *(long *)(lStack_1e8 + lVar8 * 8);

  uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

  auVar10 = _objc_opt_isKindOfClass(lVar6,uVar2);

  uVar2 = auVar10._8_8_;

  if ((auVar10._0_8_ & 1) != 0) {

    auVar10 = FUN_002a4e60(lVar6);

    uVar2 = auVar10._8_8_;

    if (auVar10._0_8_ == 0x3f5) {

      _objc_retain(lVar6);

      _objc_release(lVar5);

      uVar2 = extraout_x1_02;

      if (lVar6 == 0) goto LAB_00031504;

LAB_000314c8:

      FUN_00296800(&_OBJC_CLASS___NSIndexSet,uVar2,1);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_0029b1c0(lVar6,auVar10._8_8_,auVar10._0_8_,100);

      _objc_release(auVar10._0_8_);

      lVar5 = lVar6;

      goto LAB_000314fc;

    }

  }

  lVar8 = lVar8 + 1;

  if (lVar7 == lVar8) goto code_r0x00031490;

  goto LAB_0003143c;

code_r0x00031490:

  lVar7 = FUN_00293880(lVar5,uVar2,&local_1f0,auStack_168,0x10);

  if (lVar7 == 0) goto LAB_000314fc;

  goto LAB_00031438;

}




