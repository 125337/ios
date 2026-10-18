// FUN_0020535c @0x20535c


void FUN_0020535c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar10;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar11 [16];

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

  undefined1 auStack_170 [128];

  undefined8 local_f0;

  undefined8 uStack_e8;

  undefined8 uStack_e0;

  undefined8 uStack_d8;

  double local_d0;

  undefined8 uStack_c8;

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_retain(param_4);

  _objc_retain(param_5);

  _objc_retain(param_3);

  _objc_retain(param_4);

  if ((param_3 == 0) || (param_4 == 0)) {

LAB_002055fc:

    _objc_release(param_4);

    _objc_release(param_3);

    if (param_4 != 0) goto LAB_00205610;

  }

  else {

    if (DAT_003eaac8 - 5U < 2) {

      FUN_0021a118(param_3);

      _objc_getAssociatedObject(param_3,&DAT_003eaef3);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar2 != 0) {

        _objc_getAssociatedObject(param_4,&DAT_003eaefe);

        lVar2 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar2 == 0) {

          _objc_setAssociatedObject(param_4,&DAT_003eaefe,PTR____kCFBooleanTrue_00388320,1);

          FUN_00291dc0(&_OBJC_CLASS___NSMutableArray,extraout_x1,param_4);

          uVar8 = _objc_retainAutoreleasedReturnValue();

          while (lVar2 = FUN_00293860(uVar8), lVar2 != 0) {

            FUN_00297d80(uVar8);

            uVar3 = _objc_retainAutoreleasedReturnValue();

            FUN_0029b3e0(uVar8);

            uStack_188 = 0;

            local_190 = 0;

            uStack_178 = 0;

            uStack_180 = 0;

            lStack_1a8 = 0;

            local_1b0 = 0;

            uStack_198 = 0;

            local_1a0 = (long *)0x0;

            FUN_00295700(uVar3);

            auVar11 = _objc_retainAutoreleasedReturnValue();

            uVar4 = auVar11._0_8_;

            lVar2 = FUN_00293880(uVar4,auVar11._8_8_,&local_1b0,&local_f0,0x10);

            if (lVar2 != 0) {

              lVar6 = *local_1a0;

              do {

                lVar7 = 0;

                do {

                  if (*local_1a0 != lVar6) {

                    _objc_enumerationMutation(uVar4);

                  }

                  FUN_0021a1bc(param_3,*(undefined8 *)(lStack_1a8 + lVar7 * 8));

                  lVar7 = lVar7 + 1;

                } while (lVar2 != lVar7);

                lVar2 = FUN_00293880(uVar4,extraout_x1_00,&local_1b0,&local_f0,0x10);

              } while (lVar2 != 0);

            }

            _objc_release(uVar4);

            uStack_1c8 = 0;

            local_1d0 = 0;

            uStack_1b8 = 0;

            uStack_1c0 = 0;

            lStack_1e8 = 0;

            local_1f0 = 0;

            uStack_1d8 = 0;

            local_1e0 = (long *)0x0;

            FUN_002a4840(uVar3);

            auVar11 = _objc_retainAutoreleasedReturnValue();

            uVar4 = auVar11._0_8_;

            auVar11 = FUN_00293880(uVar4,auVar11._8_8_,&local_1f0,auStack_170,0x10);

            if (auVar11._0_8_ != 0) {

              lVar2 = *local_1e0;

              do {

                uVar10 = auVar11._8_8_;

                lVar6 = 0;

                do {

                  if (*local_1e0 != lVar2) {

                    _objc_enumerationMutation(uVar4);

                    uVar10 = extraout_x1_01;

                  }

                  FUN_00291240(uVar8,uVar10,*(undefined8 *)(lStack_1e8 + lVar6 * 8));

                  lVar6 = lVar6 + 1;

                  uVar10 = extraout_x1_02;

                } while (auVar11._0_8_ != lVar6);

                auVar11 = FUN_00293880(uVar4,extraout_x1_02,&local_1f0,auStack_170,0x10);

              } while (auVar11._0_8_ != 0);

            }

            _objc_release(uVar4);

            _objc_release(uVar3);

          }

          _objc_release(uVar8);

          goto LAB_002055fc;

        }

      }

    }

    _objc_release(param_4);

    _objc_release(param_3);

LAB_00205610:

    FUN_002a56a0(&local_f0,param_4);

    if (local_d0 != 0.0) {

      uStack_e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

      local_f0 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

      uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

      uStack_e0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

      uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

      local_d0 = *(double *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

      FUN_002a21c0(param_4,extraout_x1_03,&local_f0);

    }

  }

  if ((DAT_003eaa30 != 1) || (uVar5 = FUN_0021af90(param_1), (uVar5 & 1) == 0)) {

    (*DAT_003eac28)(param_1,param_2,param_3,param_4,param_5);

    goto LAB_0020582c;

  }

  FUN_0020e91c(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_retain(param_5);

  if (((param_5 == 0) || ((DAT_003eaa30 & 1) == 0)) || (lVar2 == 0)) {

LAB_002057f0:

    lVar7 = 0;

    (*DAT_003eac28)(param_1,param_2,param_3,param_4,param_5);

  }

  else {

    lVar6 = FUN_0029c020(param_5);

    lVar7 = FUN_002974a0(lVar2);

    if (lVar6 != lVar7) goto LAB_002057f0;

    FUN_0020e940(param_1,lVar2,(DAT_003ead50 & DAT_003ead51 ^ 0xff) & 1);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if ((lVar6 == 0) || (iVar1 = FUN_00297aa0(lVar6), iVar1 == 0)) {

LAB_002057e4:

      _objc_release(lVar6);

      goto LAB_002057f0;

    }

    lVar7 = FUN_0029bae0(param_5);

    FUN_00294d00(lVar6);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    lVar9 = FUN_00293860();

    _objc_release(uVar8);

    if (lVar9 <= lVar7) goto LAB_002057e4;

    FUN_00294d00(lVar6);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    auVar11 = FUN_0029bae0(param_5);

    FUN_00299500(uVar8,auVar11._8_8_,auVar11._0_8_);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar8);

    _objc_release(lVar6);

    if (lVar7 == 0) goto LAB_002057f0;

    iVar1 = FUN_00297760(lVar7);

    if (iVar1 == 0) {

      FUN_00217b94(param_4);

      iVar1 = FUN_00297680(lVar7);

      if (iVar1 == 0) {

        uVar8 = FUN_00299940(lVar7);

        auVar11 = FUN_00299980(lVar7);

        FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar11._8_8_,uVar8,auVar11._0_8_);

        uVar8 = _objc_retainAutoreleasedReturnValue();

        DAT_003ead8c = DAT_003ead8c + 1;

        (*DAT_003eac28)(param_1,param_2,param_3,param_4,uVar8);

        DAT_003ead8c = DAT_003ead8c + -1;

        FUN_00217b94(param_4);

        FUN_00217f1c(param_4);

        _objc_release(uVar8);

        _objc_release(lVar7);

        _objc_release(param_5);

        _objc_release(lVar2);

        goto LAB_0020582c;

      }

      FUN_00217b94(param_4);

      FUN_00217f1c(param_4);

    }

    else {

      uVar8 = _objc_opt_class(&objc::class_t::XZYCLG3DGroupCell);

      uVar5 = _objc_opt_isKindOfClass(param_4,uVar8);

      if ((uVar5 & 1) != 0) {

        FUN_00297ee0(param_4);

        FUN_002a5b00(param_4);

      }

    }

  }

  _objc_release(lVar7);

  _objc_release(param_5);

  _objc_release(lVar2);

LAB_0020582c:

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




