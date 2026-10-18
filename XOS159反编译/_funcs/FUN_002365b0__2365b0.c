// FUN_002365b0 @0x2365b0


bool FUN_002365b0(void)



{

  bool bVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  undefined1 auVar9 [16];

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

  FUN_00293e40(&_OBJC_CLASS___UITraitCollection);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_002a5fc0();

  _objc_release(uVar2);

  if (lVar3 == 2) {

    bVar1 = true;

    goto LAB_002368b0;

  }

  uStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  uStack_180 = 0;

  lStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  local_1a0 = (long *)0x0;

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00293440();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  lVar3 = FUN_00293880(uVar4,extraout_x1,&local_1b0,auStack_e8,0x10);

  if (lVar3 != 0) {

    lVar7 = *local_1a0;

    do {

      lVar8 = 0;

      do {

        if (*local_1a0 != lVar7) {

          _objc_enumerationMutation(uVar4);

        }

        uVar6 = *(undefined8 *)(lStack_1a8 + lVar8 * 8);

        uVar2 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

        auVar9 = _objc_opt_isKindOfClass(uVar6,uVar2);

        uVar2 = auVar9._8_8_;

        if ((auVar9._0_8_ & 1) != 0) {

          auVar9 = FUN_00290f40(uVar6);

          uVar2 = auVar9._8_8_;

          if (auVar9._0_8_ == 0) {

            _objc_retain(uVar6);

            lStack_1e8 = 0;

            local_1f0 = 0;

            uStack_1d8 = 0;

            local_1e0 = (long *)0x0;

            uStack_1c8 = 0;

            local_1d0 = 0;

            uStack_1b8 = 0;

            uStack_1c0 = 0;

            FUN_002a6560(uVar6);

            auVar9 = _objc_retainAutoreleasedReturnValue();

            uVar2 = auVar9._0_8_;

            lVar3 = FUN_00293880(uVar2,auVar9._8_8_,&local_1f0,auStack_168,0x10);

            if (lVar3 == 0) goto LAB_00236790;

            lVar7 = *local_1e0;

            goto LAB_00236738;

          }

        }

        lVar8 = lVar8 + 1;

      } while (lVar3 != lVar8);

      lVar3 = FUN_00293880(uVar4,uVar2,&local_1b0,auStack_e8,0x10);

    } while (lVar3 != 0);

  }

LAB_0023683c:

  _objc_release(uVar4);

LAB_00236844:

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00297c00();

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  if (lVar5 == 0) {

    bVar1 = false;

    goto LAB_002368b0;

  }

  goto LAB_00236878;

LAB_00236738:

  do {

    lVar8 = 0;

    do {

      if (*local_1e0 != lVar7) {

        _objc_enumerationMutation(uVar2);

      }

      lVar5 = *(long *)(lStack_1e8 + lVar8 * 8);

      auVar9 = FUN_00297900(lVar5);

      if ((auVar9._0_8_ & 1) != 0) {

        _objc_retain(lVar5);

        _objc_release(uVar2);

        if (lVar5 == 0) goto LAB_002367c4;

        _objc_release(uVar6);

        _objc_release(uVar4);

        goto LAB_00236878;

      }

      lVar8 = lVar8 + 1;

    } while (lVar3 != lVar8);

    lVar3 = FUN_00293880(uVar2,auVar9._8_8_,&local_1f0,auStack_168,0x10);

  } while (lVar3 != 0);

LAB_00236790:

  _objc_release(uVar2);

LAB_002367c4:

  FUN_002a6560(uVar6);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_00293860();

  _objc_release(uVar2);

  if (lVar3 == 0) {

    _objc_release(uVar6);

    goto LAB_0023683c;

  }

  FUN_002a6560(uVar6);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar6);

  _objc_release(uVar4);

  if (lVar5 == 0) goto LAB_00236844;

LAB_00236878:

  FUN_002a5680(lVar5);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_002a5fc0();

  bVar1 = lVar3 == 2;

  _objc_release(uVar2);

  _objc_release(lVar5);

LAB_002368b0:

  if (*(long *)PTR____stack_chk_guard_00388738 != local_68) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return bVar1;

}




