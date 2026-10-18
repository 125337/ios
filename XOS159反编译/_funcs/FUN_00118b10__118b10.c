// FUN_00118b10 @0x118b10


void FUN_00118b10(undefined8 param_1,long param_2,undefined8 param_3)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar5;

  undefined8 extraout_x1_04;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined8 local_130;

  undefined8 uStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  if (param_2 != 0) {

    auVar8 = FUN_00297fa0(param_2);

    uVar3 = auVar8._8_8_;

    if (auVar8._0_8_ != 0) {

      if (DAT_003e82a0 == 0) {

        FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

        lVar2 = _objc_retainAutoreleasedReturnValue();

        lVar7 = DAT_003e82a0;

        DAT_003e82a0 = lVar2;

        _objc_release(lVar7);

        uVar3 = extraout_x1;

      }

      FUN_002a4680(&_OBJC_CLASS___NSString,uVar3,&cf______);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_00299540(DAT_003e82a0);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      lVar2 = auVar8._0_8_;

      if (lVar2 == 0) {

        iVar1 = FUN_00293580(param_2,auVar8._8_8_,&cf__);

        if (iVar1 == 0) {

          uStack_108 = 0;

          local_110 = 0;

          uStack_f8 = 0;

          uStack_100 = 0;

          uStack_128 = 0;

          local_130 = 0;

          uStack_118 = 0;

          local_120 = (long *)0x0;

          auVar8 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003be1b8,extraout_x1_00,

                                &local_130,auStack_f0,0x10);

          uVar5 = auVar8._8_8_;

          if (auVar8._0_8_ != 0) {

            lVar4 = *local_120;

            do {

              uVar5 = auVar8._8_8_;

              lVar6 = 0;

              do {

                if (*local_120 != lVar4) {

                  _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003be1b8);

                  uVar5 = extraout_x1_01;

                }

                FUN_002a4680(&_OBJC_CLASS___NSString,uVar5,&cf______);

                auVar9 = _objc_retainAutoreleasedReturnValue();

                FUN_002a4460(param_1,auVar9._8_8_,auVar9._0_8_);

                lVar7 = _objc_retainAutoreleasedReturnValue();

                _objc_release(auVar9._0_8_);

                auVar9 = FUN_00295160(param_3,extraout_x1_02,lVar7);

                uVar5 = auVar9._8_8_;

                if ((auVar9._0_8_ & 1) != 0) goto LAB_00118d64;

                _objc_release(lVar7);

                lVar6 = lVar6 + 1;

                uVar5 = extraout_x1_03;

              } while (auVar8._0_8_ != lVar6);

              auVar8 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003be1b8,extraout_x1_03,

                                    &local_130,auStack_f0,0x10);

              uVar5 = auVar8._8_8_;

            } while (auVar8._0_8_ != 0);

          }

          lVar7 = 0;

        }

        else {

          FUN_002a4460(param_1,extraout_x1_00,param_2);

          auVar8 = _objc_retainAutoreleasedReturnValue();

          lVar4 = auVar8._0_8_;

          iVar1 = FUN_00295160(param_3,auVar8._8_8_,lVar4);

          if (iVar1 == 0) {

            lVar7 = 0;

          }

          else {

            _objc_retain(lVar4);

            lVar7 = lVar4;

          }

          _objc_release(lVar4);

          uVar5 = extraout_x1_04;

        }

LAB_00118d64:

        auVar8._8_8_ = uVar5;

        auVar8._0_8_ = lVar7;

        if (lVar7 == 0) {

          FUN_002992c0(&_OBJC_CLASS___NSNull);

          auVar8 = _objc_retainAutoreleasedReturnValue();

        }

        FUN_002a00a0(DAT_003e82a0,auVar8._8_8_,auVar8._0_8_,uVar3);

        if (lVar7 == 0) {

          _objc_release(auVar8._0_8_);

        }

      }

      else {

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        lVar7 = 0;

        if (lVar2 != lVar4) {

          lVar7 = lVar2;

        }

        _objc_retain(lVar7);

        _objc_release(lVar4);

      }

      _objc_release(lVar2);

      _objc_release(uVar3);

      goto LAB_00118db8;

    }

  }

  lVar7 = 0;

LAB_00118db8:

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  _objc_autoreleaseReturnValue(lVar7);

  return;

}




